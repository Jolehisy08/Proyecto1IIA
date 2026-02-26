/*
 * Controlador.c
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

#include "Controlador.h"
#include <string.h>
#include "Controlador_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Controlador_T Controlador_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Controlador_T Controlador_Y;

/* Real-time model */
static RT_MODEL_Controlador_T Controlador_M_;
RT_MODEL_Controlador_T *const Controlador_M = &Controlador_M_;

/* Model step function */
void Controlador_step(void)
{
  /* Outport: '<Root>/Acci�n de control' incorporates:
   *  Gain: '<S1>/Ganancia'
   *  Inport: '<Root>/Nivel Medido'
   *  Inport: '<Root>/Ref'
   *  Sum: '<S1>/Minus'
   */
  Controlador_Y.Accindecontrol = (Controlador_U.Ref - Controlador_U.NivelMedido)
    * Controlador_P.Controlador_K_p;

  /* Matfile logging */
  //rt_UpdateTXYLogVars(Controlador_M->rtwLogInfo,
                      //(&Controlador_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(Controlador_M)!=-1) &&
        !((rtmGetTFinal(Controlador_M)-Controlador_M->Timing.taskTime0) >
          Controlador_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Controlador_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Controlador_M->Timing.clockTick0)) {
    ++Controlador_M->Timing.clockTickH0;
  }

  Controlador_M->Timing.taskTime0 = Controlador_M->Timing.clockTick0 *
    Controlador_M->Timing.stepSize0 + Controlador_M->Timing.clockTickH0 *
    Controlador_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Controlador_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Controlador_M, 0,
                sizeof(RT_MODEL_Controlador_T));
  rtmSetTFinal(Controlador_M, 10.0);
  Controlador_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    Controlador_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Controlador_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Controlador_M->rtwLogInfo, (NULL));
    rtliSetLogT(Controlador_M->rtwLogInfo, "tout");
    rtliSetLogX(Controlador_M->rtwLogInfo, "");
    rtliSetLogXFinal(Controlador_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Controlador_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Controlador_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Controlador_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Controlador_M->rtwLogInfo, 1);
    rtliSetLogY(Controlador_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Controlador_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Controlador_M->rtwLogInfo, (NULL));
  }

  /* external inputs */
  (void)memset(&Controlador_U, 0, sizeof(ExtU_Controlador_T));

  /* external outputs */
  Controlador_Y.Accindecontrol = 0.0;

  /* Matfile logging */
  /*rt_StartDataLoggingWithStartTime(Controlador_M->rtwLogInfo, 0.0, rtmGetTFinal*/
    (Controlador_M), Controlador_M->Timing.stepSize0, (&rtmGetErrorStatus
    (Controlador_M));
}

/* Model terminate function */
void Controlador_terminate(void)
{
  /* (no terminate code required) */
}
