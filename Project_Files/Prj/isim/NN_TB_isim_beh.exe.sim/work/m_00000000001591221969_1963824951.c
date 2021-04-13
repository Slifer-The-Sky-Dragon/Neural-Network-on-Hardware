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
static const char *ng0 = "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/NN_TB.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {240000, 0};
static int ng4[] = {100, 0, 0, 0};
static const char *ng5 = "Accuracy : %f";



static void Initial_42_0(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    double t34;
    double t35;
    double t36;
    double t37;
    double t38;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);

LAB4:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t3 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t0 + 4704);
    *((int *)t9) = t8;

LAB7:    t10 = (t0 + 4704);
    if (*((int *)t10) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value_double(t2, 750.00000000000000, 0);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t34 = xsi_vlog_convert_to_real(t3, 11, 2);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    t35 = *((double *)t9);
    t36 = (t34 / t35);
    t10 = ((char*)((ng4)));
    t37 = xsi_vlog_convert_to_real(t10, 32, 1);
    t38 = (t36 * t37);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value_double(t11, t38, 0);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t34 = *((double *)t4);
    *((double *)t12) = t34;
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)114, t12, 64);
    goto LAB1;

LAB8:    xsi_set_current_line(52, ng0);

LAB10:    xsi_set_current_line(53, ng0);
    t11 = (t0 + 2656);
    xsi_process_wait(t11, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(54, ng0);
    t13 = (t0 + 1448);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t16) == 0)
        goto LAB12;

LAB14:    t22 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t22) = 1;

LAB15:    t23 = (t12 + 4);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    *((unsigned int *)t12) = t26;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB17;

LAB16:    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 1U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 1U);
    t33 = (t0 + 1448);
    xsi_vlogvar_assign_value(t33, t12, 0, 0, 1);
    t2 = (t0 + 4704);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB7;

LAB12:    *((unsigned int *)t12) = 1;
    goto LAB15;

LAB17:    t27 = *((unsigned int *)t12);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t12) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB16;

}


extern void work_m_00000000001591221969_1963824951_init()
{
	static char *pe[] = {(void *)Initial_42_0};
	xsi_register_didat("work_m_00000000001591221969_1963824951", "isim/NN_TB_isim_beh.exe.sim/work/m_00000000001591221969_1963824951.didat");
	xsi_register_executes(pe);
}
