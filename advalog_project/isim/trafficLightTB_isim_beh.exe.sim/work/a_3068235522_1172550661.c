/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Jet/Documents/GitHub/AdvancedLogicCircuitProject/advalog_project/TrafficLight.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_3068235522_1172550661_p_0(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16};

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3760);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3856);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 6851);
    t5 = (t0 + 3920);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t12);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(54, ng0);
    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t7 = (t0 + 6744U);
    t9 = (t0 + 1968U);
    t13 = *((char **)t9);
    t9 = (t0 + 6760U);
    t14 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t8, t7, t13, t9);
    if (t14 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3856);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 6859);
    t5 = (t0 + 3920);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);

LAB19:    goto LAB10;

LAB12:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = (t0 + 2208U);
    t6 = *((char **)t5);
    t5 = (t0 + 6792U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3856);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 6867);
    t5 = (t0 + 3920);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);

LAB24:    goto LAB10;

LAB13:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = (t0 + 2088U);
    t6 = *((char **)t5);
    t5 = (t0 + 6776U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3856);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 6875);
    t5 = (t0 + 3920);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);

LAB29:    goto LAB10;

LAB14:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = (t0 + 1968U);
    t6 = *((char **)t5);
    t5 = (t0 + 6760U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3856);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 6883);
    t5 = (t0 + 3920);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);

LAB34:    goto LAB10;

LAB15:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = (t0 + 2208U);
    t6 = *((char **)t5);
    t5 = (t0 + 6792U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3856);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 3856);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 6891);
    t5 = (t0 + 3920);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);

LAB39:    goto LAB10;

LAB16:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = (t0 + 2208U);
    t6 = *((char **)t5);
    t5 = (t0 + 6792U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB43;

LAB45:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 3856);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 6899);
    t5 = (t0 + 3920);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);

LAB44:    goto LAB10;

LAB17:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3856);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB18:    xsi_set_current_line(55, ng0);
    t15 = (t0 + 3856);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)0;
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (8U != t22);
    if (t3 == 1)
        goto LAB21;

LAB22:    t7 = (t0 + 3920);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB19;

LAB21:    xsi_size_not_matching(8U, t22, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(63, ng0);
    t7 = (t0 + 3856);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (8U != t22);
    if (t3 == 1)
        goto LAB26;

LAB27:    t7 = (t0 + 3920);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB24;

LAB26:    xsi_size_not_matching(8U, t22, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(71, ng0);
    t7 = (t0 + 3856);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (8U != t22);
    if (t3 == 1)
        goto LAB31;

LAB32:    t7 = (t0 + 3920);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB29;

LAB31:    xsi_size_not_matching(8U, t22, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(79, ng0);
    t7 = (t0 + 3856);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (8U != t22);
    if (t3 == 1)
        goto LAB36;

LAB37:    t7 = (t0 + 3920);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB34;

LAB36:    xsi_size_not_matching(8U, t22, 0);
    goto LAB37;

LAB38:    xsi_set_current_line(87, ng0);
    t7 = (t0 + 3856);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (8U != t22);
    if (t3 == 1)
        goto LAB41;

LAB42:    t7 = (t0 + 3920);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB39;

LAB41:    xsi_size_not_matching(8U, t22, 0);
    goto LAB42;

LAB43:    xsi_set_current_line(95, ng0);
    t7 = (t0 + 3856);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)5;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6744U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (8U != t22);
    if (t3 == 1)
        goto LAB46;

LAB47:    t7 = (t0 + 3920);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB44;

LAB46:    xsi_size_not_matching(8U, t22, 0);
    goto LAB47;

}

static void work_a_3068235522_1172550661_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8};

LAB0:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 3776);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 6907);
    t6 = (t0 + 3984);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 11U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB4:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 6918);
    t4 = (t0 + 3984);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 11U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB5:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 6929);
    t4 = (t0 + 3984);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 11U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 6940);
    t4 = (t0 + 3984);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 11U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB7:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 6951);
    t4 = (t0 + 3984);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 11U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB8:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 6962);
    t4 = (t0 + 3984);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 11U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

}


extern void work_a_3068235522_1172550661_init()
{
	static char *pe[] = {(void *)work_a_3068235522_1172550661_p_0,(void *)work_a_3068235522_1172550661_p_1};
	xsi_register_didat("work_a_3068235522_1172550661", "isim/trafficLightTB_isim_beh.exe.sim/work/a_3068235522_1172550661.didat");
	xsi_register_executes(pe);
}
