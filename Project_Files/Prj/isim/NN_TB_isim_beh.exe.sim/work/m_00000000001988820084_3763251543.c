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
static const char *ng0 = "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Signed_Adder.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 16383U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 16383U);
    t13 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 20, 20, 2U, t13, 6, t4, 14);
    t14 = (t0 + 4624);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1048575U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 19);
    t27 = (t0 + 4480);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_29_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 14);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 14);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 4688);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 4496);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_30_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 1048575U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 1048575U);
    t12 = (t0 + 4752);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1048575U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 19);
    t25 = (t0 + 4512);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_31_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 20);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 20);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 4816);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 4528);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_33_4(char *t0)
{
    char t6[8];
    char t8[8];
    char t11[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t7;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;

LAB0:    t1 = (t0 + 4160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4544);
    *((int *)t2) = 1;
    t3 = (t0 + 4192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 21);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 2, 2, 2U, t4, 1, t3, 1);

LAB6:    t2 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t7 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 21);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);
    t5 = (t0 + 1368U);
    t9 = *((char **)t5);
    t5 = (t0 + 1528U);
    t10 = *((char **)t5);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 20, t9, 20, t10, 20);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t8, 21, 21, 2U, t5, 1, t11, 20);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t8, 0, 0, 21);
    goto LAB17;

LAB9:    xsi_set_current_line(37, ng0);

LAB18:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB20;

LAB19:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB22;

LAB21:    *((unsigned int *)t8) = 1;

LAB22:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 20, t3, 20, t4, 20);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t8, 21, 21, 2U, t2, 1, t11, 20);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 21);

LAB26:    goto LAB17;

LAB11:    xsi_set_current_line(43, ng0);

LAB27:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB29;

LAB28:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB29;

LAB32:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB31;

LAB30:    *((unsigned int *)t8) = 1;

LAB31:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 20, t3, 20, t4, 20);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t8, 21, 21, 2U, t2, 1, t11, 20);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 21);

LAB35:    goto LAB17;

LAB13:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 20, t4, 20, t5, 20);
    t3 = ((char*)((ng2)));
    xsi_vlogtype_concat(t8, 21, 21, 2U, t3, 1, t11, 20);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 21);
    goto LAB17;

LAB20:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(39, ng0);
    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    t18 = (t0 + 1528U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 20, t19, 20, t20, 20);
    t18 = ((char*)((ng1)));
    xsi_vlogtype_concat(t11, 21, 21, 2U, t18, 1, t21, 20);
    t22 = (t0 + 2248);
    xsi_vlogvar_assign_value(t22, t11, 0, 0, 21);
    goto LAB26;

LAB29:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB31;

LAB33:    xsi_set_current_line(45, ng0);
    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    t18 = (t0 + 1368U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 20, t19, 20, t20, 20);
    t18 = ((char*)((ng1)));
    xsi_vlogtype_concat(t11, 21, 21, 2U, t18, 1, t21, 20);
    t22 = (t0 + 2248);
    xsi_vlogvar_assign_value(t22, t11, 0, 0, 21);
    goto LAB35;

}


extern void work_m_00000000001988820084_3763251543_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Cont_29_1,(void *)Cont_30_2,(void *)Cont_31_3,(void *)Always_33_4};
	xsi_register_didat("work_m_00000000001988820084_3763251543", "isim/NN_TB_isim_beh.exe.sim/work/m_00000000001988820084_3763251543.didat");
	xsi_register_executes(pe);
}
