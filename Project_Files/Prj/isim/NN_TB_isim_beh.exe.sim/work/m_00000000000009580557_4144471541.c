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
static const char *ng0 = "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {9U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {31U, 0U};



static void Always_63_0(char *t0)
{
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 8232);
    *((int *)t2) = 1;
    t3 = (t0 + 7200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 6248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 6088);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB29;

LAB9:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2488U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t3) != 0)
        goto LAB32;

LAB33:    t7 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t7);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB34;

LAB35:    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t7) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t12) > 0)
        goto LAB40;

LAB41:    memcpy(t11, t10, 8);

LAB42:    t25 = (t0 + 6088);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 4);
    goto LAB29;

LAB11:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB29;

LAB13:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2648U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t3) != 0)
        goto LAB45;

LAB46:    t7 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t7);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB47;

LAB48:    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t7) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t12) > 0)
        goto LAB53;

LAB54:    memcpy(t11, t10, 8);

LAB55:    t25 = (t0 + 6088);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 4);
    goto LAB29;

LAB15:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 6088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB29;

LAB17:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2648U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t3) != 0)
        goto LAB58;

LAB59:    t7 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t7);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB60;

LAB61:    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t7) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t12) > 0)
        goto LAB66;

LAB67:    memcpy(t11, t10, 8);

LAB68:    t25 = (t0 + 6088);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 4);
    goto LAB29;

LAB19:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 6088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB29;

LAB21:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 3288U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t3) != 0)
        goto LAB71;

LAB72:    t7 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t7);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB73;

LAB74:    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t7) > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t12) > 0)
        goto LAB79;

LAB80:    memcpy(t11, t10, 8);

LAB81:    t25 = (t0 + 6088);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 4);
    goto LAB29;

LAB23:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB29;

LAB25:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB29;

LAB30:    *((unsigned int *)t12) = 1;
    goto LAB33;

LAB32:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB33;

LAB34:    t9 = ((char*)((ng3)));
    goto LAB35;

LAB36:    t10 = ((char*)((ng4)));
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t11, 4, t9, 4, t10, 4);
    goto LAB42;

LAB40:    memcpy(t11, t9, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t12) = 1;
    goto LAB46;

LAB45:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB46;

LAB47:    t9 = ((char*)((ng6)));
    goto LAB48;

LAB49:    t10 = ((char*)((ng5)));
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t11, 4, t9, 4, t10, 4);
    goto LAB55;

LAB53:    memcpy(t11, t9, 8);
    goto LAB55;

LAB56:    *((unsigned int *)t12) = 1;
    goto LAB59;

LAB58:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB59;

LAB60:    t9 = ((char*)((ng8)));
    goto LAB61;

LAB62:    t10 = ((char*)((ng7)));
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t11, 4, t9, 4, t10, 4);
    goto LAB68;

LAB66:    memcpy(t11, t9, 8);
    goto LAB68;

LAB69:    *((unsigned int *)t12) = 1;
    goto LAB72;

LAB71:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB72;

LAB73:    t9 = ((char*)((ng10)));
    goto LAB74;

LAB75:    t10 = ((char*)((ng9)));
    goto LAB76;

LAB77:    xsi_vlog_unsigned_bit_combine(t11, 4, t9, 4, t10, 4);
    goto LAB81;

LAB79:    memcpy(t11, t9, 8);
    goto LAB81;

}

static void Always_79_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    int t17;

LAB0:    t1 = (t0 + 7416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 8248);
    *((int *)t2) = 1;
    t3 = (t0 + 7448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 5928);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 5768);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 5608);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 5448);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 5288);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 5128);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 4808);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    t11 = (t0 + 4648);
    xsi_vlogvar_assign_value(t11, t2, 8, 0, 1);
    t12 = (t0 + 4488);
    xsi_vlogvar_assign_value(t12, t2, 9, 0, 1);
    t13 = (t0 + 4328);
    xsi_vlogvar_assign_value(t13, t2, 10, 0, 1);
    t14 = (t0 + 4168);
    xsi_vlogvar_assign_value(t14, t2, 11, 0, 1);
    t15 = (t0 + 4008);
    xsi_vlogvar_assign_value(t15, t2, 12, 0, 1);
    t16 = (t0 + 3848);
    xsi_vlogvar_assign_value(t16, t2, 13, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t17 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t17 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t17 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t17 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t17 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t17 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t17 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(83, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 5288);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    t8 = (t0 + 4808);
    xsi_vlogvar_assign_value(t8, t6, 1, 0, 1);
    goto LAB27;

LAB9:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB27;

LAB11:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 5608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 4168);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    goto LAB27;

LAB13:    xsi_set_current_line(86, ng0);

LAB28:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 2968U);
    t5 = *((char **)t3);
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 32);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t5 = (t0 + 5448);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    goto LAB27;

LAB15:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 5608);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    goto LAB27;

LAB17:    xsi_set_current_line(91, ng0);

LAB29:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 2968U);
    t5 = *((char **)t3);
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t5 = (t0 + 5448);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t2, 2, 0, 1);
    goto LAB27;

LAB19:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    t7 = (t0 + 5928);
    xsi_vlogvar_assign_value(t7, t3, 2, 0, 1);
    t8 = (t0 + 5608);
    xsi_vlogvar_assign_value(t8, t3, 3, 0, 1);
    t9 = (t0 + 4168);
    xsi_vlogvar_assign_value(t9, t3, 4, 0, 1);
    goto LAB27;

LAB21:    xsi_set_current_line(96, ng0);

LAB30:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 3128U);
    t5 = *((char **)t3);
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t5 = (t0 + 4008);
    xsi_vlogvar_assign_value(t5, t2, 1, 0, 1);
    t6 = (t0 + 5768);
    xsi_vlogvar_assign_value(t6, t2, 2, 0, 1);
    goto LAB27;

LAB23:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t3, 1, 0, 1);
    goto LAB27;

LAB25:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4968);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB27;

}

static void Cont_105_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 7664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 8360);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 8264);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_108_3(char *t0)
{
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

LAB0:    t1 = (t0 + 7912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 8280);
    *((int *)t2) = 1;
    t3 = (t0 + 7944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);

LAB5:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(110, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

}


extern void work_m_00000000000009580557_4144471541_init()
{
	static char *pe[] = {(void *)Always_63_0,(void *)Always_79_1,(void *)Cont_105_2,(void *)Always_108_3};
	xsi_register_didat("work_m_00000000000009580557_4144471541", "isim/NN_TB_isim_beh.exe.sim/work/m_00000000000009580557_4144471541.didat");
	xsi_register_executes(pe);
}
