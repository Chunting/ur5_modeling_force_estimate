#ifndef __c24_JointSpaceControl_h__
#define __c24_JointSpaceControl_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_c24_ResolvedFunctionInfo
#define typedef_c24_ResolvedFunctionInfo

typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c24_ResolvedFunctionInfo;

#endif                                 /*typedef_c24_ResolvedFunctionInfo*/

#ifndef typedef_SFc24_JointSpaceControlInstanceStruct
#define typedef_SFc24_JointSpaceControlInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c24_sfEvent;
  boolean_T c24_isStable;
  boolean_T c24_doneDoubleBufferReInit;
  uint8_T c24_is_active_c24_JointSpaceControl;
} SFc24_JointSpaceControlInstanceStruct;

#endif                                 /*typedef_SFc24_JointSpaceControlInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c24_JointSpaceControl_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c24_JointSpaceControl_get_check_sum(mxArray *plhs[]);
extern void c24_JointSpaceControl_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
