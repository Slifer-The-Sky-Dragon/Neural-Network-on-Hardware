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
static const char *ng0 = "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Input_memory.v";
static const char *ng1 = "test_data_sm.dat";
static int ng2[] = {1, 0};
static int ng3[] = {62, 0};



static void Initial_25_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(25, ng0);

LAB2:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1768);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Cont_29_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t16[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1768);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t13, 32, t12, 32);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_multiply(t16, 32, t14, 32, t15, 32);
    t17 = (t0 + 1048U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t16, 32, t18, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t19, 32, 2);
    t17 = (t0 + 3336);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t23, 0, 8);
    t24 = 255U;
    t25 = t24;
    t26 = (t5 + 4);
    t27 = *((unsigned int *)t5);
    t24 = (t24 & t27);
    t28 = *((unsigned int *)t26);
    t25 = (t25 & t28);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t30 | t24);
    t31 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t31 | t25);
    xsi_driver_vfirst_trans(t17, 0, 7);
    t32 = (t0 + 3256);
    *((int *)t32) = 1;

LAB1:    return;
}


extern void work_m_00000000003991050320_1077407102_init()
{
	static char *pe[] = {(void *)Initial_25_0,(void *)Cont_29_1};
	xsi_register_didat("work_m_00000000003991050320_1077407102", "isim/NN_TB_isim_beh.exe.sim/work/m_00000000003991050320_1077407102.didat");
	xsi_register_executes(pe);
}
