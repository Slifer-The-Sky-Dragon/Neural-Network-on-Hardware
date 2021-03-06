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
static const char *ng0 = "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Store_Regs.v";
static int ng1[] = {10, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};
static int ng9[] = {7, 0};
static int ng10[] = {8, 0};
static int ng11[] = {9, 0};



static void Always_33_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t24[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5176);
    *((int *)t2) = 1;
    t3 = (t0 + 4640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);

LAB9:    xsi_set_current_line(35, ng0);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = (t0 + 3688);
    t15 = (t0 + 3688);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 3688);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t21, 32, t23, 1);
    t22 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t24, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t25, 32, 2);
    t26 = (t13 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t17, 32, t19, 1);
    t18 = ((char*)((ng3)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t24, 32, t18, 32);
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t25, 32, 2);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t28 = (!(t6));
    t21 = (t14 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t17, 32, t19, 1);
    t18 = ((char*)((ng4)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t24, 32, t18, 32);
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t25, 32, 2);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t28 = (!(t6));
    t21 = (t14 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t17, 32, t19, 1);
    t18 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t24, 32, t18, 32);
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t25, 32, 2);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t28 = (!(t6));
    t21 = (t14 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t17, 32, t19, 1);
    t18 = ((char*)((ng6)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t24, 32, t18, 32);
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t25, 32, 2);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t28 = (!(t6));
    t21 = (t14 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t17, 32, t19, 1);
    t18 = ((char*)((ng7)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t24, 32, t18, 32);
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t25, 32, 2);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t28 = (!(t6));
    t21 = (t14 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t17, 32, t19, 1);
    t18 = ((char*)((ng8)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t24, 32, t18, 32);
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t25, 32, 2);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t28 = (!(t6));
    t21 = (t14 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t17, 32, t19, 1);
    t18 = ((char*)((ng9)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t24, 32, t18, 32);
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t25, 32, 2);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t28 = (!(t6));
    t21 = (t14 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t17, 32, t19, 1);
    t18 = ((char*)((ng10)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t24, 32, t18, 32);
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t25, 32, 2);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t28 = (!(t6));
    t21 = (t14 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t17, 32, t19, 1);
    t18 = ((char*)((ng11)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t24, 32, t18, 32);
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t25, 32, 2);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t28 = (!(t6));
    t21 = (t14 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB28;

LAB29:    goto LAB8;

LAB10:    t33 = *((unsigned int *)t13);
    t34 = *((unsigned int *)t14);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t36, 0LL);
    goto LAB11;

LAB12:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t14), t36, 0LL);
    goto LAB13;

LAB14:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t14), t36, 0LL);
    goto LAB15;

LAB16:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t14), t36, 0LL);
    goto LAB17;

LAB18:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t14), t36, 0LL);
    goto LAB19;

LAB20:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t14), t36, 0LL);
    goto LAB21;

LAB22:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t14), t36, 0LL);
    goto LAB23;

LAB24:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t14), t36, 0LL);
    goto LAB25;

LAB26:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t14), t36, 0LL);
    goto LAB27;

LAB28:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t14), t36, 0LL);
    goto LAB29;

}

static void Cont_48_1(char *t0)
{
    char t5[8];
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
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t13, 32, 2);
    t12 = (t0 + 5272);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 255U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t12, 0, 7);
    t26 = (t0 + 5192);
    *((int *)t26) = 1;

LAB1:    return;
}


extern void work_m_00000000003091255054_3030423993_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Cont_48_1};
	xsi_register_didat("work_m_00000000003091255054_3030423993", "isim/NN_TB_isim_beh.exe.sim/work/m_00000000003091255054_3030423993.didat");
	xsi_register_executes(pe);
}
