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
static const char *ng0 = "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Hidden_Weight_Memory.v";
static const char *ng1 = "w1_sm.dat";
static int ng2[] = {10, 0};
static int ng3[] = {0, 0};
static int ng4[] = {62, 0};
static int ng5[] = {1, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};
static int ng9[] = {5, 0};
static int ng10[] = {6, 0};
static int ng11[] = {7, 0};
static int ng12[] = {8, 0};
static int ng13[] = {9, 0};



static void Initial_27_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 3208);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Cont_31_1(char *t0)
{
    char t5[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t21[8];
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
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t12, 32, t14, 1);
    t13 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t15, 32, t13, 32);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t20, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t21, 32, 2);
    t19 = (t0 + 7152);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 255U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t19, 0, 7);
    t34 = (t0 + 6928);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_32_2(char *t0)
{
    char t5[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t21[8];
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
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t12, 32, t14, 1);
    t13 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t15, 32, t13, 32);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t20, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t21, 32, 2);
    t19 = (t0 + 7216);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 255U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t19, 0, 7);
    t34 = (t0 + 6944);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_33_3(char *t0)
{
    char t5[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t21[8];
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
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t12, 32, t14, 1);
    t13 = ((char*)((ng6)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t15, 32, t13, 32);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t20, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t21, 32, 2);
    t19 = (t0 + 7280);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 255U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t19, 0, 7);
    t34 = (t0 + 6960);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_34_4(char *t0)
{
    char t5[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t21[8];
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
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t12, 32, t14, 1);
    t13 = ((char*)((ng7)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t15, 32, t13, 32);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t20, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t21, 32, 2);
    t19 = (t0 + 7344);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 255U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t19, 0, 7);
    t34 = (t0 + 6976);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_35_5(char *t0)
{
    char t5[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t21[8];
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
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 5368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t12, 32, t14, 1);
    t13 = ((char*)((ng8)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t15, 32, t13, 32);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t20, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t21, 32, 2);
    t19 = (t0 + 7408);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 255U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t19, 0, 7);
    t34 = (t0 + 6992);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_36_6(char *t0)
{
    char t5[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t21[8];
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
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 5616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t12, 32, t14, 1);
    t13 = ((char*)((ng9)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t15, 32, t13, 32);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t20, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t21, 32, 2);
    t19 = (t0 + 7472);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 255U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t19, 0, 7);
    t34 = (t0 + 7008);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_37_7(char *t0)
{
    char t5[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t21[8];
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
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 5864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t12, 32, t14, 1);
    t13 = ((char*)((ng10)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t15, 32, t13, 32);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t20, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t21, 32, 2);
    t19 = (t0 + 7536);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 255U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t19, 0, 7);
    t34 = (t0 + 7024);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_38_8(char *t0)
{
    char t5[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t21[8];
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
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 6112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t12, 32, t14, 1);
    t13 = ((char*)((ng11)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t15, 32, t13, 32);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t20, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t21, 32, 2);
    t19 = (t0 + 7600);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 255U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t19, 0, 7);
    t34 = (t0 + 7040);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_39_9(char *t0)
{
    char t5[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t21[8];
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
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 6360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t12, 32, t14, 1);
    t13 = ((char*)((ng12)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t15, 32, t13, 32);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t20, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t21, 32, 2);
    t19 = (t0 + 7664);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 255U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t19, 0, 7);
    t34 = (t0 + 7056);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_40_10(char *t0)
{
    char t5[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t21[8];
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
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 6608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t12, 32, t14, 1);
    t13 = ((char*)((ng13)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t15, 32, t13, 32);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t20, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t21, 32, 2);
    t19 = (t0 + 7728);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 255U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t19, 0, 7);
    t34 = (t0 + 7072);
    *((int *)t34) = 1;

LAB1:    return;
}


extern void work_m_00000000002464819073_1477837935_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Cont_31_1,(void *)Cont_32_2,(void *)Cont_33_3,(void *)Cont_34_4,(void *)Cont_35_5,(void *)Cont_36_6,(void *)Cont_37_7,(void *)Cont_38_8,(void *)Cont_39_9,(void *)Cont_40_10};
	xsi_register_didat("work_m_00000000002464819073_1477837935", "isim/NN_TB_isim_beh.exe.sim/work/m_00000000002464819073_1477837935.didat");
	xsi_register_executes(pe);
}
