/* Library code: C that behaves like this game's own bytes. */
/* The NAOMI library's model put (nlObjPut*: the flat model format of the SDK's nlobjtyp.h), the entry points around the record
   drawer. Range 0C07AD00-0C07B460 (nlObjPut is in sdk_a.c, nlObjPutLoadTexture in sdk_c.c). Names from the SDK's libnlobj
   (the offsets of its names, laid at 0C072100, meet nlObjPut and the nlObjPutSet* names already known). A model starts with two words (the first picks the
   drawer, the second's bit 1 skips the light set-up) and a sphere; then NL_PF_GloblParamType2 records (docs/engine.md). */

extern void nlInvLightVectorUseViewMatrix(void);         /* the same through the view matrix (nlObjPutUseViewMatrix) */
extern void nlPushMatrix(void *m);
extern void nlPopMatrix(int n);
extern void nlMultiMatrix(void *m);
extern void nlMultiMatrixRevOrder8(void *m);
extern void nlMultiPushedMatrix(void);
extern void displaypolygondata_sidx(void *model, void *light);   /* the record drawer (fldi1 fr4, then FUN_0c081662's loop) */
extern void FUN_0c081662(void *model, void *light, float trs);   /* the same with the model's alpha in fr4 */
extern void nlInvLightVectorUseViewMatrix(void);
extern void nlTransposeMatrix(void);
extern void nlCalcVector(void *src, void *dst);
extern void nlScaleUnitVector(float *dst, float *src, float s);

#define MATRIX_0C2B34A8    ((void *)0x0C2B34A8)
#define VIEW_MATRIX     (*(void **)(0x0C2B31F4 + 8))
#define LIGHTS          ((void *)0x0C2B3150)
#define VTX_COLOR_PUT   (*(int *)0x0C14A970)     /* the vertex colour routine nlObjPutSetVtxColorMode picks (0: none) */

void nlobjput_sub(int *model);
void nlMakeModelViewProjectMatrix_objput(void);
void nlInvLightVector(void);
void nlobjput_sub_trnsl(int *model, float trs);


/* nlObjPut through the view matrix. */
void nlObjPutUseViewMatrix(int *model)
{
    if (!(model[1] & 2))
        nlInvLightVectorUseViewMatrix();
    nlMakeModelViewProjectMatrix_objput();
    nlobjput_sub(model);
}


/* nlObjPutTrnsl through the view matrix. */
void nlObjPutUseViewMatrixTrnsl(int *model, float trs)
{
    if (!(model[1] & 2))
        nlInvLightVectorUseViewMatrix();
    nlMakeModelViewProjectMatrix_objput();
    nlobjput_sub_trnsl(model, trs);
}
