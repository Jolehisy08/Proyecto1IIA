/*
 * Controlador.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Controlador".
 *
 * Model version              : 1.5
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Thu Feb 26 15:17:02 2026
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Controlador_h_
#define Controlador_h_
#ifndef Controlador_COMMON_INCLUDES_
#define Controlador_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif                                 /* Controlador_COMMON_INCLUDES_ */

#include "Controlador_types.h"
#include <float.h>
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Ref;                          /* '<Root>/Ref' */
  real_T NivelMedido;                  /* '<Root>/Nivel Medido' */
} ExtU_Controlador_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Accindecontrol;               /* '<Root>/Acci�n de control' */
} ExtY_Controlador_T;

/* Parameters (default storage) */
struct P_Controlador_T_ {
  real_T Controlador_K_p;              /* Mask Parameter: Controlador_K_p
                                        * Referenced by: '<S1>/Ganancia'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Controlador_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Controlador_T Controlador_P;

/* External inputs (root inport signals with default storage) */
extern ExtU_Controlador_T Controlador_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Controlador_T Controlador_Y;

/* Model entry point functions */
extern void Controlador_initialize(void);
extern void Controlador_step(void);
extern void Controlador_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Controlador_T *const Controlador_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('Pr1_Jolehisy_Acevedo_Medina/Controlador')    - opens subsystem Pr1_Jolehisy_Acevedo_Medina/Controlador
 * hilite_system('Pr1_Jolehisy_Acevedo_Medina/Controlador/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Pr1_Jolehisy_Acevedo_Medina'
 * '<S1>'   : 'Pr1_Jolehisy_Acevedo_Medina/Controlador'
 */
#endif                                 /* Controlador_h_ */
