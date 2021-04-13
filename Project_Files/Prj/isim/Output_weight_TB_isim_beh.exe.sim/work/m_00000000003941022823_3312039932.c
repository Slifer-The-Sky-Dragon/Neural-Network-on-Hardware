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
static const char *ng0 = "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Output_Weight_Memory.v";
static const char *ng1 = "wo_sm.dat";
static int ng2[] = {0, 0};
static int ng3[] = {20, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};
static int ng10[] = {7, 0};
static int ng11[] = {8, 0};
static int ng12[] = {9, 0};



static void Initial_26_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(26, ng0);

LAB2:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 3048);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Cont_30_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t17[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t14, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t17, 32, 2);
    t15 = (t0 + 6992);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t30 = (t0 + 6768);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_31_2(char *t0)
{
    char t5[8];
    char t14[8];
    char t17[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t14, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t17, 32, 2);
    t15 = (t0 + 7056);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t30 = (t0 + 6784);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_32_3(char *t0)
{
    char t5[8];
    char t14[8];
    char t17[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t14, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t17, 32, 2);
    t15 = (t0 + 7120);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t30 = (t0 + 6800);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_33_4(char *t0)
{
    char t5[8];
    char t14[8];
    char t17[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t14, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t17, 32, 2);
    t15 = (t0 + 7184);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t30 = (t0 + 6816);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_34_5(char *t0)
{
    char t5[8];
    char t14[8];
    char t17[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 5208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t14, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t17, 32, 2);
    t15 = (t0 + 7248);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t30 = (t0 + 6832);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_35_6(char *t0)
{
    char t5[8];
    char t14[8];
    char t17[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 5456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t14, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t17, 32, 2);
    t15 = (t0 + 7312);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t30 = (t0 + 6848);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_36_7(char *t0)
{
    char t5[8];
    char t14[8];
    char t17[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 5704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t14, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t17, 32, 2);
    t15 = (t0 + 7376);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t30 = (t0 + 6864);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_37_8(char *t0)
{
    char t5[8];
    char t14[8];
    char t17[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 5952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng10)));
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t14, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t17, 32, 2);
    t15 = (t0 + 7440);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t30 = (t0 + 6880);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_38_9(char *t0)
{
    char t5[8];
    char t14[8];
    char t17[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 6200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t14, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t17, 32, 2);
    t15 = (t0 + 7504);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t30 = (t0 + 6896);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_39_10(char *t0)
{
    char t5[8];
    char t14[8];
    char t17[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 6448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng12)));
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t14, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t17, 32, 2);
    t15 = (t0 + 7568);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 255U;
    t23 = t22;
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t30 = (t0 + 6912);
    *((int *)t30) = 1;

LAB1:    return;
}


extern void work_m_00000000003941022823_3312039932_init()
{
	static char *pe[] = {(void *)Initial_26_0,(void *)Cont_30_1,(void *)Cont_31_2,(void *)Cont_32_3,(void *)Cont_33_4,(void *)Cont_34_5,(void *)Cont_35_6,(void *)Cont_36_7,(void *)Cont_37_8,(void *)Cont_38_9,(void *)Cont_39_10};
	xsi_register_didat("work_m_00000000003941022823_3312039932", "isim/Output_weight_TB_isim_beh.exe.sim/work/m_00000000003941022823_3312039932.didat");
	xsi_register_executes(pe);
}
