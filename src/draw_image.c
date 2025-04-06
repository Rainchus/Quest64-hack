#include "Quest64.h"
#include "PR/gbi.h"

#define PM_CC_02        0, 0, 0, TEXEL0, TEXEL0, 0, PRIMITIVE, 0

typedef struct Rect2b {
    /* 0x00 */ s16 ulx;
    /* 0x02 */ s16 uly;
    /* 0x04 */ s16 lrx;
    /* 0x06 */ s16 lry;
} Rect2b; // size = 0x08

int _abs(int x) {
    return (x < 0) ? -x : x;
}

s32 draw_image_with_clipping(IMG_PTR raster, u32 width, u32 height, s32 fmt, s32 bitDepth,
                     s16 posX, s16 posY,
                     u16 clipX, u16 clipY,
                     u16 clipWidth, u16 clipHeight) {
    Rect2b texRect;
    Rect2b drawRect;
    u8 stopDrawing;
    u8 stopDrawingLine;
    s8 zero = 0; // required to match

    u16 texOffsetX, texOffsetY;

    if (posX >= clipX + clipWidth || posY >= clipY + clipHeight) {
        return FALSE;
    }
    if (clipX >= (s16)(posX + width)) {
        return FALSE;
    }
    if (clipY >= (s16)(posY + height)) {
        return FALSE;
    }

    texRect.uly = 0;
    drawRect.uly = posY;
    stopDrawing = FALSE;

    while (TRUE) {
        texRect.lry = texRect.uly + 31;
        drawRect.lry = drawRect.uly + 32;
        texOffsetY = 0;
        if (drawRect.lry <= clipY) {
            do {
                texRect.uly += 32;
                drawRect.uly = drawRect.lry;
                drawRect.lry += 32;
            } while (drawRect.lry < clipY);
            texRect.lry = texRect.uly + 31;
        }

        if (drawRect.uly < clipY) {
            texOffsetY = _abs(posY - clipY);
            drawRect.uly = clipY;
        }

        if (drawRect.lry >= clipY + clipHeight) {
            texRect.lry = clipY + clipHeight - posY - 1;
            stopDrawing = TRUE;
            drawRect.lry = clipY + clipHeight;
        }

        if (texRect.lry + 1 >= height) {
            texRect.lry = height - 1;
            drawRect.lry = texRect.lry + posY + 1;
            stopDrawing = TRUE;
        }

        texRect.ulx = zero;
        drawRect.ulx = posX;
        stopDrawingLine = FALSE;

        while (TRUE) {
            texRect.lrx = texRect.ulx + 63;
            drawRect.lrx = drawRect.ulx + 64;
            texOffsetX = 0;

            if (drawRect.lrx <= clipX) {
                do {
                    texRect.ulx += 64;
                    drawRect.ulx = drawRect.lrx;
                    drawRect.lrx += 64;
                } while (drawRect.lrx < clipX);
                texRect.lrx = texRect.ulx + 63;
            }

            if (drawRect.ulx < clipX) {
                texOffsetX = _abs(posX - clipX);
                drawRect.ulx = clipX;
            }

            if (drawRect.lrx >= clipX + clipWidth) {
                texRect.lrx = clipX + clipWidth - posX - 1;
                stopDrawingLine = TRUE;
                drawRect.lrx = clipX + clipWidth;
            }

            if (texRect.lrx + 1 >= width) {
                texRect.lrx = width - 1;
                drawRect.lrx = texRect.lrx + posX + 1;
                stopDrawingLine = TRUE;
            }

            if (bitDepth == G_IM_SIZ_4b) {
                gDPLoadTextureTile_4b(gMasterGfxPos++, raster, fmt, width, height,
                                texRect.ulx, texRect.uly, texRect.lrx, texRect.lry, 0,
                                G_TX_WRAP, G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD);
            } else if (bitDepth == G_IM_SIZ_16b) {
                gDPLoadTextureTile(gMasterGfxPos++, raster, fmt, G_IM_SIZ_16b, width, height,
                                texRect.ulx, texRect.uly, texRect.lrx, texRect.lry, 0,
                                G_TX_WRAP, G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD);
            } else if (bitDepth == G_IM_SIZ_8b) {
                gDPLoadTextureTile(gMasterGfxPos++, raster, fmt, G_IM_SIZ_8b, width, height,
                                texRect.ulx, texRect.uly, texRect.lrx, texRect.lry, 0,
                                G_TX_WRAP, G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD);
            }

            gSPTextureRectangle(gMasterGfxPos++, drawRect.ulx * 4, drawRect.uly * 4, drawRect.lrx * 4, drawRect.lry * 4,
                                0, texOffsetX * 32, texOffsetY * 32, 1024, 1024);

            if (stopDrawingLine) {
                break;
            }
            texRect.ulx += 64;
            drawRect.ulx = drawRect.lrx;
        }

        if (stopDrawing) {
            break;
        }
        texRect.uly += 32;
        drawRect.uly = drawRect.lry;
    }

    return TRUE;
}

s32 draw_ci_image_with_clipping(IMG_PTR raster, s32 width, s32 height, s32 fmt, s32 bitDepth, PAL_PTR palette, s16 posX,
                                s16 posY, u16 clipULx, u16 clipULy, u16 clipLRx, u16 clipRLy, u8 opacity) {
    s32 ret = 1;

    gDPPipeSync(gMasterGfxPos++);
    gDPSetCycleType(gMasterGfxPos++, G_CYC_1CYCLE);
    gDPSetTextureFilter(gMasterGfxPos++, G_TF_POINT);
    gDPSetTexturePersp(gMasterGfxPos++, G_TP_NONE);

    if (opacity == 255) {
        gDPSetRenderMode(gMasterGfxPos++, G_RM_TEX_EDGE, G_RM_TEX_EDGE2);
        gDPSetCombineMode(gMasterGfxPos++, G_CC_DECALRGBA, G_CC_DECALRGBA);
    } else if (opacity == 0) {
        return ret;
    } else {
        gDPSetRenderMode(gMasterGfxPos++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        gDPSetCombineMode(gMasterGfxPos++, PM_CC_02, PM_CC_02);
        gDPSetPrimColor(gMasterGfxPos++, 0, 0, 0, 0, 0, opacity);
    }

    if (fmt == G_IM_FMT_CI) {
        gDPSetTextureLUT(gMasterGfxPos++, G_TT_RGBA16);
        if (bitDepth == G_IM_SIZ_4b) {
            gDPLoadTLUT_pal16(gMasterGfxPos++, 0, palette);
        } else {
            gDPLoadTLUT_pal256(gMasterGfxPos++, palette);
        }
    } else {
        gDPSetTextureLUT(gMasterGfxPos++, G_TT_NONE);
    }
    ret = draw_image_with_clipping(raster, width, height, fmt, bitDepth, posX, posY, clipULx, clipULy, clipLRx, clipRLy);
    gDPPipeSync(gMasterGfxPos++);
    return ret;
}

typedef struct Rect {
    /* 0x00 */ s32 ulx;
    /* 0x04 */ s32 uly;
    /* 0x08 */ s32 lrx;
    /* 0x0C */ s32 lry;
} Rect; // size = 0x10

s32 draw_tiled_image(IMG_PTR raster, u32 width, u32 height, u8 fmt, u8 bitDepth,
                     s16 posX, s16 posY,
                     u16 clipX, u16 clipY, u16 clipWidth, u16 clipHeight,
                     f32 scaleX, f32 scaleY) {
    Rect texRect;
    Rect drawRect;
    s32 dsdx, dtdy;
    s32 texOffsetX, texOffsetY;
    u8 stopDrawing;
    u8 stopDrawingLine;

    if (scaleX < 0.01 || scaleY < 0.01) {
        return 0;
    }

    if (posX >= clipX + clipWidth  || posY >= clipY + clipHeight) {
        return 0;
    }

    if (clipX >= (s16)(posX + width * scaleX)) {
        return 0;
    }

    if (clipY >= (s16)(posY + height * scaleY)) {
        return 0;
    }

    stopDrawing = 0;
    texRect.uly = 0;
    drawRect.uly = posY;
    dsdx = 1.0f / scaleX * 1024.0f;
    dtdy = 1.0f / scaleY * 1024.0f;
    while (TRUE) {
        texRect.lry = texRect.uly + 31;
        drawRect.lry = drawRect.uly + (scaleY * 32.0 + 0.5);
        texOffsetY = 0;
        if (drawRect.lry <= clipY) {
            do {
                texRect.uly += 32;
                drawRect.uly = drawRect.lry;
                drawRect.lry += scaleY * 32.0f;
            } while (drawRect.lry < clipY);
            texRect.lry = texRect.uly + 31;
        }

        if (drawRect.uly < clipY) {
            drawRect.uly = clipY;
            texOffsetY = _abs(posY - clipY) / scaleY * 32.0f;
        }

        if ((u32)(texRect.lry + 1) >= height) {
            texRect.lry = height - 1;
            stopDrawing = 1;
            drawRect.lry = posY + (s16)(texRect.lry * scaleY);
            drawRect.lry += scaleY;
        }

        if (drawRect.lry > clipY + clipHeight) {
            drawRect.lry = clipY + clipHeight;
            if (!stopDrawing) {
                drawRect.lry = clipY + clipHeight;
                stopDrawing = 1;
            }
        }

        stopDrawingLine = 0;
        texRect.ulx = 0;
        drawRect.ulx = posX;
        while (TRUE) {
            texRect.lrx = texRect.ulx + 63;
            drawRect.lrx = drawRect.ulx + (scaleX * 64.0 + 0.3);
            texOffsetX = 0;

            if (drawRect.lrx <= clipX) {
                do {
                    texRect.ulx += 64;
                    drawRect.ulx = drawRect.lrx;
                    drawRect.lrx += scaleX * 64.0f;
                } while (drawRect.lrx < clipX);
                texRect.lrx = texRect.ulx + 63;
            }

            if (drawRect.ulx < clipX) {
                drawRect.ulx = clipX;
                texOffsetX = _abs(posX - clipX) / scaleX * 32.0f;
            }

            if ((u32)(texRect.lrx + 1) >= width) {
                texRect.lrx = width - 1;
                stopDrawingLine = TRUE;
                drawRect.lrx = posX + (s16)(texRect.lrx * scaleX);
                drawRect.lrx = drawRect.lrx + scaleX + 0.3;
            }

            if (drawRect.lrx > clipX + clipWidth) {
                drawRect.lrx = clipX + clipWidth;
                stopDrawingLine = TRUE;
            }

            if (bitDepth == G_IM_SIZ_16b) {
                gDPLoadTextureTile(gMasterGfxPos++, raster, fmt, G_IM_SIZ_16b, width, height,
                                texRect.ulx, texRect.uly, texRect.lrx, texRect.lry, 0,
                                G_TX_WRAP, G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD);
            } else if (bitDepth == G_IM_SIZ_4b) {
                gDPLoadTextureTile_4b(gMasterGfxPos++, raster, fmt, width, height,
                                texRect.ulx, texRect.uly, texRect.lrx, texRect.lry, 0,
                                G_TX_WRAP, G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD);
            }

            gSPTextureRectangle(gMasterGfxPos++, drawRect.ulx * 4, drawRect.uly * 4, (drawRect.lrx - stopDrawingLine) * 4, drawRect.lry * 4,
                                0, texOffsetX, texOffsetY, dsdx, dtdy);

            if (stopDrawingLine) {
                break;
            }
            texRect.ulx += 64;
            drawRect.ulx = drawRect.lrx;
        };

        if (stopDrawing) {
            break;
        }
        texRect.uly += 32;
        drawRect.uly = drawRect.lry;
    };

    return 1;
}
