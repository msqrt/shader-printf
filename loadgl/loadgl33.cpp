#include <Windows.h>
#include <gl/gl.h>
#include "glext.h"
#include "loadgl33.h"
PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements;
PFNGLTEXIMAGE3DPROC glTexImage3D;
PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D;
PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D;
PFNGLACTIVETEXTUREPROC glActiveTexture;
PFNGLSAMPLECOVERAGEPROC glSampleCoverage;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;
PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D;
PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage;
PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;
PFNGLMULTITEXCOORD1DPROC glMultiTexCoord1d;
PFNGLMULTITEXCOORD1DVPROC glMultiTexCoord1dv;
PFNGLMULTITEXCOORD1FPROC glMultiTexCoord1f;
PFNGLMULTITEXCOORD1FVPROC glMultiTexCoord1fv;
PFNGLMULTITEXCOORD1IPROC glMultiTexCoord1i;
PFNGLMULTITEXCOORD1IVPROC glMultiTexCoord1iv;
PFNGLMULTITEXCOORD1SPROC glMultiTexCoord1s;
PFNGLMULTITEXCOORD1SVPROC glMultiTexCoord1sv;
PFNGLMULTITEXCOORD2DPROC glMultiTexCoord2d;
PFNGLMULTITEXCOORD2DVPROC glMultiTexCoord2dv;
PFNGLMULTITEXCOORD2FPROC glMultiTexCoord2f;
PFNGLMULTITEXCOORD2FVPROC glMultiTexCoord2fv;
PFNGLMULTITEXCOORD2IPROC glMultiTexCoord2i;
PFNGLMULTITEXCOORD2IVPROC glMultiTexCoord2iv;
PFNGLMULTITEXCOORD2SPROC glMultiTexCoord2s;
PFNGLMULTITEXCOORD2SVPROC glMultiTexCoord2sv;
PFNGLMULTITEXCOORD3DPROC glMultiTexCoord3d;
PFNGLMULTITEXCOORD3DVPROC glMultiTexCoord3dv;
PFNGLMULTITEXCOORD3FPROC glMultiTexCoord3f;
PFNGLMULTITEXCOORD3FVPROC glMultiTexCoord3fv;
PFNGLMULTITEXCOORD3IPROC glMultiTexCoord3i;
PFNGLMULTITEXCOORD3IVPROC glMultiTexCoord3iv;
PFNGLMULTITEXCOORD3SPROC glMultiTexCoord3s;
PFNGLMULTITEXCOORD3SVPROC glMultiTexCoord3sv;
PFNGLMULTITEXCOORD4DPROC glMultiTexCoord4d;
PFNGLMULTITEXCOORD4DVPROC glMultiTexCoord4dv;
PFNGLMULTITEXCOORD4FPROC glMultiTexCoord4f;
PFNGLMULTITEXCOORD4FVPROC glMultiTexCoord4fv;
PFNGLMULTITEXCOORD4IPROC glMultiTexCoord4i;
PFNGLMULTITEXCOORD4IVPROC glMultiTexCoord4iv;
PFNGLMULTITEXCOORD4SPROC glMultiTexCoord4s;
PFNGLMULTITEXCOORD4SVPROC glMultiTexCoord4sv;
PFNGLLOADTRANSPOSEMATRIXFPROC glLoadTransposeMatrixf;
PFNGLLOADTRANSPOSEMATRIXDPROC glLoadTransposeMatrixd;
PFNGLMULTTRANSPOSEMATRIXFPROC glMultTransposeMatrixf;
PFNGLMULTTRANSPOSEMATRIXDPROC glMultTransposeMatrixd;
PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate;
PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays;
PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements;
PFNGLPOINTPARAMETERFPROC glPointParameterf;
PFNGLPOINTPARAMETERFVPROC glPointParameterfv;
PFNGLPOINTPARAMETERIPROC glPointParameteri;
PFNGLPOINTPARAMETERIVPROC glPointParameteriv;
PFNGLFOGCOORDFPROC glFogCoordf;
PFNGLFOGCOORDFVPROC glFogCoordfv;
PFNGLFOGCOORDDPROC glFogCoordd;
PFNGLFOGCOORDDVPROC glFogCoorddv;
PFNGLFOGCOORDPOINTERPROC glFogCoordPointer;
PFNGLSECONDARYCOLOR3BPROC glSecondaryColor3b;
PFNGLSECONDARYCOLOR3BVPROC glSecondaryColor3bv;
PFNGLSECONDARYCOLOR3DPROC glSecondaryColor3d;
PFNGLSECONDARYCOLOR3DVPROC glSecondaryColor3dv;
PFNGLSECONDARYCOLOR3FPROC glSecondaryColor3f;
PFNGLSECONDARYCOLOR3FVPROC glSecondaryColor3fv;
PFNGLSECONDARYCOLOR3IPROC glSecondaryColor3i;
PFNGLSECONDARYCOLOR3IVPROC glSecondaryColor3iv;
PFNGLSECONDARYCOLOR3SPROC glSecondaryColor3s;
PFNGLSECONDARYCOLOR3SVPROC glSecondaryColor3sv;
PFNGLSECONDARYCOLOR3UBPROC glSecondaryColor3ub;
PFNGLSECONDARYCOLOR3UBVPROC glSecondaryColor3ubv;
PFNGLSECONDARYCOLOR3UIPROC glSecondaryColor3ui;
PFNGLSECONDARYCOLOR3UIVPROC glSecondaryColor3uiv;
PFNGLSECONDARYCOLOR3USPROC glSecondaryColor3us;
PFNGLSECONDARYCOLOR3USVPROC glSecondaryColor3usv;
PFNGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer;
PFNGLWINDOWPOS2DPROC glWindowPos2d;
PFNGLWINDOWPOS2DVPROC glWindowPos2dv;
PFNGLWINDOWPOS2FPROC glWindowPos2f;
PFNGLWINDOWPOS2FVPROC glWindowPos2fv;
PFNGLWINDOWPOS2IPROC glWindowPos2i;
PFNGLWINDOWPOS2IVPROC glWindowPos2iv;
PFNGLWINDOWPOS2SPROC glWindowPos2s;
PFNGLWINDOWPOS2SVPROC glWindowPos2sv;
PFNGLWINDOWPOS3DPROC glWindowPos3d;
PFNGLWINDOWPOS3DVPROC glWindowPos3dv;
PFNGLWINDOWPOS3FPROC glWindowPos3f;
PFNGLWINDOWPOS3FVPROC glWindowPos3fv;
PFNGLWINDOWPOS3IPROC glWindowPos3i;
PFNGLWINDOWPOS3IVPROC glWindowPos3iv;
PFNGLWINDOWPOS3SPROC glWindowPos3s;
PFNGLWINDOWPOS3SVPROC glWindowPos3sv;
PFNGLBLENDCOLORPROC glBlendColor;
PFNGLBLENDEQUATIONPROC glBlendEquation;
PFNGLGENQUERIESPROC glGenQueries;
PFNGLDELETEQUERIESPROC glDeleteQueries;
PFNGLISQUERYPROC glIsQuery;
PFNGLBEGINQUERYPROC glBeginQuery;
PFNGLENDQUERYPROC glEndQuery;
PFNGLGETQUERYIVPROC glGetQueryiv;
PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv;
PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;
PFNGLBINDBUFFERPROC glBindBuffer;
PFNGLDELETEBUFFERSPROC glDeleteBuffers;
PFNGLGENBUFFERSPROC glGenBuffers;
PFNGLISBUFFERPROC glIsBuffer;
PFNGLBUFFERDATAPROC glBufferData;
PFNGLBUFFERSUBDATAPROC glBufferSubData;
PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData;
PFNGLMAPBUFFERPROC glMapBuffer;
PFNGLUNMAPBUFFERPROC glUnmapBuffer;
PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;
PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv;
PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate;
PFNGLDRAWBUFFERSPROC glDrawBuffers;
PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate;
PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate;
PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate;
PFNGLATTACHSHADERPROC glAttachShader;
PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;
PFNGLCOMPILESHADERPROC glCompileShader;
PFNGLCREATEPROGRAMPROC glCreateProgram;
PFNGLCREATESHADERPROC glCreateShader;
PFNGLDELETEPROGRAMPROC glDeleteProgram;
PFNGLDELETESHADERPROC glDeleteShader;
PFNGLDETACHSHADERPROC glDetachShader;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib;
PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform;
PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders;
PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
PFNGLGETPROGRAMIVPROC glGetProgramiv;
PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
PFNGLGETSHADERIVPROC glGetShaderiv;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
PFNGLGETSHADERSOURCEPROC glGetShaderSource;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
PFNGLGETUNIFORMFVPROC glGetUniformfv;
PFNGLGETUNIFORMIVPROC glGetUniformiv;
PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv;
PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv;
PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv;
PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv;
PFNGLISPROGRAMPROC glIsProgram;
PFNGLISSHADERPROC glIsShader;
PFNGLLINKPROGRAMPROC glLinkProgram;
PFNGLSHADERSOURCEPROC glShaderSource;
PFNGLUSEPROGRAMPROC glUseProgram;
PFNGLUNIFORM1FPROC glUniform1f;
PFNGLUNIFORM2FPROC glUniform2f;
PFNGLUNIFORM3FPROC glUniform3f;
PFNGLUNIFORM4FPROC glUniform4f;
PFNGLUNIFORM1IPROC glUniform1i;
PFNGLUNIFORM2IPROC glUniform2i;
PFNGLUNIFORM3IPROC glUniform3i;
PFNGLUNIFORM4IPROC glUniform4i;
PFNGLUNIFORM1FVPROC glUniform1fv;
PFNGLUNIFORM2FVPROC glUniform2fv;
PFNGLUNIFORM3FVPROC glUniform3fv;
PFNGLUNIFORM4FVPROC glUniform4fv;
PFNGLUNIFORM1IVPROC glUniform1iv;
PFNGLUNIFORM2IVPROC glUniform2iv;
PFNGLUNIFORM3IVPROC glUniform3iv;
PFNGLUNIFORM4IVPROC glUniform4iv;
PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv;
PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv;
PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
PFNGLVALIDATEPROGRAMPROC glValidateProgram;
PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d;
PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv;
PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f;
PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv;
PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s;
PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv;
PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d;
PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv;
PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f;
PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv;
PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s;
PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv;
PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d;
PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv;
PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f;
PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv;
PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s;
PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv;
PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv;
PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv;
PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv;
PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub;
PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv;
PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv;
PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv;
PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv;
PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d;
PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv;
PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f;
PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv;
PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv;
PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s;
PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv;
PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv;
PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv;
PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv;
PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv;
PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv;
PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv;
PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv;
PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv;
PFNGLCOLORMASKIPROC glColorMaski;
PFNGLGETBOOLEANI_VPROC glGetBooleani_v;
PFNGLGETINTEGERI_VPROC glGetIntegeri_v;
PFNGLENABLEIPROC glEnablei;
PFNGLDISABLEIPROC glDisablei;
PFNGLISENABLEDIPROC glIsEnabledi;
PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback;
PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback;
PFNGLBINDBUFFERRANGEPROC glBindBufferRange;
PFNGLBINDBUFFERBASEPROC glBindBufferBase;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying;
PFNGLCLAMPCOLORPROC glClampColor;
PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender;
PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender;
PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv;
PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv;
PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i;
PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i;
PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i;
PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i;
PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui;
PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui;
PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui;
PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui;
PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv;
PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv;
PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv;
PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv;
PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv;
PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv;
PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv;
PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv;
PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv;
PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv;
PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv;
PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv;
PFNGLGETUNIFORMUIVPROC glGetUniformuiv;
PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation;
PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation;
PFNGLUNIFORM1UIPROC glUniform1ui;
PFNGLUNIFORM2UIPROC glUniform2ui;
PFNGLUNIFORM3UIPROC glUniform3ui;
PFNGLUNIFORM4UIPROC glUniform4ui;
PFNGLUNIFORM1UIVPROC glUniform1uiv;
PFNGLUNIFORM2UIVPROC glUniform2uiv;
PFNGLUNIFORM3UIVPROC glUniform3uiv;
PFNGLUNIFORM4UIVPROC glUniform4uiv;
PFNGLTEXPARAMETERIIVPROC glTexParameterIiv;
PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv;
PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv;
PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv;
PFNGLCLEARBUFFERIVPROC glClearBufferiv;
PFNGLCLEARBUFFERUIVPROC glClearBufferuiv;
PFNGLCLEARBUFFERFVPROC glClearBufferfv;
PFNGLCLEARBUFFERFIPROC glClearBufferfi;
PFNGLGETSTRINGIPROC glGetStringi;
PFNGLISRENDERBUFFERPROC glIsRenderbuffer;
PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;
PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;
PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv;
PFNGLISFRAMEBUFFERPROC glIsFramebuffer;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D;
PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;
PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;
PFNGLGENERATEMIPMAPPROC glGenerateMipmap;
PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer;
PFNGLMAPBUFFERRANGEPROC glMapBufferRange;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange;
PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
PFNGLISVERTEXARRAYPROC glIsVertexArray;
PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;
PFNGLTEXBUFFERPROC glTexBuffer;
PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;
PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;
PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;
PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName;
PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;
PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;
PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex;
PFNGLPROVOKINGVERTEXPROC glProvokingVertex;
PFNGLFENCESYNCPROC glFenceSync;
PFNGLISSYNCPROC glIsSync;
PFNGLDELETESYNCPROC glDeleteSync;
PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
PFNGLWAITSYNCPROC glWaitSync;
PFNGLGETINTEGER64VPROC glGetInteger64v;
PFNGLGETSYNCIVPROC glGetSynciv;
PFNGLGETINTEGER64I_VPROC glGetInteger64i_v;
PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v;
PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;
PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;
PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample;
PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv;
PFNGLSAMPLEMASKIPROC glSampleMaski;
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed;
PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex;
PFNGLGENSAMPLERSPROC glGenSamplers;
PFNGLDELETESAMPLERSPROC glDeleteSamplers;
PFNGLISSAMPLERPROC glIsSampler;
PFNGLBINDSAMPLERPROC glBindSampler;
PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;
PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv;
PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf;
PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv;
PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv;
PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv;
PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv;
PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv;
PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv;
PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv;
PFNGLQUERYCOUNTERPROC glQueryCounter;
PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v;
PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v;
PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;
PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui;
PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv;
PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui;
PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv;
PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui;
PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv;
PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui;
PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv;
PFNGLVERTEXP2UIPROC glVertexP2ui;
PFNGLVERTEXP2UIVPROC glVertexP2uiv;
PFNGLVERTEXP3UIPROC glVertexP3ui;
PFNGLVERTEXP3UIVPROC glVertexP3uiv;
PFNGLVERTEXP4UIPROC glVertexP4ui;
PFNGLVERTEXP4UIVPROC glVertexP4uiv;
PFNGLTEXCOORDP1UIPROC glTexCoordP1ui;
PFNGLTEXCOORDP1UIVPROC glTexCoordP1uiv;
PFNGLTEXCOORDP2UIPROC glTexCoordP2ui;
PFNGLTEXCOORDP2UIVPROC glTexCoordP2uiv;
PFNGLTEXCOORDP3UIPROC glTexCoordP3ui;
PFNGLTEXCOORDP3UIVPROC glTexCoordP3uiv;
PFNGLTEXCOORDP4UIPROC glTexCoordP4ui;
PFNGLTEXCOORDP4UIVPROC glTexCoordP4uiv;
PFNGLMULTITEXCOORDP1UIPROC glMultiTexCoordP1ui;
PFNGLMULTITEXCOORDP1UIVPROC glMultiTexCoordP1uiv;
PFNGLMULTITEXCOORDP2UIPROC glMultiTexCoordP2ui;
PFNGLMULTITEXCOORDP2UIVPROC glMultiTexCoordP2uiv;
PFNGLMULTITEXCOORDP3UIPROC glMultiTexCoordP3ui;
PFNGLMULTITEXCOORDP3UIVPROC glMultiTexCoordP3uiv;
PFNGLMULTITEXCOORDP4UIPROC glMultiTexCoordP4ui;
PFNGLMULTITEXCOORDP4UIVPROC glMultiTexCoordP4uiv;
PFNGLNORMALP3UIPROC glNormalP3ui;
PFNGLNORMALP3UIVPROC glNormalP3uiv;
PFNGLCOLORP3UIPROC glColorP3ui;
PFNGLCOLORP3UIVPROC glColorP3uiv;
PFNGLCOLORP4UIPROC glColorP4ui;
PFNGLCOLORP4UIVPROC glColorP4uiv;
PFNGLSECONDARYCOLORP3UIPROC glSecondaryColorP3ui;
PFNGLSECONDARYCOLORP3UIVPROC glSecondaryColorP3uiv;
PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControl;
PFNGLDEBUGMESSAGEINSERTARBPROC glDebugMessageInsert;
PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallback;
PFNGLGETDEBUGMESSAGELOGARBPROC glGetDebugMessageLog;
PFNGLDEBUGMESSAGEENABLEAMDPROC glDebugMessageEnable;
PFNGLLABELOBJECTEXTPROC glLabelObject;
PFNGLGETOBJECTLABELEXTPROC glGetObjectLabel;
PFNGLINSERTEVENTMARKEREXTPROC glInsertEventMarker;
PFNGLPUSHGROUPMARKEREXTPROC glPushGroupMarker;
PFNGLPOPGROUPMARKEREXTPROC glPopGroupMarker;
#ifdef _DEBUG
int loadgl() {
	int result = 0;
	glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)wglGetProcAddress("glDrawRangeElements");
	if(!glDrawRangeElements) { MessageBox(0, "Couldn't load OpenGL core version 1.2, function \"glDrawRangeElements\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexImage3D = (PFNGLTEXIMAGE3DPROC)wglGetProcAddress("glTexImage3D");
	if(!glTexImage3D) { MessageBox(0, "Couldn't load OpenGL core version 1.2, function \"glTexImage3D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)wglGetProcAddress("glTexSubImage3D");
	if(!glTexSubImage3D) { MessageBox(0, "Couldn't load OpenGL core version 1.2, function \"glTexSubImage3D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)wglGetProcAddress("glCopyTexSubImage3D");
	if(!glCopyTexSubImage3D) { MessageBox(0, "Couldn't load OpenGL core version 1.2, function \"glCopyTexSubImage3D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glActiveTexture = (PFNGLACTIVETEXTUREPROC)wglGetProcAddress("glActiveTexture");
	if(!glActiveTexture) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glActiveTexture\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)wglGetProcAddress("glSampleCoverage");
	if(!glSampleCoverage) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glSampleCoverage\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)wglGetProcAddress("glCompressedTexImage3D");
	if(!glCompressedTexImage3D) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glCompressedTexImage3D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)wglGetProcAddress("glCompressedTexImage2D");
	if(!glCompressedTexImage2D) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glCompressedTexImage2D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)wglGetProcAddress("glCompressedTexImage1D");
	if(!glCompressedTexImage1D) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glCompressedTexImage1D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)wglGetProcAddress("glCompressedTexSubImage3D");
	if(!glCompressedTexSubImage3D) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glCompressedTexSubImage3D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)wglGetProcAddress("glCompressedTexSubImage2D");
	if(!glCompressedTexSubImage2D) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glCompressedTexSubImage2D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)wglGetProcAddress("glCompressedTexSubImage1D");
	if(!glCompressedTexSubImage1D) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glCompressedTexSubImage1D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)wglGetProcAddress("glGetCompressedTexImage");
	if(!glGetCompressedTexImage) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glGetCompressedTexImage\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glClientActiveTexture = (PFNGLCLIENTACTIVETEXTUREPROC)wglGetProcAddress("glClientActiveTexture");
	if(!glClientActiveTexture) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glClientActiveTexture\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord1d = (PFNGLMULTITEXCOORD1DPROC)wglGetProcAddress("glMultiTexCoord1d");
	if(!glMultiTexCoord1d) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord1d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord1dv = (PFNGLMULTITEXCOORD1DVPROC)wglGetProcAddress("glMultiTexCoord1dv");
	if(!glMultiTexCoord1dv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord1dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord1f = (PFNGLMULTITEXCOORD1FPROC)wglGetProcAddress("glMultiTexCoord1f");
	if(!glMultiTexCoord1f) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord1f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord1fv = (PFNGLMULTITEXCOORD1FVPROC)wglGetProcAddress("glMultiTexCoord1fv");
	if(!glMultiTexCoord1fv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord1fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord1i = (PFNGLMULTITEXCOORD1IPROC)wglGetProcAddress("glMultiTexCoord1i");
	if(!glMultiTexCoord1i) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord1i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord1iv = (PFNGLMULTITEXCOORD1IVPROC)wglGetProcAddress("glMultiTexCoord1iv");
	if(!glMultiTexCoord1iv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord1iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord1s = (PFNGLMULTITEXCOORD1SPROC)wglGetProcAddress("glMultiTexCoord1s");
	if(!glMultiTexCoord1s) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord1s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord1sv = (PFNGLMULTITEXCOORD1SVPROC)wglGetProcAddress("glMultiTexCoord1sv");
	if(!glMultiTexCoord1sv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord1sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord2d = (PFNGLMULTITEXCOORD2DPROC)wglGetProcAddress("glMultiTexCoord2d");
	if(!glMultiTexCoord2d) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord2d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord2dv = (PFNGLMULTITEXCOORD2DVPROC)wglGetProcAddress("glMultiTexCoord2dv");
	if(!glMultiTexCoord2dv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord2dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord2f = (PFNGLMULTITEXCOORD2FPROC)wglGetProcAddress("glMultiTexCoord2f");
	if(!glMultiTexCoord2f) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord2f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord2fv = (PFNGLMULTITEXCOORD2FVPROC)wglGetProcAddress("glMultiTexCoord2fv");
	if(!glMultiTexCoord2fv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord2fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord2i = (PFNGLMULTITEXCOORD2IPROC)wglGetProcAddress("glMultiTexCoord2i");
	if(!glMultiTexCoord2i) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord2i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord2iv = (PFNGLMULTITEXCOORD2IVPROC)wglGetProcAddress("glMultiTexCoord2iv");
	if(!glMultiTexCoord2iv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord2iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord2s = (PFNGLMULTITEXCOORD2SPROC)wglGetProcAddress("glMultiTexCoord2s");
	if(!glMultiTexCoord2s) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord2s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord2sv = (PFNGLMULTITEXCOORD2SVPROC)wglGetProcAddress("glMultiTexCoord2sv");
	if(!glMultiTexCoord2sv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord2sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord3d = (PFNGLMULTITEXCOORD3DPROC)wglGetProcAddress("glMultiTexCoord3d");
	if(!glMultiTexCoord3d) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord3d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord3dv = (PFNGLMULTITEXCOORD3DVPROC)wglGetProcAddress("glMultiTexCoord3dv");
	if(!glMultiTexCoord3dv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord3dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord3f = (PFNGLMULTITEXCOORD3FPROC)wglGetProcAddress("glMultiTexCoord3f");
	if(!glMultiTexCoord3f) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord3f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord3fv = (PFNGLMULTITEXCOORD3FVPROC)wglGetProcAddress("glMultiTexCoord3fv");
	if(!glMultiTexCoord3fv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord3fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord3i = (PFNGLMULTITEXCOORD3IPROC)wglGetProcAddress("glMultiTexCoord3i");
	if(!glMultiTexCoord3i) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord3i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord3iv = (PFNGLMULTITEXCOORD3IVPROC)wglGetProcAddress("glMultiTexCoord3iv");
	if(!glMultiTexCoord3iv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord3iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord3s = (PFNGLMULTITEXCOORD3SPROC)wglGetProcAddress("glMultiTexCoord3s");
	if(!glMultiTexCoord3s) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord3s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord3sv = (PFNGLMULTITEXCOORD3SVPROC)wglGetProcAddress("glMultiTexCoord3sv");
	if(!glMultiTexCoord3sv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord3sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord4d = (PFNGLMULTITEXCOORD4DPROC)wglGetProcAddress("glMultiTexCoord4d");
	if(!glMultiTexCoord4d) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord4d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord4dv = (PFNGLMULTITEXCOORD4DVPROC)wglGetProcAddress("glMultiTexCoord4dv");
	if(!glMultiTexCoord4dv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord4dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord4f = (PFNGLMULTITEXCOORD4FPROC)wglGetProcAddress("glMultiTexCoord4f");
	if(!glMultiTexCoord4f) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord4f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord4fv = (PFNGLMULTITEXCOORD4FVPROC)wglGetProcAddress("glMultiTexCoord4fv");
	if(!glMultiTexCoord4fv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord4fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord4i = (PFNGLMULTITEXCOORD4IPROC)wglGetProcAddress("glMultiTexCoord4i");
	if(!glMultiTexCoord4i) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord4i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord4iv = (PFNGLMULTITEXCOORD4IVPROC)wglGetProcAddress("glMultiTexCoord4iv");
	if(!glMultiTexCoord4iv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord4iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord4s = (PFNGLMULTITEXCOORD4SPROC)wglGetProcAddress("glMultiTexCoord4s");
	if(!glMultiTexCoord4s) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord4s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoord4sv = (PFNGLMULTITEXCOORD4SVPROC)wglGetProcAddress("glMultiTexCoord4sv");
	if(!glMultiTexCoord4sv) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultiTexCoord4sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glLoadTransposeMatrixf = (PFNGLLOADTRANSPOSEMATRIXFPROC)wglGetProcAddress("glLoadTransposeMatrixf");
	if(!glLoadTransposeMatrixf) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glLoadTransposeMatrixf\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glLoadTransposeMatrixd = (PFNGLLOADTRANSPOSEMATRIXDPROC)wglGetProcAddress("glLoadTransposeMatrixd");
	if(!glLoadTransposeMatrixd) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glLoadTransposeMatrixd\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultTransposeMatrixf = (PFNGLMULTTRANSPOSEMATRIXFPROC)wglGetProcAddress("glMultTransposeMatrixf");
	if(!glMultTransposeMatrixf) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultTransposeMatrixf\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultTransposeMatrixd = (PFNGLMULTTRANSPOSEMATRIXDPROC)wglGetProcAddress("glMultTransposeMatrixd");
	if(!glMultTransposeMatrixd) { MessageBox(0, "Couldn't load OpenGL core version 1.3, function \"glMultTransposeMatrixd\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)wglGetProcAddress("glBlendFuncSeparate");
	if(!glBlendFuncSeparate) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glBlendFuncSeparate\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)wglGetProcAddress("glMultiDrawArrays");
	if(!glMultiDrawArrays) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glMultiDrawArrays\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)wglGetProcAddress("glMultiDrawElements");
	if(!glMultiDrawElements) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glMultiDrawElements\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glPointParameterf = (PFNGLPOINTPARAMETERFPROC)wglGetProcAddress("glPointParameterf");
	if(!glPointParameterf) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glPointParameterf\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)wglGetProcAddress("glPointParameterfv");
	if(!glPointParameterfv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glPointParameterfv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glPointParameteri = (PFNGLPOINTPARAMETERIPROC)wglGetProcAddress("glPointParameteri");
	if(!glPointParameteri) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glPointParameteri\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)wglGetProcAddress("glPointParameteriv");
	if(!glPointParameteriv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glPointParameteriv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFogCoordf = (PFNGLFOGCOORDFPROC)wglGetProcAddress("glFogCoordf");
	if(!glFogCoordf) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glFogCoordf\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFogCoordfv = (PFNGLFOGCOORDFVPROC)wglGetProcAddress("glFogCoordfv");
	if(!glFogCoordfv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glFogCoordfv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFogCoordd = (PFNGLFOGCOORDDPROC)wglGetProcAddress("glFogCoordd");
	if(!glFogCoordd) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glFogCoordd\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFogCoorddv = (PFNGLFOGCOORDDVPROC)wglGetProcAddress("glFogCoorddv");
	if(!glFogCoorddv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glFogCoorddv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFogCoordPointer = (PFNGLFOGCOORDPOINTERPROC)wglGetProcAddress("glFogCoordPointer");
	if(!glFogCoordPointer) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glFogCoordPointer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3b = (PFNGLSECONDARYCOLOR3BPROC)wglGetProcAddress("glSecondaryColor3b");
	if(!glSecondaryColor3b) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3b\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3bv = (PFNGLSECONDARYCOLOR3BVPROC)wglGetProcAddress("glSecondaryColor3bv");
	if(!glSecondaryColor3bv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3bv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3d = (PFNGLSECONDARYCOLOR3DPROC)wglGetProcAddress("glSecondaryColor3d");
	if(!glSecondaryColor3d) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3dv = (PFNGLSECONDARYCOLOR3DVPROC)wglGetProcAddress("glSecondaryColor3dv");
	if(!glSecondaryColor3dv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3f = (PFNGLSECONDARYCOLOR3FPROC)wglGetProcAddress("glSecondaryColor3f");
	if(!glSecondaryColor3f) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3fv = (PFNGLSECONDARYCOLOR3FVPROC)wglGetProcAddress("glSecondaryColor3fv");
	if(!glSecondaryColor3fv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3i = (PFNGLSECONDARYCOLOR3IPROC)wglGetProcAddress("glSecondaryColor3i");
	if(!glSecondaryColor3i) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3iv = (PFNGLSECONDARYCOLOR3IVPROC)wglGetProcAddress("glSecondaryColor3iv");
	if(!glSecondaryColor3iv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3s = (PFNGLSECONDARYCOLOR3SPROC)wglGetProcAddress("glSecondaryColor3s");
	if(!glSecondaryColor3s) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3sv = (PFNGLSECONDARYCOLOR3SVPROC)wglGetProcAddress("glSecondaryColor3sv");
	if(!glSecondaryColor3sv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3ub = (PFNGLSECONDARYCOLOR3UBPROC)wglGetProcAddress("glSecondaryColor3ub");
	if(!glSecondaryColor3ub) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3ub\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3ubv = (PFNGLSECONDARYCOLOR3UBVPROC)wglGetProcAddress("glSecondaryColor3ubv");
	if(!glSecondaryColor3ubv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3ubv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3ui = (PFNGLSECONDARYCOLOR3UIPROC)wglGetProcAddress("glSecondaryColor3ui");
	if(!glSecondaryColor3ui) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3uiv = (PFNGLSECONDARYCOLOR3UIVPROC)wglGetProcAddress("glSecondaryColor3uiv");
	if(!glSecondaryColor3uiv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3us = (PFNGLSECONDARYCOLOR3USPROC)wglGetProcAddress("glSecondaryColor3us");
	if(!glSecondaryColor3us) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3us\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColor3usv = (PFNGLSECONDARYCOLOR3USVPROC)wglGetProcAddress("glSecondaryColor3usv");
	if(!glSecondaryColor3usv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColor3usv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColorPointer = (PFNGLSECONDARYCOLORPOINTERPROC)wglGetProcAddress("glSecondaryColorPointer");
	if(!glSecondaryColorPointer) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glSecondaryColorPointer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos2d = (PFNGLWINDOWPOS2DPROC)wglGetProcAddress("glWindowPos2d");
	if(!glWindowPos2d) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos2d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos2dv = (PFNGLWINDOWPOS2DVPROC)wglGetProcAddress("glWindowPos2dv");
	if(!glWindowPos2dv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos2dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos2f = (PFNGLWINDOWPOS2FPROC)wglGetProcAddress("glWindowPos2f");
	if(!glWindowPos2f) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos2f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos2fv = (PFNGLWINDOWPOS2FVPROC)wglGetProcAddress("glWindowPos2fv");
	if(!glWindowPos2fv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos2fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos2i = (PFNGLWINDOWPOS2IPROC)wglGetProcAddress("glWindowPos2i");
	if(!glWindowPos2i) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos2i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos2iv = (PFNGLWINDOWPOS2IVPROC)wglGetProcAddress("glWindowPos2iv");
	if(!glWindowPos2iv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos2iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos2s = (PFNGLWINDOWPOS2SPROC)wglGetProcAddress("glWindowPos2s");
	if(!glWindowPos2s) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos2s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos2sv = (PFNGLWINDOWPOS2SVPROC)wglGetProcAddress("glWindowPos2sv");
	if(!glWindowPos2sv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos2sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos3d = (PFNGLWINDOWPOS3DPROC)wglGetProcAddress("glWindowPos3d");
	if(!glWindowPos3d) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos3d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos3dv = (PFNGLWINDOWPOS3DVPROC)wglGetProcAddress("glWindowPos3dv");
	if(!glWindowPos3dv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos3dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos3f = (PFNGLWINDOWPOS3FPROC)wglGetProcAddress("glWindowPos3f");
	if(!glWindowPos3f) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos3f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos3fv = (PFNGLWINDOWPOS3FVPROC)wglGetProcAddress("glWindowPos3fv");
	if(!glWindowPos3fv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos3fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos3i = (PFNGLWINDOWPOS3IPROC)wglGetProcAddress("glWindowPos3i");
	if(!glWindowPos3i) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos3i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos3iv = (PFNGLWINDOWPOS3IVPROC)wglGetProcAddress("glWindowPos3iv");
	if(!glWindowPos3iv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos3iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos3s = (PFNGLWINDOWPOS3SPROC)wglGetProcAddress("glWindowPos3s");
	if(!glWindowPos3s) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos3s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWindowPos3sv = (PFNGLWINDOWPOS3SVPROC)wglGetProcAddress("glWindowPos3sv");
	if(!glWindowPos3sv) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glWindowPos3sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBlendColor = (PFNGLBLENDCOLORPROC)wglGetProcAddress("glBlendColor");
	if(!glBlendColor) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glBlendColor\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBlendEquation = (PFNGLBLENDEQUATIONPROC)wglGetProcAddress("glBlendEquation");
	if(!glBlendEquation) { MessageBox(0, "Couldn't load OpenGL core version 1.4, function \"glBlendEquation\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGenQueries = (PFNGLGENQUERIESPROC)wglGetProcAddress("glGenQueries");
	if(!glGenQueries) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glGenQueries\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDeleteQueries = (PFNGLDELETEQUERIESPROC)wglGetProcAddress("glDeleteQueries");
	if(!glDeleteQueries) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glDeleteQueries\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glIsQuery = (PFNGLISQUERYPROC)wglGetProcAddress("glIsQuery");
	if(!glIsQuery) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glIsQuery\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBeginQuery = (PFNGLBEGINQUERYPROC)wglGetProcAddress("glBeginQuery");
	if(!glBeginQuery) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glBeginQuery\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glEndQuery = (PFNGLENDQUERYPROC)wglGetProcAddress("glEndQuery");
	if(!glEndQuery) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glEndQuery\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetQueryiv = (PFNGLGETQUERYIVPROC)wglGetProcAddress("glGetQueryiv");
	if(!glGetQueryiv) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glGetQueryiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)wglGetProcAddress("glGetQueryObjectiv");
	if(!glGetQueryObjectiv) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glGetQueryObjectiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)wglGetProcAddress("glGetQueryObjectuiv");
	if(!glGetQueryObjectuiv) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glGetQueryObjectuiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBindBuffer = (PFNGLBINDBUFFERPROC)wglGetProcAddress("glBindBuffer");
	if(!glBindBuffer) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glBindBuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)wglGetProcAddress("glDeleteBuffers");
	if(!glDeleteBuffers) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glDeleteBuffers\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGenBuffers = (PFNGLGENBUFFERSPROC)wglGetProcAddress("glGenBuffers");
	if(!glGenBuffers) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glGenBuffers\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glIsBuffer = (PFNGLISBUFFERPROC)wglGetProcAddress("glIsBuffer");
	if(!glIsBuffer) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glIsBuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBufferData = (PFNGLBUFFERDATAPROC)wglGetProcAddress("glBufferData");
	if(!glBufferData) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glBufferData\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBufferSubData = (PFNGLBUFFERSUBDATAPROC)wglGetProcAddress("glBufferSubData");
	if(!glBufferSubData) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glBufferSubData\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)wglGetProcAddress("glGetBufferSubData");
	if(!glGetBufferSubData) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glGetBufferSubData\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMapBuffer = (PFNGLMAPBUFFERPROC)wglGetProcAddress("glMapBuffer");
	if(!glMapBuffer) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glMapBuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)wglGetProcAddress("glUnmapBuffer");
	if(!glUnmapBuffer) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glUnmapBuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetBufferParameteriv");
	if(!glGetBufferParameteriv) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glGetBufferParameteriv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)wglGetProcAddress("glGetBufferPointerv");
	if(!glGetBufferPointerv) { MessageBox(0, "Couldn't load OpenGL core version 1.5, function \"glGetBufferPointerv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)wglGetProcAddress("glBlendEquationSeparate");
	if(!glBlendEquationSeparate) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glBlendEquationSeparate\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDrawBuffers = (PFNGLDRAWBUFFERSPROC)wglGetProcAddress("glDrawBuffers");
	if(!glDrawBuffers) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glDrawBuffers\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)wglGetProcAddress("glStencilOpSeparate");
	if(!glStencilOpSeparate) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glStencilOpSeparate\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)wglGetProcAddress("glStencilFuncSeparate");
	if(!glStencilFuncSeparate) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glStencilFuncSeparate\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)wglGetProcAddress("glStencilMaskSeparate");
	if(!glStencilMaskSeparate) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glStencilMaskSeparate\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glAttachShader = (PFNGLATTACHSHADERPROC)wglGetProcAddress("glAttachShader");
	if(!glAttachShader) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glAttachShader\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)wglGetProcAddress("glBindAttribLocation");
	if(!glBindAttribLocation) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glBindAttribLocation\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCompileShader = (PFNGLCOMPILESHADERPROC)wglGetProcAddress("glCompileShader");
	if(!glCompileShader) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glCompileShader\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCreateProgram = (PFNGLCREATEPROGRAMPROC)wglGetProcAddress("glCreateProgram");
	if(!glCreateProgram) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glCreateProgram\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCreateShader = (PFNGLCREATESHADERPROC)wglGetProcAddress("glCreateShader");
	if(!glCreateShader) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glCreateShader\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDeleteProgram = (PFNGLDELETEPROGRAMPROC)wglGetProcAddress("glDeleteProgram");
	if(!glDeleteProgram) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glDeleteProgram\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDeleteShader = (PFNGLDELETESHADERPROC)wglGetProcAddress("glDeleteShader");
	if(!glDeleteShader) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glDeleteShader\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDetachShader = (PFNGLDETACHSHADERPROC)wglGetProcAddress("glDetachShader");
	if(!glDetachShader) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glDetachShader\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glDisableVertexAttribArray");
	if(!glDisableVertexAttribArray) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glDisableVertexAttribArray\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glEnableVertexAttribArray");
	if(!glEnableVertexAttribArray) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glEnableVertexAttribArray\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)wglGetProcAddress("glGetActiveAttrib");
	if(!glGetActiveAttrib) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetActiveAttrib\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)wglGetProcAddress("glGetActiveUniform");
	if(!glGetActiveUniform) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetActiveUniform\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)wglGetProcAddress("glGetAttachedShaders");
	if(!glGetAttachedShaders) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetAttachedShaders\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)wglGetProcAddress("glGetAttribLocation");
	if(!glGetAttribLocation) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetAttribLocation\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetProgramiv = (PFNGLGETPROGRAMIVPROC)wglGetProcAddress("glGetProgramiv");
	if(!glGetProgramiv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetProgramiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)wglGetProcAddress("glGetProgramInfoLog");
	if(!glGetProgramInfoLog) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetProgramInfoLog\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetShaderiv = (PFNGLGETSHADERIVPROC)wglGetProcAddress("glGetShaderiv");
	if(!glGetShaderiv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetShaderiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)wglGetProcAddress("glGetShaderInfoLog");
	if(!glGetShaderInfoLog) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetShaderInfoLog\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)wglGetProcAddress("glGetShaderSource");
	if(!glGetShaderSource) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetShaderSource\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)wglGetProcAddress("glGetUniformLocation");
	if(!glGetUniformLocation) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetUniformLocation\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetUniformfv = (PFNGLGETUNIFORMFVPROC)wglGetProcAddress("glGetUniformfv");
	if(!glGetUniformfv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetUniformfv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetUniformiv = (PFNGLGETUNIFORMIVPROC)wglGetProcAddress("glGetUniformiv");
	if(!glGetUniformiv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetUniformiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)wglGetProcAddress("glGetVertexAttribdv");
	if(!glGetVertexAttribdv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetVertexAttribdv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)wglGetProcAddress("glGetVertexAttribfv");
	if(!glGetVertexAttribfv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetVertexAttribfv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)wglGetProcAddress("glGetVertexAttribiv");
	if(!glGetVertexAttribiv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetVertexAttribiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)wglGetProcAddress("glGetVertexAttribPointerv");
	if(!glGetVertexAttribPointerv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glGetVertexAttribPointerv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glIsProgram = (PFNGLISPROGRAMPROC)wglGetProcAddress("glIsProgram");
	if(!glIsProgram) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glIsProgram\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glIsShader = (PFNGLISSHADERPROC)wglGetProcAddress("glIsShader");
	if(!glIsShader) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glIsShader\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glLinkProgram = (PFNGLLINKPROGRAMPROC)wglGetProcAddress("glLinkProgram");
	if(!glLinkProgram) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glLinkProgram\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glShaderSource = (PFNGLSHADERSOURCEPROC)wglGetProcAddress("glShaderSource");
	if(!glShaderSource) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glShaderSource\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUseProgram = (PFNGLUSEPROGRAMPROC)wglGetProcAddress("glUseProgram");
	if(!glUseProgram) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUseProgram\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform1f = (PFNGLUNIFORM1FPROC)wglGetProcAddress("glUniform1f");
	if(!glUniform1f) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform1f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform2f = (PFNGLUNIFORM2FPROC)wglGetProcAddress("glUniform2f");
	if(!glUniform2f) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform2f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform3f = (PFNGLUNIFORM3FPROC)wglGetProcAddress("glUniform3f");
	if(!glUniform3f) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform3f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform4f = (PFNGLUNIFORM4FPROC)wglGetProcAddress("glUniform4f");
	if(!glUniform4f) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform4f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform1i = (PFNGLUNIFORM1IPROC)wglGetProcAddress("glUniform1i");
	if(!glUniform1i) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform1i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform2i = (PFNGLUNIFORM2IPROC)wglGetProcAddress("glUniform2i");
	if(!glUniform2i) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform2i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform3i = (PFNGLUNIFORM3IPROC)wglGetProcAddress("glUniform3i");
	if(!glUniform3i) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform3i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform4i = (PFNGLUNIFORM4IPROC)wglGetProcAddress("glUniform4i");
	if(!glUniform4i) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform4i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform1fv = (PFNGLUNIFORM1FVPROC)wglGetProcAddress("glUniform1fv");
	if(!glUniform1fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform1fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform2fv = (PFNGLUNIFORM2FVPROC)wglGetProcAddress("glUniform2fv");
	if(!glUniform2fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform2fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform3fv = (PFNGLUNIFORM3FVPROC)wglGetProcAddress("glUniform3fv");
	if(!glUniform3fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform3fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform4fv = (PFNGLUNIFORM4FVPROC)wglGetProcAddress("glUniform4fv");
	if(!glUniform4fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform4fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform1iv = (PFNGLUNIFORM1IVPROC)wglGetProcAddress("glUniform1iv");
	if(!glUniform1iv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform1iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform2iv = (PFNGLUNIFORM2IVPROC)wglGetProcAddress("glUniform2iv");
	if(!glUniform2iv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform2iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform3iv = (PFNGLUNIFORM3IVPROC)wglGetProcAddress("glUniform3iv");
	if(!glUniform3iv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform3iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform4iv = (PFNGLUNIFORM4IVPROC)wglGetProcAddress("glUniform4iv");
	if(!glUniform4iv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniform4iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)wglGetProcAddress("glUniformMatrix2fv");
	if(!glUniformMatrix2fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniformMatrix2fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)wglGetProcAddress("glUniformMatrix3fv");
	if(!glUniformMatrix3fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniformMatrix3fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)wglGetProcAddress("glUniformMatrix4fv");
	if(!glUniformMatrix4fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glUniformMatrix4fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)wglGetProcAddress("glValidateProgram");
	if(!glValidateProgram) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glValidateProgram\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)wglGetProcAddress("glVertexAttrib1d");
	if(!glVertexAttrib1d) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib1d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)wglGetProcAddress("glVertexAttrib1dv");
	if(!glVertexAttrib1dv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib1dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)wglGetProcAddress("glVertexAttrib1f");
	if(!glVertexAttrib1f) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib1f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)wglGetProcAddress("glVertexAttrib1fv");
	if(!glVertexAttrib1fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib1fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)wglGetProcAddress("glVertexAttrib1s");
	if(!glVertexAttrib1s) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib1s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)wglGetProcAddress("glVertexAttrib1sv");
	if(!glVertexAttrib1sv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib1sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)wglGetProcAddress("glVertexAttrib2d");
	if(!glVertexAttrib2d) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib2d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)wglGetProcAddress("glVertexAttrib2dv");
	if(!glVertexAttrib2dv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib2dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)wglGetProcAddress("glVertexAttrib2f");
	if(!glVertexAttrib2f) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib2f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)wglGetProcAddress("glVertexAttrib2fv");
	if(!glVertexAttrib2fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib2fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)wglGetProcAddress("glVertexAttrib2s");
	if(!glVertexAttrib2s) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib2s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)wglGetProcAddress("glVertexAttrib2sv");
	if(!glVertexAttrib2sv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib2sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)wglGetProcAddress("glVertexAttrib3d");
	if(!glVertexAttrib3d) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib3d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)wglGetProcAddress("glVertexAttrib3dv");
	if(!glVertexAttrib3dv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib3dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)wglGetProcAddress("glVertexAttrib3f");
	if(!glVertexAttrib3f) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib3f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)wglGetProcAddress("glVertexAttrib3fv");
	if(!glVertexAttrib3fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib3fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)wglGetProcAddress("glVertexAttrib3s");
	if(!glVertexAttrib3s) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib3s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)wglGetProcAddress("glVertexAttrib3sv");
	if(!glVertexAttrib3sv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib3sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)wglGetProcAddress("glVertexAttrib4Nbv");
	if(!glVertexAttrib4Nbv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4Nbv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)wglGetProcAddress("glVertexAttrib4Niv");
	if(!glVertexAttrib4Niv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4Niv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)wglGetProcAddress("glVertexAttrib4Nsv");
	if(!glVertexAttrib4Nsv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4Nsv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)wglGetProcAddress("glVertexAttrib4Nub");
	if(!glVertexAttrib4Nub) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4Nub\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)wglGetProcAddress("glVertexAttrib4Nubv");
	if(!glVertexAttrib4Nubv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4Nubv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)wglGetProcAddress("glVertexAttrib4Nuiv");
	if(!glVertexAttrib4Nuiv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4Nuiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)wglGetProcAddress("glVertexAttrib4Nusv");
	if(!glVertexAttrib4Nusv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4Nusv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)wglGetProcAddress("glVertexAttrib4bv");
	if(!glVertexAttrib4bv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4bv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)wglGetProcAddress("glVertexAttrib4d");
	if(!glVertexAttrib4d) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4d\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)wglGetProcAddress("glVertexAttrib4dv");
	if(!glVertexAttrib4dv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4dv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)wglGetProcAddress("glVertexAttrib4f");
	if(!glVertexAttrib4f) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4f\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)wglGetProcAddress("glVertexAttrib4fv");
	if(!glVertexAttrib4fv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)wglGetProcAddress("glVertexAttrib4iv");
	if(!glVertexAttrib4iv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)wglGetProcAddress("glVertexAttrib4s");
	if(!glVertexAttrib4s) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4s\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)wglGetProcAddress("glVertexAttrib4sv");
	if(!glVertexAttrib4sv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)wglGetProcAddress("glVertexAttrib4ubv");
	if(!glVertexAttrib4ubv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4ubv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)wglGetProcAddress("glVertexAttrib4uiv");
	if(!glVertexAttrib4uiv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)wglGetProcAddress("glVertexAttrib4usv");
	if(!glVertexAttrib4usv) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttrib4usv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)wglGetProcAddress("glVertexAttribPointer");
	if(!glVertexAttribPointer) { MessageBox(0, "Couldn't load OpenGL core version 2.0, function \"glVertexAttribPointer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)wglGetProcAddress("glUniformMatrix2x3fv");
	if(!glUniformMatrix2x3fv) { MessageBox(0, "Couldn't load OpenGL core version 2.1, function \"glUniformMatrix2x3fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)wglGetProcAddress("glUniformMatrix3x2fv");
	if(!glUniformMatrix3x2fv) { MessageBox(0, "Couldn't load OpenGL core version 2.1, function \"glUniformMatrix3x2fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)wglGetProcAddress("glUniformMatrix2x4fv");
	if(!glUniformMatrix2x4fv) { MessageBox(0, "Couldn't load OpenGL core version 2.1, function \"glUniformMatrix2x4fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)wglGetProcAddress("glUniformMatrix4x2fv");
	if(!glUniformMatrix4x2fv) { MessageBox(0, "Couldn't load OpenGL core version 2.1, function \"glUniformMatrix4x2fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)wglGetProcAddress("glUniformMatrix3x4fv");
	if(!glUniformMatrix3x4fv) { MessageBox(0, "Couldn't load OpenGL core version 2.1, function \"glUniformMatrix3x4fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)wglGetProcAddress("glUniformMatrix4x3fv");
	if(!glUniformMatrix4x3fv) { MessageBox(0, "Couldn't load OpenGL core version 2.1, function \"glUniformMatrix4x3fv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glColorMaski = (PFNGLCOLORMASKIPROC)wglGetProcAddress("glColorMaski");
	if(!glColorMaski) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glColorMaski\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)wglGetProcAddress("glGetBooleani_v");
	if(!glGetBooleani_v) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetBooleani_v\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)wglGetProcAddress("glGetIntegeri_v");
	if(!glGetIntegeri_v) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetIntegeri_v\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glEnablei = (PFNGLENABLEIPROC)wglGetProcAddress("glEnablei");
	if(!glEnablei) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glEnablei\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDisablei = (PFNGLDISABLEIPROC)wglGetProcAddress("glDisablei");
	if(!glDisablei) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glDisablei\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glIsEnabledi = (PFNGLISENABLEDIPROC)wglGetProcAddress("glIsEnabledi");
	if(!glIsEnabledi) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glIsEnabledi\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)wglGetProcAddress("glBeginTransformFeedback");
	if(!glBeginTransformFeedback) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glBeginTransformFeedback\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)wglGetProcAddress("glEndTransformFeedback");
	if(!glEndTransformFeedback) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glEndTransformFeedback\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)wglGetProcAddress("glBindBufferRange");
	if(!glBindBufferRange) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glBindBufferRange\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)wglGetProcAddress("glBindBufferBase");
	if(!glBindBufferBase) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glBindBufferBase\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)wglGetProcAddress("glTransformFeedbackVaryings");
	if(!glTransformFeedbackVaryings) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glTransformFeedbackVaryings\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)wglGetProcAddress("glGetTransformFeedbackVarying");
	if(!glGetTransformFeedbackVarying) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetTransformFeedbackVarying\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glClampColor = (PFNGLCLAMPCOLORPROC)wglGetProcAddress("glClampColor");
	if(!glClampColor) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glClampColor\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)wglGetProcAddress("glBeginConditionalRender");
	if(!glBeginConditionalRender) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glBeginConditionalRender\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)wglGetProcAddress("glEndConditionalRender");
	if(!glEndConditionalRender) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glEndConditionalRender\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)wglGetProcAddress("glVertexAttribIPointer");
	if(!glVertexAttribIPointer) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribIPointer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)wglGetProcAddress("glGetVertexAttribIiv");
	if(!glGetVertexAttribIiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetVertexAttribIiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)wglGetProcAddress("glGetVertexAttribIuiv");
	if(!glGetVertexAttribIuiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetVertexAttribIuiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)wglGetProcAddress("glVertexAttribI1i");
	if(!glVertexAttribI1i) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI1i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)wglGetProcAddress("glVertexAttribI2i");
	if(!glVertexAttribI2i) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI2i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)wglGetProcAddress("glVertexAttribI3i");
	if(!glVertexAttribI3i) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI3i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)wglGetProcAddress("glVertexAttribI4i");
	if(!glVertexAttribI4i) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI4i\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)wglGetProcAddress("glVertexAttribI1ui");
	if(!glVertexAttribI1ui) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI1ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)wglGetProcAddress("glVertexAttribI2ui");
	if(!glVertexAttribI2ui) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI2ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)wglGetProcAddress("glVertexAttribI3ui");
	if(!glVertexAttribI3ui) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI3ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)wglGetProcAddress("glVertexAttribI4ui");
	if(!glVertexAttribI4ui) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI4ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)wglGetProcAddress("glVertexAttribI1iv");
	if(!glVertexAttribI1iv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI1iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)wglGetProcAddress("glVertexAttribI2iv");
	if(!glVertexAttribI2iv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI2iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)wglGetProcAddress("glVertexAttribI3iv");
	if(!glVertexAttribI3iv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI3iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)wglGetProcAddress("glVertexAttribI4iv");
	if(!glVertexAttribI4iv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI4iv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)wglGetProcAddress("glVertexAttribI1uiv");
	if(!glVertexAttribI1uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI1uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)wglGetProcAddress("glVertexAttribI2uiv");
	if(!glVertexAttribI2uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI2uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)wglGetProcAddress("glVertexAttribI3uiv");
	if(!glVertexAttribI3uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI3uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)wglGetProcAddress("glVertexAttribI4uiv");
	if(!glVertexAttribI4uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI4uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)wglGetProcAddress("glVertexAttribI4bv");
	if(!glVertexAttribI4bv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI4bv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)wglGetProcAddress("glVertexAttribI4sv");
	if(!glVertexAttribI4sv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI4sv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)wglGetProcAddress("glVertexAttribI4ubv");
	if(!glVertexAttribI4ubv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI4ubv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)wglGetProcAddress("glVertexAttribI4usv");
	if(!glVertexAttribI4usv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glVertexAttribI4usv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)wglGetProcAddress("glGetUniformuiv");
	if(!glGetUniformuiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetUniformuiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)wglGetProcAddress("glBindFragDataLocation");
	if(!glBindFragDataLocation) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glBindFragDataLocation\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)wglGetProcAddress("glGetFragDataLocation");
	if(!glGetFragDataLocation) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetFragDataLocation\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform1ui = (PFNGLUNIFORM1UIPROC)wglGetProcAddress("glUniform1ui");
	if(!glUniform1ui) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glUniform1ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform2ui = (PFNGLUNIFORM2UIPROC)wglGetProcAddress("glUniform2ui");
	if(!glUniform2ui) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glUniform2ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform3ui = (PFNGLUNIFORM3UIPROC)wglGetProcAddress("glUniform3ui");
	if(!glUniform3ui) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glUniform3ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform4ui = (PFNGLUNIFORM4UIPROC)wglGetProcAddress("glUniform4ui");
	if(!glUniform4ui) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glUniform4ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform1uiv = (PFNGLUNIFORM1UIVPROC)wglGetProcAddress("glUniform1uiv");
	if(!glUniform1uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glUniform1uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform2uiv = (PFNGLUNIFORM2UIVPROC)wglGetProcAddress("glUniform2uiv");
	if(!glUniform2uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glUniform2uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform3uiv = (PFNGLUNIFORM3UIVPROC)wglGetProcAddress("glUniform3uiv");
	if(!glUniform3uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glUniform3uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniform4uiv = (PFNGLUNIFORM4UIVPROC)wglGetProcAddress("glUniform4uiv");
	if(!glUniform4uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glUniform4uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)wglGetProcAddress("glTexParameterIiv");
	if(!glTexParameterIiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glTexParameterIiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)wglGetProcAddress("glTexParameterIuiv");
	if(!glTexParameterIuiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glTexParameterIuiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)wglGetProcAddress("glGetTexParameterIiv");
	if(!glGetTexParameterIiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetTexParameterIiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)wglGetProcAddress("glGetTexParameterIuiv");
	if(!glGetTexParameterIuiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetTexParameterIuiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)wglGetProcAddress("glClearBufferiv");
	if(!glClearBufferiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glClearBufferiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)wglGetProcAddress("glClearBufferuiv");
	if(!glClearBufferuiv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glClearBufferuiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)wglGetProcAddress("glClearBufferfv");
	if(!glClearBufferfv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glClearBufferfv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)wglGetProcAddress("glClearBufferfi");
	if(!glClearBufferfi) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glClearBufferfi\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetStringi = (PFNGLGETSTRINGIPROC)wglGetProcAddress("glGetStringi");
	if(!glGetStringi) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetStringi\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)wglGetProcAddress("glIsRenderbuffer");
	if(!glIsRenderbuffer) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glIsRenderbuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)wglGetProcAddress("glBindRenderbuffer");
	if(!glBindRenderbuffer) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glBindRenderbuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)wglGetProcAddress("glDeleteRenderbuffers");
	if(!glDeleteRenderbuffers) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glDeleteRenderbuffers\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)wglGetProcAddress("glGenRenderbuffers");
	if(!glGenRenderbuffers) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGenRenderbuffers\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)wglGetProcAddress("glRenderbufferStorage");
	if(!glRenderbufferStorage) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glRenderbufferStorage\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetRenderbufferParameteriv");
	if(!glGetRenderbufferParameteriv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetRenderbufferParameteriv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)wglGetProcAddress("glIsFramebuffer");
	if(!glIsFramebuffer) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glIsFramebuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)wglGetProcAddress("glBindFramebuffer");
	if(!glBindFramebuffer) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glBindFramebuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)wglGetProcAddress("glDeleteFramebuffers");
	if(!glDeleteFramebuffers) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glDeleteFramebuffers\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)wglGetProcAddress("glGenFramebuffers");
	if(!glGenFramebuffers) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGenFramebuffers\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)wglGetProcAddress("glCheckFramebufferStatus");
	if(!glCheckFramebufferStatus) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glCheckFramebufferStatus\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)wglGetProcAddress("glFramebufferTexture1D");
	if(!glFramebufferTexture1D) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glFramebufferTexture1D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)wglGetProcAddress("glFramebufferTexture2D");
	if(!glFramebufferTexture2D) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glFramebufferTexture2D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)wglGetProcAddress("glFramebufferTexture3D");
	if(!glFramebufferTexture3D) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glFramebufferTexture3D\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)wglGetProcAddress("glFramebufferRenderbuffer");
	if(!glFramebufferRenderbuffer) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glFramebufferRenderbuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
	if(!glGetFramebufferAttachmentParameteriv) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGetFramebufferAttachmentParameteriv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)wglGetProcAddress("glGenerateMipmap");
	if(!glGenerateMipmap) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGenerateMipmap\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)wglGetProcAddress("glBlitFramebuffer");
	if(!glBlitFramebuffer) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glBlitFramebuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)wglGetProcAddress("glRenderbufferStorageMultisample");
	if(!glRenderbufferStorageMultisample) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glRenderbufferStorageMultisample\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)wglGetProcAddress("glFramebufferTextureLayer");
	if(!glFramebufferTextureLayer) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glFramebufferTextureLayer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)wglGetProcAddress("glMapBufferRange");
	if(!glMapBufferRange) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glMapBufferRange\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)wglGetProcAddress("glFlushMappedBufferRange");
	if(!glFlushMappedBufferRange) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glFlushMappedBufferRange\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)wglGetProcAddress("glBindVertexArray");
	if(!glBindVertexArray) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glBindVertexArray\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)wglGetProcAddress("glDeleteVertexArrays");
	if(!glDeleteVertexArrays) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glDeleteVertexArrays\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)wglGetProcAddress("glGenVertexArrays");
	if(!glGenVertexArrays) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glGenVertexArrays\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glIsVertexArray = (PFNGLISVERTEXARRAYPROC)wglGetProcAddress("glIsVertexArray");
	if(!glIsVertexArray) { MessageBox(0, "Couldn't load OpenGL core version 3.0, function \"glIsVertexArray\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)wglGetProcAddress("glDrawArraysInstanced");
	if(!glDrawArraysInstanced) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glDrawArraysInstanced\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)wglGetProcAddress("glDrawElementsInstanced");
	if(!glDrawElementsInstanced) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glDrawElementsInstanced\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexBuffer = (PFNGLTEXBUFFERPROC)wglGetProcAddress("glTexBuffer");
	if(!glTexBuffer) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glTexBuffer\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)wglGetProcAddress("glPrimitiveRestartIndex");
	if(!glPrimitiveRestartIndex) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glPrimitiveRestartIndex\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)wglGetProcAddress("glCopyBufferSubData");
	if(!glCopyBufferSubData) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glCopyBufferSubData\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)wglGetProcAddress("glGetUniformIndices");
	if(!glGetUniformIndices) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glGetUniformIndices\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)wglGetProcAddress("glGetActiveUniformsiv");
	if(!glGetActiveUniformsiv) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glGetActiveUniformsiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)wglGetProcAddress("glGetActiveUniformName");
	if(!glGetActiveUniformName) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glGetActiveUniformName\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)wglGetProcAddress("glGetUniformBlockIndex");
	if(!glGetUniformBlockIndex) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glGetUniformBlockIndex\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)wglGetProcAddress("glGetActiveUniformBlockiv");
	if(!glGetActiveUniformBlockiv) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glGetActiveUniformBlockiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)wglGetProcAddress("glGetActiveUniformBlockName");
	if(!glGetActiveUniformBlockName) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glGetActiveUniformBlockName\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)wglGetProcAddress("glUniformBlockBinding");
	if(!glUniformBlockBinding) { MessageBox(0, "Couldn't load OpenGL core version 3.1, function \"glUniformBlockBinding\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)wglGetProcAddress("glDrawElementsBaseVertex");
	if(!glDrawElementsBaseVertex) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glDrawElementsBaseVertex\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)wglGetProcAddress("glDrawRangeElementsBaseVertex");
	if(!glDrawRangeElementsBaseVertex) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glDrawRangeElementsBaseVertex\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)wglGetProcAddress("glDrawElementsInstancedBaseVertex");
	if(!glDrawElementsInstancedBaseVertex) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glDrawElementsInstancedBaseVertex\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)wglGetProcAddress("glMultiDrawElementsBaseVertex");
	if(!glMultiDrawElementsBaseVertex) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glMultiDrawElementsBaseVertex\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)wglGetProcAddress("glProvokingVertex");
	if(!glProvokingVertex) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glProvokingVertex\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFenceSync = (PFNGLFENCESYNCPROC)wglGetProcAddress("glFenceSync");
	if(!glFenceSync) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glFenceSync\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glIsSync = (PFNGLISSYNCPROC)wglGetProcAddress("glIsSync");
	if(!glIsSync) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glIsSync\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDeleteSync = (PFNGLDELETESYNCPROC)wglGetProcAddress("glDeleteSync");
	if(!glDeleteSync) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glDeleteSync\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)wglGetProcAddress("glClientWaitSync");
	if(!glClientWaitSync) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glClientWaitSync\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glWaitSync = (PFNGLWAITSYNCPROC)wglGetProcAddress("glWaitSync");
	if(!glWaitSync) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glWaitSync\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetInteger64v = (PFNGLGETINTEGER64VPROC)wglGetProcAddress("glGetInteger64v");
	if(!glGetInteger64v) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glGetInteger64v\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetSynciv = (PFNGLGETSYNCIVPROC)wglGetProcAddress("glGetSynciv");
	if(!glGetSynciv) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glGetSynciv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)wglGetProcAddress("glGetInteger64i_v");
	if(!glGetInteger64i_v) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glGetInteger64i_v\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)wglGetProcAddress("glGetBufferParameteri64v");
	if(!glGetBufferParameteri64v) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glGetBufferParameteri64v\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)wglGetProcAddress("glFramebufferTexture");
	if(!glFramebufferTexture) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glFramebufferTexture\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)wglGetProcAddress("glTexImage2DMultisample");
	if(!glTexImage2DMultisample) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glTexImage2DMultisample\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)wglGetProcAddress("glTexImage3DMultisample");
	if(!glTexImage3DMultisample) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glTexImage3DMultisample\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)wglGetProcAddress("glGetMultisamplefv");
	if(!glGetMultisamplefv) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glGetMultisamplefv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSampleMaski = (PFNGLSAMPLEMASKIPROC)wglGetProcAddress("glSampleMaski");
	if(!glSampleMaski) { MessageBox(0, "Couldn't load OpenGL core version 3.2, function \"glSampleMaski\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)wglGetProcAddress("glBindFragDataLocationIndexed");
	if(!glBindFragDataLocationIndexed) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glBindFragDataLocationIndexed\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC)wglGetProcAddress("glGetFragDataIndex");
	if(!glGetFragDataIndex) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glGetFragDataIndex\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGenSamplers = (PFNGLGENSAMPLERSPROC)wglGetProcAddress("glGenSamplers");
	if(!glGenSamplers) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glGenSamplers\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDeleteSamplers = (PFNGLDELETESAMPLERSPROC)wglGetProcAddress("glDeleteSamplers");
	if(!glDeleteSamplers) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glDeleteSamplers\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glIsSampler = (PFNGLISSAMPLERPROC)wglGetProcAddress("glIsSampler");
	if(!glIsSampler) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glIsSampler\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glBindSampler = (PFNGLBINDSAMPLERPROC)wglGetProcAddress("glBindSampler");
	if(!glBindSampler) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glBindSampler\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC)wglGetProcAddress("glSamplerParameteri");
	if(!glSamplerParameteri) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glSamplerParameteri\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC)wglGetProcAddress("glSamplerParameteriv");
	if(!glSamplerParameteriv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glSamplerParameteriv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC)wglGetProcAddress("glSamplerParameterf");
	if(!glSamplerParameterf) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glSamplerParameterf\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC)wglGetProcAddress("glSamplerParameterfv");
	if(!glSamplerParameterfv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glSamplerParameterfv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC)wglGetProcAddress("glSamplerParameterIiv");
	if(!glSamplerParameterIiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glSamplerParameterIiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC)wglGetProcAddress("glSamplerParameterIuiv");
	if(!glSamplerParameterIuiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glSamplerParameterIuiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)wglGetProcAddress("glGetSamplerParameteriv");
	if(!glGetSamplerParameteriv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glGetSamplerParameteriv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)wglGetProcAddress("glGetSamplerParameterIiv");
	if(!glGetSamplerParameterIiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glGetSamplerParameterIiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)wglGetProcAddress("glGetSamplerParameterfv");
	if(!glGetSamplerParameterfv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glGetSamplerParameterfv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)wglGetProcAddress("glGetSamplerParameterIuiv");
	if(!glGetSamplerParameterIuiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glGetSamplerParameterIuiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glQueryCounter = (PFNGLQUERYCOUNTERPROC)wglGetProcAddress("glQueryCounter");
	if(!glQueryCounter) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glQueryCounter\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC)wglGetProcAddress("glGetQueryObjecti64v");
	if(!glGetQueryObjecti64v) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glGetQueryObjecti64v\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC)wglGetProcAddress("glGetQueryObjectui64v");
	if(!glGetQueryObjectui64v) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glGetQueryObjectui64v\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC)wglGetProcAddress("glVertexAttribDivisor");
	if(!glVertexAttribDivisor) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexAttribDivisor\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC)wglGetProcAddress("glVertexAttribP1ui");
	if(!glVertexAttribP1ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexAttribP1ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC)wglGetProcAddress("glVertexAttribP1uiv");
	if(!glVertexAttribP1uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexAttribP1uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC)wglGetProcAddress("glVertexAttribP2ui");
	if(!glVertexAttribP2ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexAttribP2ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC)wglGetProcAddress("glVertexAttribP2uiv");
	if(!glVertexAttribP2uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexAttribP2uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC)wglGetProcAddress("glVertexAttribP3ui");
	if(!glVertexAttribP3ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexAttribP3ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC)wglGetProcAddress("glVertexAttribP3uiv");
	if(!glVertexAttribP3uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexAttribP3uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC)wglGetProcAddress("glVertexAttribP4ui");
	if(!glVertexAttribP4ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexAttribP4ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC)wglGetProcAddress("glVertexAttribP4uiv");
	if(!glVertexAttribP4uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexAttribP4uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexP2ui = (PFNGLVERTEXP2UIPROC)wglGetProcAddress("glVertexP2ui");
	if(!glVertexP2ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexP2ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexP2uiv = (PFNGLVERTEXP2UIVPROC)wglGetProcAddress("glVertexP2uiv");
	if(!glVertexP2uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexP2uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexP3ui = (PFNGLVERTEXP3UIPROC)wglGetProcAddress("glVertexP3ui");
	if(!glVertexP3ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexP3ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexP3uiv = (PFNGLVERTEXP3UIVPROC)wglGetProcAddress("glVertexP3uiv");
	if(!glVertexP3uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexP3uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexP4ui = (PFNGLVERTEXP4UIPROC)wglGetProcAddress("glVertexP4ui");
	if(!glVertexP4ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexP4ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glVertexP4uiv = (PFNGLVERTEXP4UIVPROC)wglGetProcAddress("glVertexP4uiv");
	if(!glVertexP4uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glVertexP4uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexCoordP1ui = (PFNGLTEXCOORDP1UIPROC)wglGetProcAddress("glTexCoordP1ui");
	if(!glTexCoordP1ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glTexCoordP1ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexCoordP1uiv = (PFNGLTEXCOORDP1UIVPROC)wglGetProcAddress("glTexCoordP1uiv");
	if(!glTexCoordP1uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glTexCoordP1uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexCoordP2ui = (PFNGLTEXCOORDP2UIPROC)wglGetProcAddress("glTexCoordP2ui");
	if(!glTexCoordP2ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glTexCoordP2ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexCoordP2uiv = (PFNGLTEXCOORDP2UIVPROC)wglGetProcAddress("glTexCoordP2uiv");
	if(!glTexCoordP2uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glTexCoordP2uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexCoordP3ui = (PFNGLTEXCOORDP3UIPROC)wglGetProcAddress("glTexCoordP3ui");
	if(!glTexCoordP3ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glTexCoordP3ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexCoordP3uiv = (PFNGLTEXCOORDP3UIVPROC)wglGetProcAddress("glTexCoordP3uiv");
	if(!glTexCoordP3uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glTexCoordP3uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexCoordP4ui = (PFNGLTEXCOORDP4UIPROC)wglGetProcAddress("glTexCoordP4ui");
	if(!glTexCoordP4ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glTexCoordP4ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glTexCoordP4uiv = (PFNGLTEXCOORDP4UIVPROC)wglGetProcAddress("glTexCoordP4uiv");
	if(!glTexCoordP4uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glTexCoordP4uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoordP1ui = (PFNGLMULTITEXCOORDP1UIPROC)wglGetProcAddress("glMultiTexCoordP1ui");
	if(!glMultiTexCoordP1ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glMultiTexCoordP1ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoordP1uiv = (PFNGLMULTITEXCOORDP1UIVPROC)wglGetProcAddress("glMultiTexCoordP1uiv");
	if(!glMultiTexCoordP1uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glMultiTexCoordP1uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoordP2ui = (PFNGLMULTITEXCOORDP2UIPROC)wglGetProcAddress("glMultiTexCoordP2ui");
	if(!glMultiTexCoordP2ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glMultiTexCoordP2ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoordP2uiv = (PFNGLMULTITEXCOORDP2UIVPROC)wglGetProcAddress("glMultiTexCoordP2uiv");
	if(!glMultiTexCoordP2uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glMultiTexCoordP2uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoordP3ui = (PFNGLMULTITEXCOORDP3UIPROC)wglGetProcAddress("glMultiTexCoordP3ui");
	if(!glMultiTexCoordP3ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glMultiTexCoordP3ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoordP3uiv = (PFNGLMULTITEXCOORDP3UIVPROC)wglGetProcAddress("glMultiTexCoordP3uiv");
	if(!glMultiTexCoordP3uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glMultiTexCoordP3uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoordP4ui = (PFNGLMULTITEXCOORDP4UIPROC)wglGetProcAddress("glMultiTexCoordP4ui");
	if(!glMultiTexCoordP4ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glMultiTexCoordP4ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glMultiTexCoordP4uiv = (PFNGLMULTITEXCOORDP4UIVPROC)wglGetProcAddress("glMultiTexCoordP4uiv");
	if(!glMultiTexCoordP4uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glMultiTexCoordP4uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glNormalP3ui = (PFNGLNORMALP3UIPROC)wglGetProcAddress("glNormalP3ui");
	if(!glNormalP3ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glNormalP3ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glNormalP3uiv = (PFNGLNORMALP3UIVPROC)wglGetProcAddress("glNormalP3uiv");
	if(!glNormalP3uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glNormalP3uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glColorP3ui = (PFNGLCOLORP3UIPROC)wglGetProcAddress("glColorP3ui");
	if(!glColorP3ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glColorP3ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glColorP3uiv = (PFNGLCOLORP3UIVPROC)wglGetProcAddress("glColorP3uiv");
	if(!glColorP3uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glColorP3uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glColorP4ui = (PFNGLCOLORP4UIPROC)wglGetProcAddress("glColorP4ui");
	if(!glColorP4ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glColorP4ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glColorP4uiv = (PFNGLCOLORP4UIVPROC)wglGetProcAddress("glColorP4uiv");
	if(!glColorP4uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glColorP4uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColorP3ui = (PFNGLSECONDARYCOLORP3UIPROC)wglGetProcAddress("glSecondaryColorP3ui");
	if(!glSecondaryColorP3ui) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glSecondaryColorP3ui\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glSecondaryColorP3uiv = (PFNGLSECONDARYCOLORP3UIVPROC)wglGetProcAddress("glSecondaryColorP3uiv");
	if(!glSecondaryColorP3uiv) { MessageBox(0, "Couldn't load OpenGL core version 3.3, function \"glSecondaryColorP3uiv\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLARBPROC)wglGetProcAddress("glDebugMessageControlARB");
	if(!glDebugMessageControl) { MessageBox(0, "Couldn't load OpenGL extension debug, function \"glDebugMessageControlARB\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTARBPROC)wglGetProcAddress("glDebugMessageInsertARB");
	if(!glDebugMessageInsert) { MessageBox(0, "Couldn't load OpenGL extension debug, function \"glDebugMessageInsertARB\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKARBPROC)wglGetProcAddress("glDebugMessageCallbackARB");
	if(!glDebugMessageCallback) { MessageBox(0, "Couldn't load OpenGL extension debug, function \"glDebugMessageCallbackARB\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGARBPROC)wglGetProcAddress("glGetDebugMessageLogARB");
	if(!glGetDebugMessageLog) { MessageBox(0, "Couldn't load OpenGL extension debug, function \"glGetDebugMessageLogARB\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glDebugMessageEnable = (PFNGLDEBUGMESSAGEENABLEAMDPROC)wglGetProcAddress("glDebugMessageEnableAMD");
	if(!glDebugMessageEnable) { MessageBox(0, "Couldn't load OpenGL extension debug, function \"glDebugMessageEnableAMD\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glLabelObject = (PFNGLLABELOBJECTEXTPROC)wglGetProcAddress("glLabelObjectEXT");
	if(!glLabelObject) { MessageBox(0, "Couldn't load OpenGL extension debug, function \"glLabelObjectEXT\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glGetObjectLabel = (PFNGLGETOBJECTLABELEXTPROC)wglGetProcAddress("glGetObjectLabelEXT");
	if(!glGetObjectLabel) { MessageBox(0, "Couldn't load OpenGL extension debug, function \"glGetObjectLabelEXT\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glInsertEventMarker = (PFNGLINSERTEVENTMARKEREXTPROC)wglGetProcAddress("glInsertEventMarkerEXT");
	if(!glInsertEventMarker) { MessageBox(0, "Couldn't load OpenGL extension debug, function \"glInsertEventMarkerEXT\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glPushGroupMarker = (PFNGLPUSHGROUPMARKEREXTPROC)wglGetProcAddress("glPushGroupMarkerEXT");
	if(!glPushGroupMarker) { MessageBox(0, "Couldn't load OpenGL extension debug, function \"glPushGroupMarkerEXT\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	glPopGroupMarker = (PFNGLPOPGROUPMARKEREXTPROC)wglGetProcAddress("glPopGroupMarkerEXT");
	if(!glPopGroupMarker) { MessageBox(0, "Couldn't load OpenGL extension debug, function \"glPopGroupMarkerEXT\" is missing.", "OpenGL function missing" , MB_OK); result = -1; }

	return result; 
}
#else
int loadgl() {
	glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)wglGetProcAddress("glDrawRangeElements");
	glTexImage3D = (PFNGLTEXIMAGE3DPROC)wglGetProcAddress("glTexImage3D");
	glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)wglGetProcAddress("glTexSubImage3D");
	glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)wglGetProcAddress("glCopyTexSubImage3D");
	glActiveTexture = (PFNGLACTIVETEXTUREPROC)wglGetProcAddress("glActiveTexture");
	glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)wglGetProcAddress("glSampleCoverage");
	glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)wglGetProcAddress("glCompressedTexImage3D");
	glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)wglGetProcAddress("glCompressedTexImage2D");
	glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)wglGetProcAddress("glCompressedTexImage1D");
	glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)wglGetProcAddress("glCompressedTexSubImage3D");
	glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)wglGetProcAddress("glCompressedTexSubImage2D");
	glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)wglGetProcAddress("glCompressedTexSubImage1D");
	glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)wglGetProcAddress("glGetCompressedTexImage");
	glClientActiveTexture = (PFNGLCLIENTACTIVETEXTUREPROC)wglGetProcAddress("glClientActiveTexture");
	glMultiTexCoord1d = (PFNGLMULTITEXCOORD1DPROC)wglGetProcAddress("glMultiTexCoord1d");
	glMultiTexCoord1dv = (PFNGLMULTITEXCOORD1DVPROC)wglGetProcAddress("glMultiTexCoord1dv");
	glMultiTexCoord1f = (PFNGLMULTITEXCOORD1FPROC)wglGetProcAddress("glMultiTexCoord1f");
	glMultiTexCoord1fv = (PFNGLMULTITEXCOORD1FVPROC)wglGetProcAddress("glMultiTexCoord1fv");
	glMultiTexCoord1i = (PFNGLMULTITEXCOORD1IPROC)wglGetProcAddress("glMultiTexCoord1i");
	glMultiTexCoord1iv = (PFNGLMULTITEXCOORD1IVPROC)wglGetProcAddress("glMultiTexCoord1iv");
	glMultiTexCoord1s = (PFNGLMULTITEXCOORD1SPROC)wglGetProcAddress("glMultiTexCoord1s");
	glMultiTexCoord1sv = (PFNGLMULTITEXCOORD1SVPROC)wglGetProcAddress("glMultiTexCoord1sv");
	glMultiTexCoord2d = (PFNGLMULTITEXCOORD2DPROC)wglGetProcAddress("glMultiTexCoord2d");
	glMultiTexCoord2dv = (PFNGLMULTITEXCOORD2DVPROC)wglGetProcAddress("glMultiTexCoord2dv");
	glMultiTexCoord2f = (PFNGLMULTITEXCOORD2FPROC)wglGetProcAddress("glMultiTexCoord2f");
	glMultiTexCoord2fv = (PFNGLMULTITEXCOORD2FVPROC)wglGetProcAddress("glMultiTexCoord2fv");
	glMultiTexCoord2i = (PFNGLMULTITEXCOORD2IPROC)wglGetProcAddress("glMultiTexCoord2i");
	glMultiTexCoord2iv = (PFNGLMULTITEXCOORD2IVPROC)wglGetProcAddress("glMultiTexCoord2iv");
	glMultiTexCoord2s = (PFNGLMULTITEXCOORD2SPROC)wglGetProcAddress("glMultiTexCoord2s");
	glMultiTexCoord2sv = (PFNGLMULTITEXCOORD2SVPROC)wglGetProcAddress("glMultiTexCoord2sv");
	glMultiTexCoord3d = (PFNGLMULTITEXCOORD3DPROC)wglGetProcAddress("glMultiTexCoord3d");
	glMultiTexCoord3dv = (PFNGLMULTITEXCOORD3DVPROC)wglGetProcAddress("glMultiTexCoord3dv");
	glMultiTexCoord3f = (PFNGLMULTITEXCOORD3FPROC)wglGetProcAddress("glMultiTexCoord3f");
	glMultiTexCoord3fv = (PFNGLMULTITEXCOORD3FVPROC)wglGetProcAddress("glMultiTexCoord3fv");
	glMultiTexCoord3i = (PFNGLMULTITEXCOORD3IPROC)wglGetProcAddress("glMultiTexCoord3i");
	glMultiTexCoord3iv = (PFNGLMULTITEXCOORD3IVPROC)wglGetProcAddress("glMultiTexCoord3iv");
	glMultiTexCoord3s = (PFNGLMULTITEXCOORD3SPROC)wglGetProcAddress("glMultiTexCoord3s");
	glMultiTexCoord3sv = (PFNGLMULTITEXCOORD3SVPROC)wglGetProcAddress("glMultiTexCoord3sv");
	glMultiTexCoord4d = (PFNGLMULTITEXCOORD4DPROC)wglGetProcAddress("glMultiTexCoord4d");
	glMultiTexCoord4dv = (PFNGLMULTITEXCOORD4DVPROC)wglGetProcAddress("glMultiTexCoord4dv");
	glMultiTexCoord4f = (PFNGLMULTITEXCOORD4FPROC)wglGetProcAddress("glMultiTexCoord4f");
	glMultiTexCoord4fv = (PFNGLMULTITEXCOORD4FVPROC)wglGetProcAddress("glMultiTexCoord4fv");
	glMultiTexCoord4i = (PFNGLMULTITEXCOORD4IPROC)wglGetProcAddress("glMultiTexCoord4i");
	glMultiTexCoord4iv = (PFNGLMULTITEXCOORD4IVPROC)wglGetProcAddress("glMultiTexCoord4iv");
	glMultiTexCoord4s = (PFNGLMULTITEXCOORD4SPROC)wglGetProcAddress("glMultiTexCoord4s");
	glMultiTexCoord4sv = (PFNGLMULTITEXCOORD4SVPROC)wglGetProcAddress("glMultiTexCoord4sv");
	glLoadTransposeMatrixf = (PFNGLLOADTRANSPOSEMATRIXFPROC)wglGetProcAddress("glLoadTransposeMatrixf");
	glLoadTransposeMatrixd = (PFNGLLOADTRANSPOSEMATRIXDPROC)wglGetProcAddress("glLoadTransposeMatrixd");
	glMultTransposeMatrixf = (PFNGLMULTTRANSPOSEMATRIXFPROC)wglGetProcAddress("glMultTransposeMatrixf");
	glMultTransposeMatrixd = (PFNGLMULTTRANSPOSEMATRIXDPROC)wglGetProcAddress("glMultTransposeMatrixd");
	glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)wglGetProcAddress("glBlendFuncSeparate");
	glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)wglGetProcAddress("glMultiDrawArrays");
	glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)wglGetProcAddress("glMultiDrawElements");
	glPointParameterf = (PFNGLPOINTPARAMETERFPROC)wglGetProcAddress("glPointParameterf");
	glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)wglGetProcAddress("glPointParameterfv");
	glPointParameteri = (PFNGLPOINTPARAMETERIPROC)wglGetProcAddress("glPointParameteri");
	glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)wglGetProcAddress("glPointParameteriv");
	glFogCoordf = (PFNGLFOGCOORDFPROC)wglGetProcAddress("glFogCoordf");
	glFogCoordfv = (PFNGLFOGCOORDFVPROC)wglGetProcAddress("glFogCoordfv");
	glFogCoordd = (PFNGLFOGCOORDDPROC)wglGetProcAddress("glFogCoordd");
	glFogCoorddv = (PFNGLFOGCOORDDVPROC)wglGetProcAddress("glFogCoorddv");
	glFogCoordPointer = (PFNGLFOGCOORDPOINTERPROC)wglGetProcAddress("glFogCoordPointer");
	glSecondaryColor3b = (PFNGLSECONDARYCOLOR3BPROC)wglGetProcAddress("glSecondaryColor3b");
	glSecondaryColor3bv = (PFNGLSECONDARYCOLOR3BVPROC)wglGetProcAddress("glSecondaryColor3bv");
	glSecondaryColor3d = (PFNGLSECONDARYCOLOR3DPROC)wglGetProcAddress("glSecondaryColor3d");
	glSecondaryColor3dv = (PFNGLSECONDARYCOLOR3DVPROC)wglGetProcAddress("glSecondaryColor3dv");
	glSecondaryColor3f = (PFNGLSECONDARYCOLOR3FPROC)wglGetProcAddress("glSecondaryColor3f");
	glSecondaryColor3fv = (PFNGLSECONDARYCOLOR3FVPROC)wglGetProcAddress("glSecondaryColor3fv");
	glSecondaryColor3i = (PFNGLSECONDARYCOLOR3IPROC)wglGetProcAddress("glSecondaryColor3i");
	glSecondaryColor3iv = (PFNGLSECONDARYCOLOR3IVPROC)wglGetProcAddress("glSecondaryColor3iv");
	glSecondaryColor3s = (PFNGLSECONDARYCOLOR3SPROC)wglGetProcAddress("glSecondaryColor3s");
	glSecondaryColor3sv = (PFNGLSECONDARYCOLOR3SVPROC)wglGetProcAddress("glSecondaryColor3sv");
	glSecondaryColor3ub = (PFNGLSECONDARYCOLOR3UBPROC)wglGetProcAddress("glSecondaryColor3ub");
	glSecondaryColor3ubv = (PFNGLSECONDARYCOLOR3UBVPROC)wglGetProcAddress("glSecondaryColor3ubv");
	glSecondaryColor3ui = (PFNGLSECONDARYCOLOR3UIPROC)wglGetProcAddress("glSecondaryColor3ui");
	glSecondaryColor3uiv = (PFNGLSECONDARYCOLOR3UIVPROC)wglGetProcAddress("glSecondaryColor3uiv");
	glSecondaryColor3us = (PFNGLSECONDARYCOLOR3USPROC)wglGetProcAddress("glSecondaryColor3us");
	glSecondaryColor3usv = (PFNGLSECONDARYCOLOR3USVPROC)wglGetProcAddress("glSecondaryColor3usv");
	glSecondaryColorPointer = (PFNGLSECONDARYCOLORPOINTERPROC)wglGetProcAddress("glSecondaryColorPointer");
	glWindowPos2d = (PFNGLWINDOWPOS2DPROC)wglGetProcAddress("glWindowPos2d");
	glWindowPos2dv = (PFNGLWINDOWPOS2DVPROC)wglGetProcAddress("glWindowPos2dv");
	glWindowPos2f = (PFNGLWINDOWPOS2FPROC)wglGetProcAddress("glWindowPos2f");
	glWindowPos2fv = (PFNGLWINDOWPOS2FVPROC)wglGetProcAddress("glWindowPos2fv");
	glWindowPos2i = (PFNGLWINDOWPOS2IPROC)wglGetProcAddress("glWindowPos2i");
	glWindowPos2iv = (PFNGLWINDOWPOS2IVPROC)wglGetProcAddress("glWindowPos2iv");
	glWindowPos2s = (PFNGLWINDOWPOS2SPROC)wglGetProcAddress("glWindowPos2s");
	glWindowPos2sv = (PFNGLWINDOWPOS2SVPROC)wglGetProcAddress("glWindowPos2sv");
	glWindowPos3d = (PFNGLWINDOWPOS3DPROC)wglGetProcAddress("glWindowPos3d");
	glWindowPos3dv = (PFNGLWINDOWPOS3DVPROC)wglGetProcAddress("glWindowPos3dv");
	glWindowPos3f = (PFNGLWINDOWPOS3FPROC)wglGetProcAddress("glWindowPos3f");
	glWindowPos3fv = (PFNGLWINDOWPOS3FVPROC)wglGetProcAddress("glWindowPos3fv");
	glWindowPos3i = (PFNGLWINDOWPOS3IPROC)wglGetProcAddress("glWindowPos3i");
	glWindowPos3iv = (PFNGLWINDOWPOS3IVPROC)wglGetProcAddress("glWindowPos3iv");
	glWindowPos3s = (PFNGLWINDOWPOS3SPROC)wglGetProcAddress("glWindowPos3s");
	glWindowPos3sv = (PFNGLWINDOWPOS3SVPROC)wglGetProcAddress("glWindowPos3sv");
	glBlendColor = (PFNGLBLENDCOLORPROC)wglGetProcAddress("glBlendColor");
	glBlendEquation = (PFNGLBLENDEQUATIONPROC)wglGetProcAddress("glBlendEquation");
	glGenQueries = (PFNGLGENQUERIESPROC)wglGetProcAddress("glGenQueries");
	glDeleteQueries = (PFNGLDELETEQUERIESPROC)wglGetProcAddress("glDeleteQueries");
	glIsQuery = (PFNGLISQUERYPROC)wglGetProcAddress("glIsQuery");
	glBeginQuery = (PFNGLBEGINQUERYPROC)wglGetProcAddress("glBeginQuery");
	glEndQuery = (PFNGLENDQUERYPROC)wglGetProcAddress("glEndQuery");
	glGetQueryiv = (PFNGLGETQUERYIVPROC)wglGetProcAddress("glGetQueryiv");
	glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)wglGetProcAddress("glGetQueryObjectiv");
	glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)wglGetProcAddress("glGetQueryObjectuiv");
	glBindBuffer = (PFNGLBINDBUFFERPROC)wglGetProcAddress("glBindBuffer");
	glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)wglGetProcAddress("glDeleteBuffers");
	glGenBuffers = (PFNGLGENBUFFERSPROC)wglGetProcAddress("glGenBuffers");
	glIsBuffer = (PFNGLISBUFFERPROC)wglGetProcAddress("glIsBuffer");
	glBufferData = (PFNGLBUFFERDATAPROC)wglGetProcAddress("glBufferData");
	glBufferSubData = (PFNGLBUFFERSUBDATAPROC)wglGetProcAddress("glBufferSubData");
	glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)wglGetProcAddress("glGetBufferSubData");
	glMapBuffer = (PFNGLMAPBUFFERPROC)wglGetProcAddress("glMapBuffer");
	glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)wglGetProcAddress("glUnmapBuffer");
	glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetBufferParameteriv");
	glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)wglGetProcAddress("glGetBufferPointerv");
	glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)wglGetProcAddress("glBlendEquationSeparate");
	glDrawBuffers = (PFNGLDRAWBUFFERSPROC)wglGetProcAddress("glDrawBuffers");
	glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)wglGetProcAddress("glStencilOpSeparate");
	glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)wglGetProcAddress("glStencilFuncSeparate");
	glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)wglGetProcAddress("glStencilMaskSeparate");
	glAttachShader = (PFNGLATTACHSHADERPROC)wglGetProcAddress("glAttachShader");
	glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)wglGetProcAddress("glBindAttribLocation");
	glCompileShader = (PFNGLCOMPILESHADERPROC)wglGetProcAddress("glCompileShader");
	glCreateProgram = (PFNGLCREATEPROGRAMPROC)wglGetProcAddress("glCreateProgram");
	glCreateShader = (PFNGLCREATESHADERPROC)wglGetProcAddress("glCreateShader");
	glDeleteProgram = (PFNGLDELETEPROGRAMPROC)wglGetProcAddress("glDeleteProgram");
	glDeleteShader = (PFNGLDELETESHADERPROC)wglGetProcAddress("glDeleteShader");
	glDetachShader = (PFNGLDETACHSHADERPROC)wglGetProcAddress("glDetachShader");
	glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glDisableVertexAttribArray");
	glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glEnableVertexAttribArray");
	glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)wglGetProcAddress("glGetActiveAttrib");
	glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)wglGetProcAddress("glGetActiveUniform");
	glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)wglGetProcAddress("glGetAttachedShaders");
	glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)wglGetProcAddress("glGetAttribLocation");
	glGetProgramiv = (PFNGLGETPROGRAMIVPROC)wglGetProcAddress("glGetProgramiv");
	glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)wglGetProcAddress("glGetProgramInfoLog");
	glGetShaderiv = (PFNGLGETSHADERIVPROC)wglGetProcAddress("glGetShaderiv");
	glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)wglGetProcAddress("glGetShaderInfoLog");
	glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)wglGetProcAddress("glGetShaderSource");
	glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)wglGetProcAddress("glGetUniformLocation");
	glGetUniformfv = (PFNGLGETUNIFORMFVPROC)wglGetProcAddress("glGetUniformfv");
	glGetUniformiv = (PFNGLGETUNIFORMIVPROC)wglGetProcAddress("glGetUniformiv");
	glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)wglGetProcAddress("glGetVertexAttribdv");
	glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)wglGetProcAddress("glGetVertexAttribfv");
	glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)wglGetProcAddress("glGetVertexAttribiv");
	glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)wglGetProcAddress("glGetVertexAttribPointerv");
	glIsProgram = (PFNGLISPROGRAMPROC)wglGetProcAddress("glIsProgram");
	glIsShader = (PFNGLISSHADERPROC)wglGetProcAddress("glIsShader");
	glLinkProgram = (PFNGLLINKPROGRAMPROC)wglGetProcAddress("glLinkProgram");
	glShaderSource = (PFNGLSHADERSOURCEPROC)wglGetProcAddress("glShaderSource");
	glUseProgram = (PFNGLUSEPROGRAMPROC)wglGetProcAddress("glUseProgram");
	glUniform1f = (PFNGLUNIFORM1FPROC)wglGetProcAddress("glUniform1f");
	glUniform2f = (PFNGLUNIFORM2FPROC)wglGetProcAddress("glUniform2f");
	glUniform3f = (PFNGLUNIFORM3FPROC)wglGetProcAddress("glUniform3f");
	glUniform4f = (PFNGLUNIFORM4FPROC)wglGetProcAddress("glUniform4f");
	glUniform1i = (PFNGLUNIFORM1IPROC)wglGetProcAddress("glUniform1i");
	glUniform2i = (PFNGLUNIFORM2IPROC)wglGetProcAddress("glUniform2i");
	glUniform3i = (PFNGLUNIFORM3IPROC)wglGetProcAddress("glUniform3i");
	glUniform4i = (PFNGLUNIFORM4IPROC)wglGetProcAddress("glUniform4i");
	glUniform1fv = (PFNGLUNIFORM1FVPROC)wglGetProcAddress("glUniform1fv");
	glUniform2fv = (PFNGLUNIFORM2FVPROC)wglGetProcAddress("glUniform2fv");
	glUniform3fv = (PFNGLUNIFORM3FVPROC)wglGetProcAddress("glUniform3fv");
	glUniform4fv = (PFNGLUNIFORM4FVPROC)wglGetProcAddress("glUniform4fv");
	glUniform1iv = (PFNGLUNIFORM1IVPROC)wglGetProcAddress("glUniform1iv");
	glUniform2iv = (PFNGLUNIFORM2IVPROC)wglGetProcAddress("glUniform2iv");
	glUniform3iv = (PFNGLUNIFORM3IVPROC)wglGetProcAddress("glUniform3iv");
	glUniform4iv = (PFNGLUNIFORM4IVPROC)wglGetProcAddress("glUniform4iv");
	glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)wglGetProcAddress("glUniformMatrix2fv");
	glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)wglGetProcAddress("glUniformMatrix3fv");
	glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)wglGetProcAddress("glUniformMatrix4fv");
	glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)wglGetProcAddress("glValidateProgram");
	glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)wglGetProcAddress("glVertexAttrib1d");
	glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)wglGetProcAddress("glVertexAttrib1dv");
	glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)wglGetProcAddress("glVertexAttrib1f");
	glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)wglGetProcAddress("glVertexAttrib1fv");
	glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)wglGetProcAddress("glVertexAttrib1s");
	glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)wglGetProcAddress("glVertexAttrib1sv");
	glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)wglGetProcAddress("glVertexAttrib2d");
	glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)wglGetProcAddress("glVertexAttrib2dv");
	glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)wglGetProcAddress("glVertexAttrib2f");
	glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)wglGetProcAddress("glVertexAttrib2fv");
	glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)wglGetProcAddress("glVertexAttrib2s");
	glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)wglGetProcAddress("glVertexAttrib2sv");
	glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)wglGetProcAddress("glVertexAttrib3d");
	glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)wglGetProcAddress("glVertexAttrib3dv");
	glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)wglGetProcAddress("glVertexAttrib3f");
	glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)wglGetProcAddress("glVertexAttrib3fv");
	glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)wglGetProcAddress("glVertexAttrib3s");
	glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)wglGetProcAddress("glVertexAttrib3sv");
	glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)wglGetProcAddress("glVertexAttrib4Nbv");
	glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)wglGetProcAddress("glVertexAttrib4Niv");
	glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)wglGetProcAddress("glVertexAttrib4Nsv");
	glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)wglGetProcAddress("glVertexAttrib4Nub");
	glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)wglGetProcAddress("glVertexAttrib4Nubv");
	glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)wglGetProcAddress("glVertexAttrib4Nuiv");
	glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)wglGetProcAddress("glVertexAttrib4Nusv");
	glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)wglGetProcAddress("glVertexAttrib4bv");
	glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)wglGetProcAddress("glVertexAttrib4d");
	glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)wglGetProcAddress("glVertexAttrib4dv");
	glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)wglGetProcAddress("glVertexAttrib4f");
	glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)wglGetProcAddress("glVertexAttrib4fv");
	glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)wglGetProcAddress("glVertexAttrib4iv");
	glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)wglGetProcAddress("glVertexAttrib4s");
	glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)wglGetProcAddress("glVertexAttrib4sv");
	glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)wglGetProcAddress("glVertexAttrib4ubv");
	glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)wglGetProcAddress("glVertexAttrib4uiv");
	glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)wglGetProcAddress("glVertexAttrib4usv");
	glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)wglGetProcAddress("glVertexAttribPointer");
	glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)wglGetProcAddress("glUniformMatrix2x3fv");
	glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)wglGetProcAddress("glUniformMatrix3x2fv");
	glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)wglGetProcAddress("glUniformMatrix2x4fv");
	glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)wglGetProcAddress("glUniformMatrix4x2fv");
	glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)wglGetProcAddress("glUniformMatrix3x4fv");
	glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)wglGetProcAddress("glUniformMatrix4x3fv");
	glColorMaski = (PFNGLCOLORMASKIPROC)wglGetProcAddress("glColorMaski");
	glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)wglGetProcAddress("glGetBooleani_v");
	glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)wglGetProcAddress("glGetIntegeri_v");
	glEnablei = (PFNGLENABLEIPROC)wglGetProcAddress("glEnablei");
	glDisablei = (PFNGLDISABLEIPROC)wglGetProcAddress("glDisablei");
	glIsEnabledi = (PFNGLISENABLEDIPROC)wglGetProcAddress("glIsEnabledi");
	glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)wglGetProcAddress("glBeginTransformFeedback");
	glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)wglGetProcAddress("glEndTransformFeedback");
	glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)wglGetProcAddress("glBindBufferRange");
	glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)wglGetProcAddress("glBindBufferBase");
	glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)wglGetProcAddress("glTransformFeedbackVaryings");
	glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)wglGetProcAddress("glGetTransformFeedbackVarying");
	glClampColor = (PFNGLCLAMPCOLORPROC)wglGetProcAddress("glClampColor");
	glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)wglGetProcAddress("glBeginConditionalRender");
	glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)wglGetProcAddress("glEndConditionalRender");
	glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)wglGetProcAddress("glVertexAttribIPointer");
	glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)wglGetProcAddress("glGetVertexAttribIiv");
	glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)wglGetProcAddress("glGetVertexAttribIuiv");
	glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)wglGetProcAddress("glVertexAttribI1i");
	glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)wglGetProcAddress("glVertexAttribI2i");
	glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)wglGetProcAddress("glVertexAttribI3i");
	glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)wglGetProcAddress("glVertexAttribI4i");
	glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)wglGetProcAddress("glVertexAttribI1ui");
	glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)wglGetProcAddress("glVertexAttribI2ui");
	glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)wglGetProcAddress("glVertexAttribI3ui");
	glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)wglGetProcAddress("glVertexAttribI4ui");
	glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)wglGetProcAddress("glVertexAttribI1iv");
	glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)wglGetProcAddress("glVertexAttribI2iv");
	glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)wglGetProcAddress("glVertexAttribI3iv");
	glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)wglGetProcAddress("glVertexAttribI4iv");
	glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)wglGetProcAddress("glVertexAttribI1uiv");
	glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)wglGetProcAddress("glVertexAttribI2uiv");
	glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)wglGetProcAddress("glVertexAttribI3uiv");
	glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)wglGetProcAddress("glVertexAttribI4uiv");
	glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)wglGetProcAddress("glVertexAttribI4bv");
	glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)wglGetProcAddress("glVertexAttribI4sv");
	glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)wglGetProcAddress("glVertexAttribI4ubv");
	glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)wglGetProcAddress("glVertexAttribI4usv");
	glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)wglGetProcAddress("glGetUniformuiv");
	glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)wglGetProcAddress("glBindFragDataLocation");
	glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)wglGetProcAddress("glGetFragDataLocation");
	glUniform1ui = (PFNGLUNIFORM1UIPROC)wglGetProcAddress("glUniform1ui");
	glUniform2ui = (PFNGLUNIFORM2UIPROC)wglGetProcAddress("glUniform2ui");
	glUniform3ui = (PFNGLUNIFORM3UIPROC)wglGetProcAddress("glUniform3ui");
	glUniform4ui = (PFNGLUNIFORM4UIPROC)wglGetProcAddress("glUniform4ui");
	glUniform1uiv = (PFNGLUNIFORM1UIVPROC)wglGetProcAddress("glUniform1uiv");
	glUniform2uiv = (PFNGLUNIFORM2UIVPROC)wglGetProcAddress("glUniform2uiv");
	glUniform3uiv = (PFNGLUNIFORM3UIVPROC)wglGetProcAddress("glUniform3uiv");
	glUniform4uiv = (PFNGLUNIFORM4UIVPROC)wglGetProcAddress("glUniform4uiv");
	glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)wglGetProcAddress("glTexParameterIiv");
	glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)wglGetProcAddress("glTexParameterIuiv");
	glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)wglGetProcAddress("glGetTexParameterIiv");
	glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)wglGetProcAddress("glGetTexParameterIuiv");
	glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)wglGetProcAddress("glClearBufferiv");
	glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)wglGetProcAddress("glClearBufferuiv");
	glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)wglGetProcAddress("glClearBufferfv");
	glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)wglGetProcAddress("glClearBufferfi");
	glGetStringi = (PFNGLGETSTRINGIPROC)wglGetProcAddress("glGetStringi");
	glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)wglGetProcAddress("glIsRenderbuffer");
	glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)wglGetProcAddress("glBindRenderbuffer");
	glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)wglGetProcAddress("glDeleteRenderbuffers");
	glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)wglGetProcAddress("glGenRenderbuffers");
	glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)wglGetProcAddress("glRenderbufferStorage");
	glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetRenderbufferParameteriv");
	glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)wglGetProcAddress("glIsFramebuffer");
	glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)wglGetProcAddress("glBindFramebuffer");
	glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)wglGetProcAddress("glDeleteFramebuffers");
	glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)wglGetProcAddress("glGenFramebuffers");
	glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)wglGetProcAddress("glCheckFramebufferStatus");
	glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)wglGetProcAddress("glFramebufferTexture1D");
	glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)wglGetProcAddress("glFramebufferTexture2D");
	glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)wglGetProcAddress("glFramebufferTexture3D");
	glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)wglGetProcAddress("glFramebufferRenderbuffer");
	glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
	glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)wglGetProcAddress("glGenerateMipmap");
	glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)wglGetProcAddress("glBlitFramebuffer");
	glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)wglGetProcAddress("glRenderbufferStorageMultisample");
	glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)wglGetProcAddress("glFramebufferTextureLayer");
	glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)wglGetProcAddress("glMapBufferRange");
	glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)wglGetProcAddress("glFlushMappedBufferRange");
	glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)wglGetProcAddress("glBindVertexArray");
	glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)wglGetProcAddress("glDeleteVertexArrays");
	glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)wglGetProcAddress("glGenVertexArrays");
	glIsVertexArray = (PFNGLISVERTEXARRAYPROC)wglGetProcAddress("glIsVertexArray");
	glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)wglGetProcAddress("glDrawArraysInstanced");
	glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)wglGetProcAddress("glDrawElementsInstanced");
	glTexBuffer = (PFNGLTEXBUFFERPROC)wglGetProcAddress("glTexBuffer");
	glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)wglGetProcAddress("glPrimitiveRestartIndex");
	glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)wglGetProcAddress("glCopyBufferSubData");
	glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)wglGetProcAddress("glGetUniformIndices");
	glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)wglGetProcAddress("glGetActiveUniformsiv");
	glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)wglGetProcAddress("glGetActiveUniformName");
	glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)wglGetProcAddress("glGetUniformBlockIndex");
	glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)wglGetProcAddress("glGetActiveUniformBlockiv");
	glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)wglGetProcAddress("glGetActiveUniformBlockName");
	glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)wglGetProcAddress("glUniformBlockBinding");
	glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)wglGetProcAddress("glDrawElementsBaseVertex");
	glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)wglGetProcAddress("glDrawRangeElementsBaseVertex");
	glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)wglGetProcAddress("glDrawElementsInstancedBaseVertex");
	glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)wglGetProcAddress("glMultiDrawElementsBaseVertex");
	glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)wglGetProcAddress("glProvokingVertex");
	glFenceSync = (PFNGLFENCESYNCPROC)wglGetProcAddress("glFenceSync");
	glIsSync = (PFNGLISSYNCPROC)wglGetProcAddress("glIsSync");
	glDeleteSync = (PFNGLDELETESYNCPROC)wglGetProcAddress("glDeleteSync");
	glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)wglGetProcAddress("glClientWaitSync");
	glWaitSync = (PFNGLWAITSYNCPROC)wglGetProcAddress("glWaitSync");
	glGetInteger64v = (PFNGLGETINTEGER64VPROC)wglGetProcAddress("glGetInteger64v");
	glGetSynciv = (PFNGLGETSYNCIVPROC)wglGetProcAddress("glGetSynciv");
	glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)wglGetProcAddress("glGetInteger64i_v");
	glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)wglGetProcAddress("glGetBufferParameteri64v");
	glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)wglGetProcAddress("glFramebufferTexture");
	glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)wglGetProcAddress("glTexImage2DMultisample");
	glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)wglGetProcAddress("glTexImage3DMultisample");
	glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)wglGetProcAddress("glGetMultisamplefv");
	glSampleMaski = (PFNGLSAMPLEMASKIPROC)wglGetProcAddress("glSampleMaski");
	glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)wglGetProcAddress("glBindFragDataLocationIndexed");
	glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC)wglGetProcAddress("glGetFragDataIndex");
	glGenSamplers = (PFNGLGENSAMPLERSPROC)wglGetProcAddress("glGenSamplers");
	glDeleteSamplers = (PFNGLDELETESAMPLERSPROC)wglGetProcAddress("glDeleteSamplers");
	glIsSampler = (PFNGLISSAMPLERPROC)wglGetProcAddress("glIsSampler");
	glBindSampler = (PFNGLBINDSAMPLERPROC)wglGetProcAddress("glBindSampler");
	glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC)wglGetProcAddress("glSamplerParameteri");
	glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC)wglGetProcAddress("glSamplerParameteriv");
	glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC)wglGetProcAddress("glSamplerParameterf");
	glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC)wglGetProcAddress("glSamplerParameterfv");
	glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC)wglGetProcAddress("glSamplerParameterIiv");
	glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC)wglGetProcAddress("glSamplerParameterIuiv");
	glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)wglGetProcAddress("glGetSamplerParameteriv");
	glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)wglGetProcAddress("glGetSamplerParameterIiv");
	glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)wglGetProcAddress("glGetSamplerParameterfv");
	glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)wglGetProcAddress("glGetSamplerParameterIuiv");
	glQueryCounter = (PFNGLQUERYCOUNTERPROC)wglGetProcAddress("glQueryCounter");
	glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC)wglGetProcAddress("glGetQueryObjecti64v");
	glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC)wglGetProcAddress("glGetQueryObjectui64v");
	glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC)wglGetProcAddress("glVertexAttribDivisor");
	glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC)wglGetProcAddress("glVertexAttribP1ui");
	glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC)wglGetProcAddress("glVertexAttribP1uiv");
	glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC)wglGetProcAddress("glVertexAttribP2ui");
	glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC)wglGetProcAddress("glVertexAttribP2uiv");
	glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC)wglGetProcAddress("glVertexAttribP3ui");
	glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC)wglGetProcAddress("glVertexAttribP3uiv");
	glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC)wglGetProcAddress("glVertexAttribP4ui");
	glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC)wglGetProcAddress("glVertexAttribP4uiv");
	glVertexP2ui = (PFNGLVERTEXP2UIPROC)wglGetProcAddress("glVertexP2ui");
	glVertexP2uiv = (PFNGLVERTEXP2UIVPROC)wglGetProcAddress("glVertexP2uiv");
	glVertexP3ui = (PFNGLVERTEXP3UIPROC)wglGetProcAddress("glVertexP3ui");
	glVertexP3uiv = (PFNGLVERTEXP3UIVPROC)wglGetProcAddress("glVertexP3uiv");
	glVertexP4ui = (PFNGLVERTEXP4UIPROC)wglGetProcAddress("glVertexP4ui");
	glVertexP4uiv = (PFNGLVERTEXP4UIVPROC)wglGetProcAddress("glVertexP4uiv");
	glTexCoordP1ui = (PFNGLTEXCOORDP1UIPROC)wglGetProcAddress("glTexCoordP1ui");
	glTexCoordP1uiv = (PFNGLTEXCOORDP1UIVPROC)wglGetProcAddress("glTexCoordP1uiv");
	glTexCoordP2ui = (PFNGLTEXCOORDP2UIPROC)wglGetProcAddress("glTexCoordP2ui");
	glTexCoordP2uiv = (PFNGLTEXCOORDP2UIVPROC)wglGetProcAddress("glTexCoordP2uiv");
	glTexCoordP3ui = (PFNGLTEXCOORDP3UIPROC)wglGetProcAddress("glTexCoordP3ui");
	glTexCoordP3uiv = (PFNGLTEXCOORDP3UIVPROC)wglGetProcAddress("glTexCoordP3uiv");
	glTexCoordP4ui = (PFNGLTEXCOORDP4UIPROC)wglGetProcAddress("glTexCoordP4ui");
	glTexCoordP4uiv = (PFNGLTEXCOORDP4UIVPROC)wglGetProcAddress("glTexCoordP4uiv");
	glMultiTexCoordP1ui = (PFNGLMULTITEXCOORDP1UIPROC)wglGetProcAddress("glMultiTexCoordP1ui");
	glMultiTexCoordP1uiv = (PFNGLMULTITEXCOORDP1UIVPROC)wglGetProcAddress("glMultiTexCoordP1uiv");
	glMultiTexCoordP2ui = (PFNGLMULTITEXCOORDP2UIPROC)wglGetProcAddress("glMultiTexCoordP2ui");
	glMultiTexCoordP2uiv = (PFNGLMULTITEXCOORDP2UIVPROC)wglGetProcAddress("glMultiTexCoordP2uiv");
	glMultiTexCoordP3ui = (PFNGLMULTITEXCOORDP3UIPROC)wglGetProcAddress("glMultiTexCoordP3ui");
	glMultiTexCoordP3uiv = (PFNGLMULTITEXCOORDP3UIVPROC)wglGetProcAddress("glMultiTexCoordP3uiv");
	glMultiTexCoordP4ui = (PFNGLMULTITEXCOORDP4UIPROC)wglGetProcAddress("glMultiTexCoordP4ui");
	glMultiTexCoordP4uiv = (PFNGLMULTITEXCOORDP4UIVPROC)wglGetProcAddress("glMultiTexCoordP4uiv");
	glNormalP3ui = (PFNGLNORMALP3UIPROC)wglGetProcAddress("glNormalP3ui");
	glNormalP3uiv = (PFNGLNORMALP3UIVPROC)wglGetProcAddress("glNormalP3uiv");
	glColorP3ui = (PFNGLCOLORP3UIPROC)wglGetProcAddress("glColorP3ui");
	glColorP3uiv = (PFNGLCOLORP3UIVPROC)wglGetProcAddress("glColorP3uiv");
	glColorP4ui = (PFNGLCOLORP4UIPROC)wglGetProcAddress("glColorP4ui");
	glColorP4uiv = (PFNGLCOLORP4UIVPROC)wglGetProcAddress("glColorP4uiv");
	glSecondaryColorP3ui = (PFNGLSECONDARYCOLORP3UIPROC)wglGetProcAddress("glSecondaryColorP3ui");
	glSecondaryColorP3uiv = (PFNGLSECONDARYCOLORP3UIVPROC)wglGetProcAddress("glSecondaryColorP3uiv");
	glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLARBPROC)wglGetProcAddress("glDebugMessageControlARB");
	glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTARBPROC)wglGetProcAddress("glDebugMessageInsertARB");
	glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKARBPROC)wglGetProcAddress("glDebugMessageCallbackARB");
	glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGARBPROC)wglGetProcAddress("glGetDebugMessageLogARB");
	glDebugMessageEnable = (PFNGLDEBUGMESSAGEENABLEAMDPROC)wglGetProcAddress("glDebugMessageEnableAMD");
	glLabelObject = (PFNGLLABELOBJECTEXTPROC)wglGetProcAddress("glLabelObjectEXT");
	glGetObjectLabel = (PFNGLGETOBJECTLABELEXTPROC)wglGetProcAddress("glGetObjectLabelEXT");
	glInsertEventMarker = (PFNGLINSERTEVENTMARKEREXTPROC)wglGetProcAddress("glInsertEventMarkerEXT");
	glPushGroupMarker = (PFNGLPUSHGROUPMARKEREXTPROC)wglGetProcAddress("glPushGroupMarkerEXT");
	glPopGroupMarker = (PFNGLPOPGROUPMARKEREXTPROC)wglGetProcAddress("glPopGroupMarkerEXT");
	if(
			glDrawRangeElements == nullptr ||
			glTexImage3D == nullptr ||
			glTexSubImage3D == nullptr ||
			glCopyTexSubImage3D == nullptr ||
			glActiveTexture == nullptr ||
			glSampleCoverage == nullptr ||
			glCompressedTexImage3D == nullptr ||
			glCompressedTexImage2D == nullptr ||
			glCompressedTexImage1D == nullptr ||
			glCompressedTexSubImage3D == nullptr ||
			glCompressedTexSubImage2D == nullptr ||
			glCompressedTexSubImage1D == nullptr ||
			glGetCompressedTexImage == nullptr ||
			glClientActiveTexture == nullptr ||
			glMultiTexCoord1d == nullptr ||
			glMultiTexCoord1dv == nullptr ||
			glMultiTexCoord1f == nullptr ||
			glMultiTexCoord1fv == nullptr ||
			glMultiTexCoord1i == nullptr ||
			glMultiTexCoord1iv == nullptr ||
			glMultiTexCoord1s == nullptr ||
			glMultiTexCoord1sv == nullptr ||
			glMultiTexCoord2d == nullptr ||
			glMultiTexCoord2dv == nullptr ||
			glMultiTexCoord2f == nullptr ||
			glMultiTexCoord2fv == nullptr ||
			glMultiTexCoord2i == nullptr ||
			glMultiTexCoord2iv == nullptr ||
			glMultiTexCoord2s == nullptr ||
			glMultiTexCoord2sv == nullptr ||
			glMultiTexCoord3d == nullptr ||
			glMultiTexCoord3dv == nullptr ||
			glMultiTexCoord3f == nullptr ||
			glMultiTexCoord3fv == nullptr ||
			glMultiTexCoord3i == nullptr ||
			glMultiTexCoord3iv == nullptr ||
			glMultiTexCoord3s == nullptr ||
			glMultiTexCoord3sv == nullptr ||
			glMultiTexCoord4d == nullptr ||
			glMultiTexCoord4dv == nullptr ||
			glMultiTexCoord4f == nullptr ||
			glMultiTexCoord4fv == nullptr ||
			glMultiTexCoord4i == nullptr ||
			glMultiTexCoord4iv == nullptr ||
			glMultiTexCoord4s == nullptr ||
			glMultiTexCoord4sv == nullptr ||
			glLoadTransposeMatrixf == nullptr ||
			glLoadTransposeMatrixd == nullptr ||
			glMultTransposeMatrixf == nullptr ||
			glMultTransposeMatrixd == nullptr ||
			glBlendFuncSeparate == nullptr ||
			glMultiDrawArrays == nullptr ||
			glMultiDrawElements == nullptr ||
			glPointParameterf == nullptr ||
			glPointParameterfv == nullptr ||
			glPointParameteri == nullptr ||
			glPointParameteriv == nullptr ||
			glFogCoordf == nullptr ||
			glFogCoordfv == nullptr ||
			glFogCoordd == nullptr ||
			glFogCoorddv == nullptr ||
			glFogCoordPointer == nullptr ||
			glSecondaryColor3b == nullptr ||
			glSecondaryColor3bv == nullptr ||
			glSecondaryColor3d == nullptr ||
			glSecondaryColor3dv == nullptr ||
			glSecondaryColor3f == nullptr ||
			glSecondaryColor3fv == nullptr ||
			glSecondaryColor3i == nullptr ||
			glSecondaryColor3iv == nullptr ||
			glSecondaryColor3s == nullptr ||
			glSecondaryColor3sv == nullptr ||
			glSecondaryColor3ub == nullptr ||
			glSecondaryColor3ubv == nullptr ||
			glSecondaryColor3ui == nullptr ||
			glSecondaryColor3uiv == nullptr ||
			glSecondaryColor3us == nullptr ||
			glSecondaryColor3usv == nullptr ||
			glSecondaryColorPointer == nullptr ||
			glWindowPos2d == nullptr ||
			glWindowPos2dv == nullptr ||
			glWindowPos2f == nullptr ||
			glWindowPos2fv == nullptr ||
			glWindowPos2i == nullptr ||
			glWindowPos2iv == nullptr ||
			glWindowPos2s == nullptr ||
			glWindowPos2sv == nullptr ||
			glWindowPos3d == nullptr ||
			glWindowPos3dv == nullptr ||
			glWindowPos3f == nullptr ||
			glWindowPos3fv == nullptr ||
			glWindowPos3i == nullptr ||
			glWindowPos3iv == nullptr ||
			glWindowPos3s == nullptr ||
			glWindowPos3sv == nullptr ||
			glBlendColor == nullptr ||
			glBlendEquation == nullptr ||
			glGenQueries == nullptr ||
			glDeleteQueries == nullptr ||
			glIsQuery == nullptr ||
			glBeginQuery == nullptr ||
			glEndQuery == nullptr ||
			glGetQueryiv == nullptr ||
			glGetQueryObjectiv == nullptr ||
			glGetQueryObjectuiv == nullptr ||
			glBindBuffer == nullptr ||
			glDeleteBuffers == nullptr ||
			glGenBuffers == nullptr ||
			glIsBuffer == nullptr ||
			glBufferData == nullptr ||
			glBufferSubData == nullptr ||
			glGetBufferSubData == nullptr ||
			glMapBuffer == nullptr ||
			glUnmapBuffer == nullptr ||
			glGetBufferParameteriv == nullptr ||
			glGetBufferPointerv == nullptr ||
			glBlendEquationSeparate == nullptr ||
			glDrawBuffers == nullptr ||
			glStencilOpSeparate == nullptr ||
			glStencilFuncSeparate == nullptr ||
			glStencilMaskSeparate == nullptr ||
			glAttachShader == nullptr ||
			glBindAttribLocation == nullptr ||
			glCompileShader == nullptr ||
			glCreateProgram == nullptr ||
			glCreateShader == nullptr ||
			glDeleteProgram == nullptr ||
			glDeleteShader == nullptr ||
			glDetachShader == nullptr ||
			glDisableVertexAttribArray == nullptr ||
			glEnableVertexAttribArray == nullptr ||
			glGetActiveAttrib == nullptr ||
			glGetActiveUniform == nullptr ||
			glGetAttachedShaders == nullptr ||
			glGetAttribLocation == nullptr ||
			glGetProgramiv == nullptr ||
			glGetProgramInfoLog == nullptr ||
			glGetShaderiv == nullptr ||
			glGetShaderInfoLog == nullptr ||
			glGetShaderSource == nullptr ||
			glGetUniformLocation == nullptr ||
			glGetUniformfv == nullptr ||
			glGetUniformiv == nullptr ||
			glGetVertexAttribdv == nullptr ||
			glGetVertexAttribfv == nullptr ||
			glGetVertexAttribiv == nullptr ||
			glGetVertexAttribPointerv == nullptr ||
			glIsProgram == nullptr ||
			glIsShader == nullptr ||
			glLinkProgram == nullptr ||
			glShaderSource == nullptr ||
			glUseProgram == nullptr ||
			glUniform1f == nullptr ||
			glUniform2f == nullptr ||
			glUniform3f == nullptr ||
			glUniform4f == nullptr ||
			glUniform1i == nullptr ||
			glUniform2i == nullptr ||
			glUniform3i == nullptr ||
			glUniform4i == nullptr ||
			glUniform1fv == nullptr ||
			glUniform2fv == nullptr ||
			glUniform3fv == nullptr ||
			glUniform4fv == nullptr ||
			glUniform1iv == nullptr ||
			glUniform2iv == nullptr ||
			glUniform3iv == nullptr ||
			glUniform4iv == nullptr ||
			glUniformMatrix2fv == nullptr ||
			glUniformMatrix3fv == nullptr ||
			glUniformMatrix4fv == nullptr ||
			glValidateProgram == nullptr ||
			glVertexAttrib1d == nullptr ||
			glVertexAttrib1dv == nullptr ||
			glVertexAttrib1f == nullptr ||
			glVertexAttrib1fv == nullptr ||
			glVertexAttrib1s == nullptr ||
			glVertexAttrib1sv == nullptr ||
			glVertexAttrib2d == nullptr ||
			glVertexAttrib2dv == nullptr ||
			glVertexAttrib2f == nullptr ||
			glVertexAttrib2fv == nullptr ||
			glVertexAttrib2s == nullptr ||
			glVertexAttrib2sv == nullptr ||
			glVertexAttrib3d == nullptr ||
			glVertexAttrib3dv == nullptr ||
			glVertexAttrib3f == nullptr ||
			glVertexAttrib3fv == nullptr ||
			glVertexAttrib3s == nullptr ||
			glVertexAttrib3sv == nullptr ||
			glVertexAttrib4Nbv == nullptr ||
			glVertexAttrib4Niv == nullptr ||
			glVertexAttrib4Nsv == nullptr ||
			glVertexAttrib4Nub == nullptr ||
			glVertexAttrib4Nubv == nullptr ||
			glVertexAttrib4Nuiv == nullptr ||
			glVertexAttrib4Nusv == nullptr ||
			glVertexAttrib4bv == nullptr ||
			glVertexAttrib4d == nullptr ||
			glVertexAttrib4dv == nullptr ||
			glVertexAttrib4f == nullptr ||
			glVertexAttrib4fv == nullptr ||
			glVertexAttrib4iv == nullptr ||
			glVertexAttrib4s == nullptr ||
			glVertexAttrib4sv == nullptr ||
			glVertexAttrib4ubv == nullptr ||
			glVertexAttrib4uiv == nullptr ||
			glVertexAttrib4usv == nullptr ||
			glVertexAttribPointer == nullptr ||
			glUniformMatrix2x3fv == nullptr ||
			glUniformMatrix3x2fv == nullptr ||
			glUniformMatrix2x4fv == nullptr ||
			glUniformMatrix4x2fv == nullptr ||
			glUniformMatrix3x4fv == nullptr ||
			glUniformMatrix4x3fv == nullptr ||
			glColorMaski == nullptr ||
			glGetBooleani_v == nullptr ||
			glGetIntegeri_v == nullptr ||
			glEnablei == nullptr ||
			glDisablei == nullptr ||
			glIsEnabledi == nullptr ||
			glBeginTransformFeedback == nullptr ||
			glEndTransformFeedback == nullptr ||
			glBindBufferRange == nullptr ||
			glBindBufferBase == nullptr ||
			glTransformFeedbackVaryings == nullptr ||
			glGetTransformFeedbackVarying == nullptr ||
			glClampColor == nullptr ||
			glBeginConditionalRender == nullptr ||
			glEndConditionalRender == nullptr ||
			glVertexAttribIPointer == nullptr ||
			glGetVertexAttribIiv == nullptr ||
			glGetVertexAttribIuiv == nullptr ||
			glVertexAttribI1i == nullptr ||
			glVertexAttribI2i == nullptr ||
			glVertexAttribI3i == nullptr ||
			glVertexAttribI4i == nullptr ||
			glVertexAttribI1ui == nullptr ||
			glVertexAttribI2ui == nullptr ||
			glVertexAttribI3ui == nullptr ||
			glVertexAttribI4ui == nullptr ||
			glVertexAttribI1iv == nullptr ||
			glVertexAttribI2iv == nullptr ||
			glVertexAttribI3iv == nullptr ||
			glVertexAttribI4iv == nullptr ||
			glVertexAttribI1uiv == nullptr ||
			glVertexAttribI2uiv == nullptr ||
			glVertexAttribI3uiv == nullptr ||
			glVertexAttribI4uiv == nullptr ||
			glVertexAttribI4bv == nullptr ||
			glVertexAttribI4sv == nullptr ||
			glVertexAttribI4ubv == nullptr ||
			glVertexAttribI4usv == nullptr ||
			glGetUniformuiv == nullptr ||
			glBindFragDataLocation == nullptr ||
			glGetFragDataLocation == nullptr ||
			glUniform1ui == nullptr ||
			glUniform2ui == nullptr ||
			glUniform3ui == nullptr ||
			glUniform4ui == nullptr ||
			glUniform1uiv == nullptr ||
			glUniform2uiv == nullptr ||
			glUniform3uiv == nullptr ||
			glUniform4uiv == nullptr ||
			glTexParameterIiv == nullptr ||
			glTexParameterIuiv == nullptr ||
			glGetTexParameterIiv == nullptr ||
			glGetTexParameterIuiv == nullptr ||
			glClearBufferiv == nullptr ||
			glClearBufferuiv == nullptr ||
			glClearBufferfv == nullptr ||
			glClearBufferfi == nullptr ||
			glGetStringi == nullptr ||
			glIsRenderbuffer == nullptr ||
			glBindRenderbuffer == nullptr ||
			glDeleteRenderbuffers == nullptr ||
			glGenRenderbuffers == nullptr ||
			glRenderbufferStorage == nullptr ||
			glGetRenderbufferParameteriv == nullptr ||
			glIsFramebuffer == nullptr ||
			glBindFramebuffer == nullptr ||
			glDeleteFramebuffers == nullptr ||
			glGenFramebuffers == nullptr ||
			glCheckFramebufferStatus == nullptr ||
			glFramebufferTexture1D == nullptr ||
			glFramebufferTexture2D == nullptr ||
			glFramebufferTexture3D == nullptr ||
			glFramebufferRenderbuffer == nullptr ||
			glGetFramebufferAttachmentParameteriv == nullptr ||
			glGenerateMipmap == nullptr ||
			glBlitFramebuffer == nullptr ||
			glRenderbufferStorageMultisample == nullptr ||
			glFramebufferTextureLayer == nullptr ||
			glMapBufferRange == nullptr ||
			glFlushMappedBufferRange == nullptr ||
			glBindVertexArray == nullptr ||
			glDeleteVertexArrays == nullptr ||
			glGenVertexArrays == nullptr ||
			glIsVertexArray == nullptr ||
			glDrawArraysInstanced == nullptr ||
			glDrawElementsInstanced == nullptr ||
			glTexBuffer == nullptr ||
			glPrimitiveRestartIndex == nullptr ||
			glCopyBufferSubData == nullptr ||
			glGetUniformIndices == nullptr ||
			glGetActiveUniformsiv == nullptr ||
			glGetActiveUniformName == nullptr ||
			glGetUniformBlockIndex == nullptr ||
			glGetActiveUniformBlockiv == nullptr ||
			glGetActiveUniformBlockName == nullptr ||
			glUniformBlockBinding == nullptr ||
			glDrawElementsBaseVertex == nullptr ||
			glDrawRangeElementsBaseVertex == nullptr ||
			glDrawElementsInstancedBaseVertex == nullptr ||
			glMultiDrawElementsBaseVertex == nullptr ||
			glProvokingVertex == nullptr ||
			glFenceSync == nullptr ||
			glIsSync == nullptr ||
			glDeleteSync == nullptr ||
			glClientWaitSync == nullptr ||
			glWaitSync == nullptr ||
			glGetInteger64v == nullptr ||
			glGetSynciv == nullptr ||
			glGetInteger64i_v == nullptr ||
			glGetBufferParameteri64v == nullptr ||
			glFramebufferTexture == nullptr ||
			glTexImage2DMultisample == nullptr ||
			glTexImage3DMultisample == nullptr ||
			glGetMultisamplefv == nullptr ||
			glSampleMaski == nullptr ||
			glBindFragDataLocationIndexed == nullptr ||
			glGetFragDataIndex == nullptr ||
			glGenSamplers == nullptr ||
			glDeleteSamplers == nullptr ||
			glIsSampler == nullptr ||
			glBindSampler == nullptr ||
			glSamplerParameteri == nullptr ||
			glSamplerParameteriv == nullptr ||
			glSamplerParameterf == nullptr ||
			glSamplerParameterfv == nullptr ||
			glSamplerParameterIiv == nullptr ||
			glSamplerParameterIuiv == nullptr ||
			glGetSamplerParameteriv == nullptr ||
			glGetSamplerParameterIiv == nullptr ||
			glGetSamplerParameterfv == nullptr ||
			glGetSamplerParameterIuiv == nullptr ||
			glQueryCounter == nullptr ||
			glGetQueryObjecti64v == nullptr ||
			glGetQueryObjectui64v == nullptr ||
			glVertexAttribDivisor == nullptr ||
			glVertexAttribP1ui == nullptr ||
			glVertexAttribP1uiv == nullptr ||
			glVertexAttribP2ui == nullptr ||
			glVertexAttribP2uiv == nullptr ||
			glVertexAttribP3ui == nullptr ||
			glVertexAttribP3uiv == nullptr ||
			glVertexAttribP4ui == nullptr ||
			glVertexAttribP4uiv == nullptr ||
			glVertexP2ui == nullptr ||
			glVertexP2uiv == nullptr ||
			glVertexP3ui == nullptr ||
			glVertexP3uiv == nullptr ||
			glVertexP4ui == nullptr ||
			glVertexP4uiv == nullptr ||
			glTexCoordP1ui == nullptr ||
			glTexCoordP1uiv == nullptr ||
			glTexCoordP2ui == nullptr ||
			glTexCoordP2uiv == nullptr ||
			glTexCoordP3ui == nullptr ||
			glTexCoordP3uiv == nullptr ||
			glTexCoordP4ui == nullptr ||
			glTexCoordP4uiv == nullptr ||
			glMultiTexCoordP1ui == nullptr ||
			glMultiTexCoordP1uiv == nullptr ||
			glMultiTexCoordP2ui == nullptr ||
			glMultiTexCoordP2uiv == nullptr ||
			glMultiTexCoordP3ui == nullptr ||
			glMultiTexCoordP3uiv == nullptr ||
			glMultiTexCoordP4ui == nullptr ||
			glMultiTexCoordP4uiv == nullptr ||
			glNormalP3ui == nullptr ||
			glNormalP3uiv == nullptr ||
			glColorP3ui == nullptr ||
			glColorP3uiv == nullptr ||
			glColorP4ui == nullptr ||
			glColorP4uiv == nullptr ||
			glSecondaryColorP3ui == nullptr ||
			glSecondaryColorP3uiv == nullptr ||
			glDebugMessageControl == nullptr ||
			glDebugMessageInsert == nullptr ||
			glDebugMessageCallback == nullptr ||
			glGetDebugMessageLog == nullptr ||
			glDebugMessageEnable == nullptr ||
			glLabelObject == nullptr ||
			glGetObjectLabel == nullptr ||
			glInsertEventMarker == nullptr ||
			glPushGroupMarker == nullptr ||
			glPopGroupMarker == nullptr ||
			false ) {
		MessageBox(0, "Couldn't load OpenGL 3.3 and debug!", "OpenGL function missing" , MB_OK); 
 		return -1;
	}
	return 0; 
}
#endif
