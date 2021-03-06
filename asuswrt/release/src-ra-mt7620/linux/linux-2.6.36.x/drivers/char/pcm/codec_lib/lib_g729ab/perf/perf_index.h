#ifndef _PERF_INDEX_H_
#define _PERF_INDEX_H_

#if 0
/* for ProfileEnterPoint() and ProfileExitPoint() */
#define PROFILE_INDEX_MIN 0

#define PROFILE_INDEX_PCMDRV			0
#define PROFILE_INDEX_PCMISR			(PROFILE_INDEX_PCMDRV+1)
#define PROFILE_INDEX_PCM_RX			(PROFILE_INDEX_PCMDRV+2)
#define PROFILE_INDEX_PCM_HANDLER		(PROFILE_INDEX_PCMDRV+3)
#define PROFILE_INDEX_DTMFDEC			(PROFILE_INDEX_PCMDRV+4)
#define PROFILE_INDEX_LEC			(PROFILE_INDEX_PCMDRV+5)
#define PROFILE_INDEX_DSPPROCESS		(PROFILE_INDEX_PCMDRV+6)

/* r1_main.c */
#define PROFILE_INDEX_R1MAIN			10
#define PROFILE_INDEX_PLAYTONE			(PROFILE_INDEX_R1MAIN+1)
#define PROFILE_INDEX_G711DECPHASE		(PROFILE_INDEX_R1MAIN+2)
#define PROFILE_INDEX_G729DECPHASE		(PROFILE_INDEX_R1MAIN+3)
#define PROFILE_INDEX_G7231DECPHASE		(PROFILE_INDEX_R1MAIN+4)
#define PROFILE_INDEX_AES			(PROFILE_INDEX_R1MAIN+5)
#define PROFILE_INDEX_G711ENCPHASE		(PROFILE_INDEX_R1MAIN+6)
#define PROFILE_INDEX_G729ENCPHASE		(PROFILE_INDEX_R1MAIN+7)
#define PROFILE_INDEX_G7231ENCPHASE		(PROFILE_INDEX_R1MAIN+8)
#define PROFILE_INDEX_G729JBC			(PROFILE_INDEX_R1MAIN+9)
#define PROFILE_INDEX_G729DEC			(PROFILE_INDEX_R1MAIN+10)
#define PROFILE_INDEX_G726DECPHASE		(PROFILE_INDEX_R1MAIN+11)
#define PROFILE_INDEX_G726ENCPHASE		(PROFILE_INDEX_R1MAIN+12)
#define PROFILE_INDEX_GSMFRDECPHASE		(PROFILE_INDEX_R1MAIN+13)
#define PROFILE_INDEX_GSMFRENCPHASE		(PROFILE_INDEX_R1MAIN+14)
#define PROFILE_INDEX_T38DECPHASE		(PROFILE_INDEX_R1MAIN+15)
#define PROFILE_INDEX_T38ENCPHASE		(PROFILE_INDEX_R1MAIN+16)

/* G729 Encoder */ 
#define PROFILE_INDEX_G729AB_ENCODER		40
#define PROFILE_INDEX_G729AB_PRE_PROCESSS	(PROFILE_INDEX_G729AB_ENCODER+1)
#define PROFILE_INDEX_G729AB_CODER_LD8A		(PROFILE_INDEX_G729AB_ENCODER+2)
#define PROFILE_INDEX_G729AB_PRM2BITS		(PROFILE_INDEX_G729AB_ENCODER+3)
#define PROFILE_INDEX_G729AB_AUDOCORRS		(PROFILE_INDEX_G729AB_ENCODER+4)
#define PROFILE_INDEX_G729AB_LEVINSONS		(PROFILE_INDEX_G729AB_ENCODER+5)
#define PROFILE_INDEX_G729AB_AZ_LSP		(PROFILE_INDEX_G729AB_ENCODER+6)
#define PROFILE_INDEX_G729AB_LSP_LSFS		(PROFILE_INDEX_G729AB_ENCODER+7)
#define PROFILE_INDEX_G729AB_VAD		(PROFILE_INDEX_G729AB_ENCODER+8)
#define PROFILE_INDEX_G729AB_COD_CNG		(PROFILE_INDEX_G729AB_ENCODER+9)
#define PROFILE_INDEX_G729AB_RESIDUS		(PROFILE_INDEX_G729AB_ENCODER+10)
#define PROFILE_INDEX_G729AB_WEIGHT_AZS		(PROFILE_INDEX_G729AB_ENCODER+11)
#define PROFILE_INDEX_G729AB_SYN_FILTS		(PROFILE_INDEX_G729AB_ENCODER+12)
#define PROFILE_INDEX_G729AB_QUA_LSP		(PROFILE_INDEX_G729AB_ENCODER+13)
#define PROFILE_INDEX_G729AB_INT_QLPCS		(PROFILE_INDEX_G729AB_ENCODER+14)
#define PROFILE_INDEX_G729AB_PITCH_OL		(PROFILE_INDEX_G729AB_ENCODER+15)
#define PROFILE_INDEX_G729AB_PITCH_FR3		(PROFILE_INDEX_G729AB_ENCODER+16)
#define PROFILE_INDEX_G729AB_ENC_LAG3		(PROFILE_INDEX_G729AB_ENCODER+17)
#define PROFILE_INDEX_G729AB_G_PITCHS		(PROFILE_INDEX_G729AB_ENCODER+18)
#define PROFILE_INDEX_G729AB_COD_LD8A_S1	(PROFILE_INDEX_G729AB_ENCODER+19)
#define PROFILE_INDEX_G729AB_ACELP		(PROFILE_INDEX_G729AB_ENCODER+20)
#define PROFILE_INDEX_G729AB_CORRXY2S		(PROFILE_INDEX_G729AB_ENCODER+21)
#define PROFILE_INDEX_G729AB_COD_LD8A_S2	(PROFILE_INDEX_G729AB_ENCODER+22)
#define PROFILE_INDEX_G729AB_QUA_GAINS		(PROFILE_INDEX_G729AB_ENCODER+23)
#define PROFILE_INDEX_G729AB_COPY		(PROFILE_INDEX_G729AB_ENCODER+24)
#define PROFILE_INDEX_G729AB_CROSSCONV		(PROFILE_INDEX_G729AB_ENCODER+25)

/* G729 Decoder */
#define PROFILE_INDEX_G729AB_DECODER		70


/* G7231 Encoder */
#define PROFILE_INDEX_G7231_ENCODER		100
#define PROFILE_INDEX_G7231_REM_DC		(PROFILE_INDEX_G7231_ENCODER+1)
#define PROFILE_INDEX_G7231_COMP_LPC		(PROFILE_INDEX_G7231_ENCODER+2)
#define PROFILE_INDEX_G7231_ATOLSP		(PROFILE_INDEX_G7231_ENCODER+3)
#define PROFILE_INDEX_G7231_COMP_VAD		(PROFILE_INDEX_G7231_ENCODER+4)
#define PROFILE_INDEX_G7231_LSP_QNT		(PROFILE_INDEX_G7231_ENCODER+5)
#define PROFILE_INDEX_G7231_MEM_SHIFT		(PROFILE_INDEX_G7231_ENCODER+6)
#define PROFILE_INDEX_G7231_WGHT_LPC		(PROFILE_INDEX_G7231_ENCODER+7)
#define PROFILE_INDEX_G7231_ERROR_WGHT		(PROFILE_INDEX_G7231_ENCODER+8)
#define PROFILE_INDEX_G7231_VEC_NORM		(PROFILE_INDEX_G7231_ENCODER+9)
#define PROFILE_INDEX_G7231_ESTPITCHLOOP	(PROFILE_INDEX_G7231_ENCODER+10)
#define PROFILE_INDEX_G7231_COMP_PWS_LOOP	(PROFILE_INDEX_G7231_ENCODER+11)
#define PROFILE_INDEX_G7231_FILT_PW_LOOP	(PROFILE_INDEX_G7231_ENCODER+12)
#define PROFILE_INDEX_G7231_LSP_INQ		(PROFILE_INDEX_G7231_ENCODER+13)
#define PROFILE_INDEX_G7231_COMP_IR		(PROFILE_INDEX_G7231_ENCODER+14)
#define PROFILE_INDEX_G7231_SUB_RING		(PROFILE_INDEX_G7231_ENCODER+15)
#define PROFILE_INDEX_G7231_FIND_ACBK		(PROFILE_INDEX_G7231_ENCODER+16)
#define PROFILE_INDEX_G7231_FIND_FCBK		(PROFILE_INDEX_G7231_ENCODER+17)
#define PROFILE_INDEX_G7231_DECOD_ACBK		(PROFILE_INDEX_G7231_ENCODER+18)
#define PROFILE_INDEX_G7231_UPDATE_ERR		(PROFILE_INDEX_G7231_ENCODER+19)
#define PROFILE_INDEX_G7231_UPD_RING		(PROFILE_INDEX_G7231_ENCODER+20)
#define PROFILE_INDEX_G7231_LINE_PACK		(PROFILE_INDEX_G7231_ENCODER+21)
#define PROFILE_INDEX_G7231_CROSSCONV		(PROFILE_INDEX_G7231_ENCODER+22)

/* G7231 Decoder */
#define PROFILE_INDEX_G7231_DECODER		140
#define PROFILE_INDEX_G7231_LINE_UNPK		(PROFILE_INDEX_G7231_DECODER+1)
#define PROFILE_INDEX_G7231_DEC_CNG		(PROFILE_INDEX_G7231_DECODER+2)
#define PROFILE_INDEX_G7231_DEC_LSP_INQ		(PROFILE_INDEX_G7231_DECODER+3)
#define PROFILE_INDEX_G7231_LSP_INT		(PROFILE_INDEX_G7231_DECODER+4)
#define PROFILE_INDEX_G7231_FCBK_UNPK		(PROFILE_INDEX_G7231_DECODER+5)
//#define PROFILE_INDEX_G7231_DECOD_ACBK	(PROFILE_INDEX_G7231_DECODER+6)
#define PROFILE_INDEX_G7231_COMP_INFO		(PROFILE_INDEX_G7231_DECODER+7)
#define PROFILE_INDEX_G7231_COMP_LPF		(PROFILE_INDEX_G7231_DECODER+8)
#define PROFILE_INDEX_G7231_FILT_LPF		(PROFILE_INDEX_G7231_DECODER+9)
#define PROFILE_INDEX_G7231_REGEN		(PROFILE_INDEX_G7231_DECODER+10)
#define PROFILE_INDEX_G7231_SYNT		(PROFILE_INDEX_G7231_DECODER+11)
#define PROFILE_INDEX_G7231_SPF			(PROFILE_INDEX_G7231_DECODER+12)
#define PROFILE_INDEX_G7231_SCALE		(PROFILE_INDEX_G7231_DECODER+13)

/* G726 Encoder */
#define PROFILE_INDEX_G726_ENCODER		170

/* G726 Decoder */
#define PROFILE_INDEX_G726_DECODER		200
#endif
/* Temp */
#define PROFILE_INDEX_TEMP 0//160
#define PROFILE_INDEX_TEMP0 (PROFILE_INDEX_TEMP+1)
#define PROFILE_INDEX_TEMP1 (PROFILE_INDEX_TEMP+2)
#define PROFILE_INDEX_MAX 3//230

#endif /* _PERF_INDEX_H_ */
