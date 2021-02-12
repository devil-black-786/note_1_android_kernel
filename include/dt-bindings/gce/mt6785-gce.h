/*
 * Copyright (c) 2019 MediaTek Inc.
 * Author: Dennis YC Hsieh <dennis-yc.hsieh@mediatek.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_GCE_MT6785_H
#define _DT_BINDINGS_GCE_MT6785_H

/* assign timeout 0 also means default */
#define CMDQ_NO_TIMEOUT		0xffffffff
#define CMDQ_TIMEOUT_DEFAULT	1000

/* GCE thread priority */
#define CMDQ_THR_PRIO_LOWEST	0
#define CMDQ_THR_PRIO_1		1
#define CMDQ_THR_PRIO_2		2
#define CMDQ_THR_PRIO_3		3
#define CMDQ_THR_PRIO_4		4
#define CMDQ_THR_PRIO_5		5
#define CMDQ_THR_PRIO_6		6
#define CMDQ_THR_PRIO_HIGHEST	7

/* CPR count in 32bit register */
#define GCE_CPR_COUNT		1312

/* GCE subsys table */
#define SUBSYS_1300XXXX		0
#define SUBSYS_1400XXXX		1
#define SUBSYS_1401XXXX		2
#define SUBSYS_1402XXXX		3
#define SUBSYS_1502XXXX		4
#define SUBSYS_1880XXXX		5
#define SUBSYS_1881XXXX		6
#define SUBSYS_1882XXXX		7
#define SUBSYS_1883XXXX		8
#define SUBSYS_1884XXXX		9
#define SUBSYS_1000XXXX		10
#define SUBSYS_1001XXXX		11
#define SUBSYS_1002XXXX		12
#define SUBSYS_1003XXXX		13
#define SUBSYS_1004XXXX		14
#define SUBSYS_1005XXXX		15
#define SUBSYS_1020XXXX		16
#define SUBSYS_1028XXXX		17
#define SUBSYS_1700XXXX		18
#define SUBSYS_1701XXXX		19
#define SUBSYS_1702XXXX		20
#define SUBSYS_1703XXXX		21
#define SUBSYS_1800XXXX		22
#define SUBSYS_1801XXXX		23
#define SUBSYS_1802XXXX		24
#define SUBSYS_1804XXXX		25
#define SUBSYS_1805XXXX		26
#define SUBSYS_1808XXXX		27
#define SUBSYS_180aXXXX		28
#define SUBSYS_180bXXXX		29

/* GCE hardware events */
#define CMDQ_EVENT_DISP_RDMA0_SOF		0
#define CMDQ_EVENT_DISP_RDMA1_SOF		1
#define CMDQ_EVENT_MDP_RDMA0_SOF		2
#define CMDQ_EVENT_MDP_RDMA1_SOF		3
#define CMDQ_EVENT_MDP_RSZ0_SOF			4
#define CMDQ_EVENT_MDP_RSZ1_SOF			5
#define CMDQ_EVENT_MDP_TDSHP_SOF		6
#define CMDQ_EVENT_MDP_WROT0_SOF		7
#define CMDQ_EVENT_MDP_WROT1_SOF		8
#define CMDQ_EVENT_DISP_OVL0_SOF		9
#define CMDQ_EVENT_DISP_2L_OVL0_SOF		10
#define CMDQ_EVENT_DISP_2L_OVL1_SOF		11
#define CMDQ_EVENT_DISP_WDMA0_SOF		12
#define CMDQ_EVENT_DISP_COLOR0_SOF		13
#define CMDQ_EVENT_DISP_CCORR0_SOF		14
#define CMDQ_EVENT_DISP_AAL0_SOF		15
#define CMDQ_EVENT_DISP_GAMMA0_SOF		16
#define CMDQ_EVENT_DISP_DITHER0_SOF		17
#define CMDQ_EVENT_DISP_PWM0_SOF		18
#define CMDQ_EVENT_DISP_DSI0_SOF		19
#define CMDQ_EVENT_DISP_DPI0_SOF		20
#define CMDQ_EVENT_DISP_POSTMASK0_SOF		21
#define CMDQ_EVENT_DISP_RSZ0_SOF		22
#define CMDQ_EVENT_MDP_AAL_SOF			23
#define CMDQ_EVENT_MDP_CCORR_SOF		24
#define CMDQ_EVENT_DISP_DBI0_SOF		25
#define CMDQ_EVENT_ISP_RELAY_SOF		26
#define CMDQ_EVENT_IPU_RELAY_SOF		27
#define CMDQ_EVENT_DISP_RDMA0_EOF		28
#define CMDQ_EVENT_DISP_RDMA1_EOF		29
#define CMDQ_EVENT_MDP_RDMA0_EOF		30
#define CMDQ_EVENT_MDP_RDMA1_EOF		31
#define CMDQ_EVENT_MDP_RSZ0_EOF			32
#define CMDQ_EVENT_MDP_RSZ1_EOF			33
#define CMDQ_EVENT_MDP_TDSHP_EOF		34
#define CMDQ_EVENT_MDP_WROT0_W_EOF		35
#define CMDQ_EVENT_MDP_WROT1_W_EOF		36
#define CMDQ_EVENT_DISP_OVL0_EOF		37
#define CMDQ_EVENT_DISP_2L_OVL0_EOF		38
#define CMDQ_EVENT_DISP_2L_OVL1_EOF		39
#define CMDQ_EVENT_DISP_WDMA0_EOF		40
#define CMDQ_EVENT_DISP_COLOR0_EOF		41
#define CMDQ_EVENT_DISP_CCORR0_EOF		42
#define CMDQ_EVENT_DISP_AAL0_EOF		43
#define CMDQ_EVENT_DISP_GAMMA0_EOF		44
#define CMDQ_EVENT_DISP_DITHER0_EOF		45
#define CMDQ_EVENT_DISP_DSI0_EOF		46
#define CMDQ_EVENT_DISP_DPI0_EOF		47
#define CMDQ_EVENT_DISP_RSZ0_EOF		49
#define CMDQ_EVENT_MDP_AAL_FRAME_DONE		50
#define CMDQ_EVENT_MDP_CCORR_FRAME_DONE		51
#define CMDQ_EVENT_DISP_POSTMASK0_FRAME_DONE	52
#define CMDQ_EVENT_MUTEX0_STREAM_EOF		130
#define CMDQ_EVENT_MUTEX1_STREAM_EOF		131
#define CMDQ_EVENT_MUTEX2_STREAM_EOF		132
#define CMDQ_EVENT_MUTEX3_STREAM_EOF		133
#define CMDQ_EVENT_MUTEX4_STREAM_EOF		134
#define CMDQ_EVENT_MUTEX5_STREAM_EOF		135
#define CMDQ_EVENT_MUTEX6_STREAM_EOF		136
#define CMDQ_EVENT_MUTEX7_STREAM_EOF		137
#define CMDQ_EVENT_MUTEX8_STREAM_EOF		138
#define CMDQ_EVENT_MUTEX9_STREAM_EOF		139
#define CMDQ_EVENT_MUTEX10_STREAM_EOF		140
#define CMDQ_EVENT_MUTEX11_STREAM_EOF		141
#define CMDQ_EVENT_DISP_RDMA0_UNDERRUN		142
#define CMDQ_EVENT_DISP_RDMA1_UNDERRUN		143
#define CMDQ_EVENT_DISP_RDMA2_UNDERRUN		144
#define CMDQ_EVENT_DISP_RDMA3_UNDERRUN		145
#define CMDQ_EVENT_DSI0_TE			146
#define CMDQ_EVENT_DSI0_IRQ_EVENT		147
#define CMDQ_EVENT_DSI0_DONE_EVENT		148
#define CMDQ_EVENT_DISP_POSTMASK0_FRAME_RST_DONE_PULSE	150
#define CMDQ_EVENT_DISP_WDMA0_RST_DONE		151
#define CMDQ_EVENT_MDP_WROT0_RST_DONE		153
#define CMDQ_EVENT_MDP_RDMA0_RST_DONE		154
#define CMDQ_EVENT_DISP_OVL0_RST_DONE		155
#define CMDQ_EVENT_DISP_OVL0_2L_RST_DONE	156
#define CMDQ_EVENT_DISP_OVL1_2L_RST_DONE	157
#define CMDQ_EVENT_DIP_CQ_THREAD0_EOF		257
#define CMDQ_EVENT_DIP_CQ_THREAD1_EOF		258
#define CMDQ_EVENT_DIP_CQ_THREAD2_EOF		259
#define CMDQ_EVENT_DIP_CQ_THREAD3_EOF		260
#define CMDQ_EVENT_DIP_CQ_THREAD4_EOF		261
#define CMDQ_EVENT_DIP_CQ_THREAD5_EOF		262
#define CMDQ_EVENT_DIP_CQ_THREAD6_EOF		263
#define CMDQ_EVENT_DIP_CQ_THREAD7_EOF		264
#define CMDQ_EVENT_DIP_CQ_THREAD8_EOF		265
#define CMDQ_EVENT_DIP_CQ_THREAD9_EOF		266
#define CMDQ_EVENT_DIP_CQ_THREAD10_EOF		267
#define CMDQ_EVENT_DIP_CQ_THREAD11_EOF		268
#define CMDQ_EVENT_DIP_CQ_THREAD12_EOF		269
#define CMDQ_EVENT_DIP_CQ_THREAD13_EOF		270
#define CMDQ_EVENT_DIP_CQ_THREAD14_EOF		271
#define CMDQ_EVENT_DIP_CQ_THREAD15_EOF		272
#define CMDQ_EVENT_DIP_CQ_THREAD16_EOF		273
#define CMDQ_EVENT_DIP_CQ_THREAD17_EOF		274
#define CMDQ_EVENT_DIP_CQ_THREAD18_EOF		275
#define CMDQ_EVENT_AMD_FRAME_DONE		276
#define CMDQ_EVENT_DVE_EOF			277
#define CMDQ_EVENT_WMF_EOF			278
#define CMDQ_EVENT_RSC_EOF			279
#define CMDQ_EVENT_MFB_DONE			280
#define CMDQ_EVENT_WPE_A_EOF			281
#define CMDQ_EVENT_WPE_B_FRAME_DONE		282
#define CMDQ_EVENT_OCC_DONE			283
#define CMDQ_EVENT_VENC_EOF			289
#define CMDQ_EVENT_VENC_CMDQ_PAUSE_DONE		290
#define CMDQ_EVENT_JPEG_ENC_EOF			291
#define CMDQ_EVENT_VENC_MB_DONE			292
#define CMDQ_EVENT_VENC_128BYTE_CNT_DONE	293
#define CMDQ_EVENT_ISP_FRAME_DONE_A		321
#define CMDQ_EVENT_ISP_FRAME_DONE_B		322
#define CMDQ_EVENT_ISP_CAMSV_0_PASS1_DONE	323
#define CMDQ_EVENT_ISP_CAMSV_1_PASS1_DONE	324
#define CMDQ_EVENT_ISP_CAMSV_2_PASS1_DONE	325
#define CMDQ_EVENT_ISP_TSF_DONE			326
#define CMDQ_EVENT_SENINF_0_FIFO_FULL		327
#define CMDQ_EVENT_SENINF_1_FIFO_FULL		328
#define CMDQ_EVENT_SENINF_2_FIFO_FULL		329
#define CMDQ_EVENT_SENINF_3_FIFO_FULL		330
#define CMDQ_EVENT_SENINF_4_FIFO_FULL		331
#define CMDQ_EVENT_SENINF_5_FIFO_FULL		332
#define CMDQ_EVENT_SENINF_6_FIFO_FULL		333
#define CMDQ_EVENT_SENINF_7_FIFO_FULL		334
#define CMDQ_EVENT_APU_GCE_CORE0_EVENT_0	353
#define CMDQ_EVENT_APU_GCE_CORE0_EVENT_1	354
#define CMDQ_EVENT_APU_GCE_CORE0_EVENT_2	355
#define CMDQ_EVENT_APU_GCE_CORE0_EVENT_3	356
#define CMDQ_EVENT_APU_GCE_CORE1_EVENT_0	385
#define CMDQ_EVENT_APU_GCE_CORE1_EVENT_1	386
#define CMDQ_EVENT_APU_GCE_CORE1_EVENT_2	387
#define CMDQ_EVENT_APU_GCE_CORE1_EVENT_3	388
#define CMDQ_EVENT_VDEC_EVENT_0			416
#define CMDQ_EVENT_VDEC_EVENT_1			417
#define CMDQ_EVENT_VDEC_EVENT_2			418
#define CMDQ_EVENT_VDEC_EVENT_3			419
#define CMDQ_EVENT_VDEC_EVENT_4			420
#define CMDQ_EVENT_VDEC_EVENT_5			421
#define CMDQ_EVENT_VDEC_EVENT_6			422
#define CMDQ_EVENT_VDEC_EVENT_7			423
#define CMDQ_EVENT_VDEC_EVENT_8			424
#define CMDQ_EVENT_VDEC_EVENT_9			425
#define CMDQ_EVENT_VDEC_EVENT_10		426
#define CMDQ_EVENT_VDEC_EVENT_11		427
#define CMDQ_EVENT_VDEC_EVENT_12		428
#define CMDQ_EVENT_VDEC_EVENT_13		429
#define CMDQ_EVENT_VDEC_EVENT_14		430
#define CMDQ_EVENT_VDEC_EVENT_15		431
#define CMDQ_EVENT_DSI0_TE_INFRA		898

/* Keep this at the end of HW events */
#define CMDQ_MAX_HW_EVENT_COUNT			512

#endif
