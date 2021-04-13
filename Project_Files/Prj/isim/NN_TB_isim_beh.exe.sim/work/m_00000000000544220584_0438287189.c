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
static const char *ng0 = "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/MAX_Func.v";
static unsigned int ng1[] = {0U, 0U};
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



static void Always_27_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB8;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB16;

LAB15:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB17;

LAB18:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB25;

LAB24:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB26;

LAB27:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB34;

LAB33:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB35;

LAB36:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB43;

LAB42:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB44;

LAB45:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB52;

LAB51:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB53;

LAB54:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB56;

LAB57:
LAB58:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB61;

LAB60:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB62;

LAB63:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB65;

LAB66:
LAB67:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB70;

LAB69:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB71;

LAB72:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB74;

LAB75:
LAB76:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB79;

LAB78:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB79;

LAB82:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB80;

LAB81:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB83;

LAB84:
LAB85:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB88;

LAB87:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB88;

LAB91:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB89;

LAB90:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB92;

LAB93:
LAB94:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(31, ng0);

LAB14:    xsi_set_current_line(32, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB13;

LAB16:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(36, ng0);

LAB23:    xsi_set_current_line(37, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB22;

LAB25:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t6) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(41, ng0);

LAB32:    xsi_set_current_line(42, ng0);
    t16 = ((char*)((ng4)));
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB31;

LAB34:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t6) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(45, ng0);

LAB41:    xsi_set_current_line(46, ng0);
    t16 = ((char*)((ng5)));
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB43:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(50, ng0);

LAB50:    xsi_set_current_line(51, ng0);
    t16 = ((char*)((ng6)));
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB49;

LAB52:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;
    goto LAB54;

LAB56:    xsi_set_current_line(55, ng0);

LAB59:    xsi_set_current_line(56, ng0);
    t16 = ((char*)((ng7)));
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB58;

LAB61:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t6) = 1;
    goto LAB63;

LAB65:    xsi_set_current_line(60, ng0);

LAB68:    xsi_set_current_line(61, ng0);
    t16 = ((char*)((ng8)));
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB67;

LAB70:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB72;

LAB71:    *((unsigned int *)t6) = 1;
    goto LAB72;

LAB74:    xsi_set_current_line(65, ng0);

LAB77:    xsi_set_current_line(66, ng0);
    t16 = ((char*)((ng9)));
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB76;

LAB79:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB81;

LAB80:    *((unsigned int *)t6) = 1;
    goto LAB81;

LAB83:    xsi_set_current_line(70, ng0);

LAB86:    xsi_set_current_line(71, ng0);
    t16 = ((char*)((ng10)));
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB85;

LAB88:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB90;

LAB89:    *((unsigned int *)t6) = 1;
    goto LAB90;

LAB92:    xsi_set_current_line(74, ng0);

LAB95:    xsi_set_current_line(75, ng0);
    t16 = ((char*)((ng11)));
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB94;

}


extern void work_m_00000000000544220584_0438287189_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000000544220584_0438287189", "isim/NN_TB_isim_beh.exe.sim/work/m_00000000000544220584_0438287189.didat");
	xsi_register_executes(pe);
}
