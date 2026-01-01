#include "ultra64.h"

//for drawing 2d images to the screen on top of everything else

Gfx* gfx_draw_textured_rectangle(Gfx* gfx, int x, int y, int width, int height, u8* texture) {
    gDPPipeSync(gfx++);

    gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);
    gDPSetRenderMode(gfx++, G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2);

    gDPLoadTextureBlock(gfx++, texture, G_IM_FMT_RGBA, G_IM_SIZ_32b, width, height,
                        0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
                        G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    gSPTextureRectangle(gfx++, x << 2, y << 2, (x + width) << 2, (y + height) << 2,
                        G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);

    gDPPipeSync(gfx++);
    return gfx;
}

Gfx* gfx_draw_textured_rectangle_rgba16(Gfx* gfx, int x, int y, int width, int height, u8* texture) {
    gDPPipeSync(gfx++);

    gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);
    gDPSetRenderMode(gfx++, G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2);

    gDPLoadTextureBlock(gfx++, texture, G_IM_FMT_RGBA, G_IM_SIZ_16b, width, height,
                        0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
                        G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    gSPTextureRectangle(gfx++, x << 2, y << 2, (x + width) << 2, (y + height) << 2,
                        G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);

    gDPPipeSync(gfx++);
    return gfx;
}

Gfx* gfx_draw_rectangle(Gfx* gfx, int x, int y, int width, int height, u32 color) {
    gDPSetCombineMode(gfx++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetPrimColor(gfx++,0,0,(color >> 24) & 0xFF,(color >> 16) & 0xFF,(color >> 8) & 0xFF,color & 0xFF);
    gDPPipeSync(gfx++);
    gDPFillRectangle(gfx++,x,y,x + width, y + height);
    return gfx;
}

extern u8 ciImage[];
extern u16 palette[];

Gfx* drawCi8Image(Gfx* gfx, int x, int y, int width, int height, u8* texture, u16* palette) {
    gDPSetTextureLUT(gfx++, G_TT_RGBA16);
    gSPTexture(gfx++, 0xFFFF, 0xFFFF, 0, 0, G_ON);
    gDPPipeSync(gfx++);
    gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);
    gDPSetRenderMode(gfx++, G_RM_AA_TEX_EDGE, G_RM_AA_TEX_EDGE2);
    gDPTileSync(gfx++);
    gDPSetTile(gfx++, G_IM_FMT_CI, G_IM_SIZ_8b, (width + 7) / 8, 0, 0, 0, G_TX_NOMIRROR, 5, 0, G_TX_NOMIRROR, 5, 0);
    gDPSetTileSize(gfx++, 0, 0, 0, (width - 1) << 2, (height - 1) << 2);
    gSPClearGeometryMode(gfx++, G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH);
    gSPSetGeometryMode(gfx++, G_SHADE | G_SHADING_SMOOTH);
    gDPLoadTLUT_pal256(gfx++, palette);
    gDPLoadTextureBlock(gfx++, texture, G_IM_FMT_CI, G_IM_SIZ_8b, width, height, 0, G_TX_NOMIRROR, G_TX_NOMIRROR, 5, 5, 0, 0);
    gSPTextureRectangle(gfx++, x << 2, y << 2, (x + width) << 2, (y + height) << 2,
                        G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);

    gDPPipeSync(gfx++);
    return gfx;
}

//has fix by claude, fixes black outline on images?
Gfx* drawCi4Image(Gfx* gfx, int x, int y, int width, int height, u8* texture, u16* palette) {
    gDPPipeSync(gfx++);
    
    gDPSetTextureLUT(gfx++, G_TT_RGBA16);
    gDPSetTextureFilter(gfx++, G_TF_POINT);
    gDPSetAlphaCompare(gfx++, G_AC_THRESHOLD);
    gDPSetBlendColor(gfx++, 0, 0, 0, 1);
    
    gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);
    gDPSetRenderMode(gfx++, G_RM_TEX_EDGE, G_RM_TEX_EDGE2);
    
    gDPLoadTLUT_pal16(gfx++, 0, palette);
    gDPLoadTextureBlock_4b(gfx++, texture, G_IM_FMT_CI, width, height, 0,
                           G_TX_NOMIRROR, G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    
    gSPTextureRectangle(gfx++, x << 2, y << 2, (x + width) << 2, (y + height) << 2,
                        G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);

    gDPPipeSync(gfx++);
    return gfx;
}

Gfx* drawCi4ImageScaled(Gfx* gfx, int x, int y, int width, int height, 
                        u8* texture, u16* palette, float scaleX, float scaleY) {
    gDPPipeSync(gfx++);
    
    gDPSetTextureLUT(gfx++, G_TT_RGBA16);
    gDPSetTextureFilter(gfx++, G_TF_POINT);  // or G_TF_BILERP for smoother scaling
    gDPSetAlphaCompare(gfx++, G_AC_THRESHOLD);
    gDPSetBlendColor(gfx++, 0, 0, 0, 1);
    
    gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);
    gDPSetRenderMode(gfx++, G_RM_TEX_EDGE, G_RM_TEX_EDGE2);
    
    gDPLoadTLUT_pal16(gfx++, 0, palette);
    gDPLoadTextureBlock_4b(gfx++, texture, G_IM_FMT_CI, width, height, 0,
                           G_TX_NOMIRROR, G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    
    int dsdx = (int)((1 << 10) / scaleX);
    int dtdy = (int)((1 << 10) / scaleY);
    int scaledWidth = (int)(width * scaleX);
    int scaledHeight = (int)(height * scaleY);
    
    gSPTextureRectangle(gfx++, x << 2, y << 2, 
                        (x + scaledWidth) << 2, (y + scaledHeight) << 2,
                        G_TX_RENDERTILE, 0, 0, dsdx, dtdy);

    gDPPipeSync(gfx++);
    return gfx;
}

Gfx* drawRgba16Image(Gfx* gfx, int x, int y, int width, int height, u16* texture) {
    gDPPipeSync(gfx++);
    
    gDPSetTextureLUT(gfx++, G_TT_NONE);  // No palette for RGBA
    gDPSetTextureFilter(gfx++, G_TF_POINT);
    gDPSetAlphaCompare(gfx++, G_AC_THRESHOLD);
    gDPSetBlendColor(gfx++, 0, 0, 0, 1);
    
    gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);
    gDPSetRenderMode(gfx++, G_RM_TEX_EDGE, G_RM_TEX_EDGE2);
    
    gDPLoadTextureBlock(gfx++, texture, G_IM_FMT_RGBA, G_IM_SIZ_16b, width, height, 0,
                        G_TX_NOMIRROR, G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    
    gSPTextureRectangle(gfx++, x << 2, y << 2, (x + width) << 2, (y + height) << 2,
                        G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);

    gDPPipeSync(gfx++);
    return gfx;
}

Gfx* drawRgba16ImageScaled(Gfx* gfx, int x, int y, int width, int height, 
                           u16* texture, float scaleX, float scaleY) {
    gDPPipeSync(gfx++);
    
    gDPSetTextureLUT(gfx++, G_TT_NONE);
    gDPSetTextureFilter(gfx++, G_TF_POINT);  // or G_TF_BILERP for smoother scaling
    gDPSetAlphaCompare(gfx++, G_AC_THRESHOLD);
    gDPSetBlendColor(gfx++, 0, 0, 0, 1);
    
    gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);
    gDPSetRenderMode(gfx++, G_RM_TEX_EDGE, G_RM_TEX_EDGE2);
    
    gDPLoadTextureBlock(gfx++, texture, G_IM_FMT_RGBA, G_IM_SIZ_16b, width, height, 0,
                        G_TX_NOMIRROR, G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    
    int dsdx = (int)((1 << 10) / scaleX);
    int dtdy = (int)((1 << 10) / scaleY);
    int scaledWidth = (int)(width * scaleX);
    int scaledHeight = (int)(height * scaleY);
    
    gSPTextureRectangle(gfx++, x << 2, y << 2, 
                        (x + scaledWidth) << 2, (y + scaledHeight) << 2,
                        G_TX_RENDERTILE, 0, 0, dsdx, dtdy);

    gDPPipeSync(gfx++);
    return gfx;
}