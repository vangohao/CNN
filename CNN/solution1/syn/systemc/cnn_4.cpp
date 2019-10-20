#include "cnn.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cnn::thread_CHin_op_op_fu_2361_p2() {
    CHin_op_op_fu_2361_p2 = (!CHin_reg_4454.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<32>(): (sc_bigint<32>(CHin_reg_4454.read()) + sc_biguint<32>(ap_const_lv32_3));
}

void cnn::thread_CHout_op_op_fu_2240_p2() {
    CHout_op_op_fu_2240_p2 = (!CHout_reg_4427.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<32>(): (sc_bigint<32>(CHout_reg_4427.read()) + sc_biguint<32>(ap_const_lv32_3));
}

void cnn::thread_C_out_fu_2119_p2() {
    C_out_fu_2119_p2 = (!grp_fu_2107_p2.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_fu_2107_p2.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void cnn::thread_In2_sum10_cast_fu_3508_p1() {
    In2_sum10_cast_fu_3508_p1 = esl_sext<64,33>(In2_sum10_fu_3503_p2.read());
}

void cnn::thread_In2_sum10_fu_3503_p2() {
    In2_sum10_fu_3503_p2 = (!tmp_32_2_1_cast_fu_3499_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_2_1_cast_fu_3499_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum11_cast_fu_3607_p1() {
    In2_sum11_cast_fu_3607_p1 = esl_sext<64,33>(In2_sum11_fu_3602_p2.read());
}

void cnn::thread_In2_sum11_fu_3602_p2() {
    In2_sum11_fu_3602_p2 = (!tmp_32_2_2_cast_fu_3598_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_2_2_cast_fu_3598_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum12_cast_fu_3728_p1() {
    In2_sum12_cast_fu_3728_p1 = esl_sext<64,33>(In2_sum12_fu_3723_p2.read());
}

void cnn::thread_In2_sum12_fu_3723_p2() {
    In2_sum12_fu_3723_p2 = (!tmp_32_2_3_cast_fu_3719_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_2_3_cast_fu_3719_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum13_cast_fu_3960_p1() {
    In2_sum13_cast_fu_3960_p1 = esl_sext<64,33>(In2_sum13_fu_3955_p2.read());
}

void cnn::thread_In2_sum13_fu_3955_p2() {
    In2_sum13_fu_3955_p2 = (!tmp_32_3_1_cast_fu_3951_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_3_1_cast_fu_3951_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum14_cast_fu_4059_p1() {
    In2_sum14_cast_fu_4059_p1 = esl_sext<64,33>(In2_sum14_fu_4054_p2.read());
}

void cnn::thread_In2_sum14_fu_4054_p2() {
    In2_sum14_fu_4054_p2 = (!tmp_32_3_2_cast_fu_4050_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_3_2_cast_fu_4050_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum15_cast_fu_4147_p1() {
    In2_sum15_cast_fu_4147_p1 = esl_sext<64,33>(In2_sum15_fu_4142_p2.read());
}

void cnn::thread_In2_sum15_fu_4142_p2() {
    In2_sum15_fu_4142_p2 = (!tmp_32_3_3_cast_fu_4138_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_3_3_cast_fu_4138_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum1_cast_fu_2501_p1() {
    In2_sum1_cast_fu_2501_p1 = esl_sext<64,33>(In2_sum1_fu_2496_p2.read());
}

void cnn::thread_In2_sum1_fu_2496_p2() {
    In2_sum1_fu_2496_p2 = (!tmp_32_cast_fu_2492_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_cast_fu_2492_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum2_cast_fu_2604_p1() {
    In2_sum2_cast_fu_2604_p1 = esl_sext<64,33>(In2_sum2_fu_2599_p2.read());
}

void cnn::thread_In2_sum2_fu_2599_p2() {
    In2_sum2_fu_2599_p2 = (!tmp_32_0_1_cast_fu_2595_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_0_1_cast_fu_2595_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum3_cast_fu_2703_p1() {
    In2_sum3_cast_fu_2703_p1 = esl_sext<64,33>(In2_sum3_fu_2698_p2.read());
}

void cnn::thread_In2_sum3_fu_2698_p2() {
    In2_sum3_fu_2698_p2 = (!tmp_32_0_2_cast_fu_2694_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_0_2_cast_fu_2694_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum4_cast_fu_2824_p1() {
    In2_sum4_cast_fu_2824_p1 = esl_sext<64,33>(In2_sum4_fu_2819_p2.read());
}

void cnn::thread_In2_sum4_fu_2819_p2() {
    In2_sum4_fu_2819_p2 = (!tmp_32_0_3_cast_fu_2815_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_0_3_cast_fu_2815_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum5_cast_fu_2953_p1() {
    In2_sum5_cast_fu_2953_p1 = esl_sext<64,33>(In2_sum5_fu_2948_p2.read());
}

void cnn::thread_In2_sum5_fu_2948_p2() {
    In2_sum5_fu_2948_p2 = (!tmp_32_1_cast_fu_2944_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_1_cast_fu_2944_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum6_cast_fu_3056_p1() {
    In2_sum6_cast_fu_3056_p1 = esl_sext<64,33>(In2_sum6_fu_3051_p2.read());
}

void cnn::thread_In2_sum6_fu_3051_p2() {
    In2_sum6_fu_3051_p2 = (!tmp_32_1_1_cast_fu_3047_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_1_1_cast_fu_3047_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum7_cast_fu_3155_p1() {
    In2_sum7_cast_fu_3155_p1 = esl_sext<64,33>(In2_sum7_fu_3150_p2.read());
}

void cnn::thread_In2_sum7_fu_3150_p2() {
    In2_sum7_fu_3150_p2 = (!tmp_32_1_2_cast_fu_3146_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_1_2_cast_fu_3146_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum8_cast_fu_3276_p1() {
    In2_sum8_cast_fu_3276_p1 = esl_sext<64,33>(In2_sum8_fu_3271_p2.read());
}

void cnn::thread_In2_sum8_fu_3271_p2() {
    In2_sum8_fu_3271_p2 = (!tmp_32_1_3_cast_fu_3267_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_1_3_cast_fu_3267_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum9_cast_fu_3405_p1() {
    In2_sum9_cast_fu_3405_p1 = esl_sext<64,33>(In2_sum9_fu_3400_p2.read());
}

void cnn::thread_In2_sum9_fu_3400_p2() {
    In2_sum9_fu_3400_p2 = (!tmp_32_2_cast_fu_3396_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_2_cast_fu_3396_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_In2_sum_cast_fu_3857_p1() {
    In2_sum_cast_fu_3857_p1 = esl_sext<64,33>(In2_sum_fu_3852_p2.read());
}

void cnn::thread_In2_sum_fu_3852_p2() {
    In2_sum_fu_3852_p2 = (!tmp_32_3_cast_fu_3848_p1.read().is_01() || !tmp_46_cast_reg_4248.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_32_3_cast_fu_3848_p1.read()) + sc_biguint<33>(tmp_46_cast_reg_4248.read()));
}

void cnn::thread_Out4_sum2_cast_fu_3323_p1() {
    Out4_sum2_cast_fu_3323_p1 = esl_sext<64,33>(Out4_sum2_fu_3318_p2.read());
}

void cnn::thread_Out4_sum2_fu_3318_p2() {
    Out4_sum2_fu_3318_p2 = (!tmp_18_2_cast_fu_3314_p1.read().is_01() || !tmp_45_cast_reg_4240.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_18_2_cast_fu_3314_p1.read()) + sc_biguint<33>(tmp_45_cast_reg_4240.read()));
}

void cnn::thread_Out4_sum3_cast_fu_3775_p1() {
    Out4_sum3_cast_fu_3775_p1 = esl_sext<64,33>(Out4_sum3_fu_3770_p2.read());
}

void cnn::thread_Out4_sum3_fu_3770_p2() {
    Out4_sum3_fu_3770_p2 = (!tmp_18_3_cast_fu_3766_p1.read().is_01() || !tmp_45_cast_reg_4240.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_18_3_cast_fu_3766_p1.read()) + sc_biguint<33>(tmp_45_cast_reg_4240.read()));
}

void cnn::thread_Out4_sum9_cast_fu_2871_p1() {
    Out4_sum9_cast_fu_2871_p1 = esl_sext<64,33>(Out4_sum9_fu_2866_p2.read());
}

void cnn::thread_Out4_sum9_fu_2866_p2() {
    Out4_sum9_fu_2866_p2 = (!tmp_18_1_cast_fu_2862_p1.read().is_01() || !tmp_45_cast_reg_4240.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_18_1_cast_fu_2862_p1.read()) + sc_biguint<33>(tmp_45_cast_reg_4240.read()));
}

void cnn::thread_Out4_sum_cast_fu_2344_p1() {
    Out4_sum_cast_fu_2344_p1 = esl_sext<64,33>(Out4_sum_fu_2339_p2.read());
}

void cnn::thread_Out4_sum_fu_2339_p2() {
    Out4_sum_fu_2339_p2 = (!tmp_18_cast_fu_2335_p1.read().is_01() || !tmp_45_cast_reg_4240.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_18_cast_fu_2335_p1.read()) + sc_biguint<33>(tmp_45_cast_reg_4240.read()));
}

void cnn::thread_R_out_fu_2113_p2() {
    R_out_fu_2113_p2 = (!grp_fu_2097_p2.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_fu_2097_p2.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void cnn::thread_W6_sum10_cast_fu_3481_p1() {
    W6_sum10_cast_fu_3481_p1 = esl_sext<64,33>(W6_sum10_fu_3476_p2.read());
}

void cnn::thread_W6_sum10_fu_3476_p2() {
    W6_sum10_fu_3476_p2 = (!tmp_25_2_1_cast_fu_3472_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_2_1_cast_fu_3472_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum11_cast_fu_3580_p1() {
    W6_sum11_cast_fu_3580_p1 = esl_sext<64,33>(W6_sum11_fu_3575_p2.read());
}

void cnn::thread_W6_sum11_fu_3575_p2() {
    W6_sum11_fu_3575_p2 = (!tmp_25_2_2_cast_fu_3571_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_2_2_cast_fu_3571_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum12_cast_fu_3933_p1() {
    W6_sum12_cast_fu_3933_p1 = esl_sext<64,33>(W6_sum12_fu_3928_p2.read());
}

void cnn::thread_W6_sum12_fu_3928_p2() {
    W6_sum12_fu_3928_p2 = (!tmp_25_3_1_cast_fu_3924_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_3_1_cast_fu_3924_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum13_cast_fu_3701_p1() {
    W6_sum13_cast_fu_3701_p1 = esl_sext<64,33>(W6_sum13_fu_3696_p2.read());
}

void cnn::thread_W6_sum13_fu_3696_p2() {
    W6_sum13_fu_3696_p2 = (!tmp_25_2_3_cast_fu_3692_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_2_3_cast_fu_3692_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum14_cast_fu_4032_p1() {
    W6_sum14_cast_fu_4032_p1 = esl_sext<64,33>(W6_sum14_fu_4027_p2.read());
}

void cnn::thread_W6_sum14_fu_4027_p2() {
    W6_sum14_fu_4027_p2 = (!tmp_25_3_2_cast_fu_4023_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_3_2_cast_fu_4023_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum15_cast_fu_4171_p1() {
    W6_sum15_cast_fu_4171_p1 = esl_sext<64,33>(W6_sum15_fu_4166_p2.read());
}

void cnn::thread_W6_sum15_fu_4166_p2() {
    W6_sum15_fu_4166_p2 = (!tmp_25_3_3_cast_fu_4162_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_3_3_cast_fu_4162_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum1_cast_fu_2474_p1() {
    W6_sum1_cast_fu_2474_p1 = esl_sext<64,33>(W6_sum1_fu_2469_p2.read());
}

void cnn::thread_W6_sum1_fu_2469_p2() {
    W6_sum1_fu_2469_p2 = (!tmp_41_cast_fu_2465_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_41_cast_fu_2465_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum2_cast_fu_2577_p1() {
    W6_sum2_cast_fu_2577_p1 = esl_sext<64,33>(W6_sum2_fu_2572_p2.read());
}

void cnn::thread_W6_sum2_fu_2572_p2() {
    W6_sum2_fu_2572_p2 = (!tmp_25_0_1_cast_fu_2568_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_0_1_cast_fu_2568_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum3_cast_fu_2676_p1() {
    W6_sum3_cast_fu_2676_p1 = esl_sext<64,33>(W6_sum3_fu_2671_p2.read());
}

void cnn::thread_W6_sum3_fu_2671_p2() {
    W6_sum3_fu_2671_p2 = (!tmp_25_0_2_cast_fu_2667_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_0_2_cast_fu_2667_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum4_cast_fu_2797_p1() {
    W6_sum4_cast_fu_2797_p1 = esl_sext<64,33>(W6_sum4_fu_2792_p2.read());
}

void cnn::thread_W6_sum4_fu_2792_p2() {
    W6_sum4_fu_2792_p2 = (!tmp_25_0_3_cast_fu_2788_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_0_3_cast_fu_2788_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum5_cast_fu_2926_p1() {
    W6_sum5_cast_fu_2926_p1 = esl_sext<64,33>(W6_sum5_fu_2921_p2.read());
}

void cnn::thread_W6_sum5_fu_2921_p2() {
    W6_sum5_fu_2921_p2 = (!tmp_25_1_cast_fu_2917_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_1_cast_fu_2917_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum6_cast_fu_3029_p1() {
    W6_sum6_cast_fu_3029_p1 = esl_sext<64,33>(W6_sum6_fu_3024_p2.read());
}

void cnn::thread_W6_sum6_fu_3024_p2() {
    W6_sum6_fu_3024_p2 = (!tmp_25_1_1_cast_fu_3020_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_1_1_cast_fu_3020_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum7_cast_fu_3128_p1() {
    W6_sum7_cast_fu_3128_p1 = esl_sext<64,33>(W6_sum7_fu_3123_p2.read());
}

void cnn::thread_W6_sum7_fu_3123_p2() {
    W6_sum7_fu_3123_p2 = (!tmp_25_1_2_cast_fu_3119_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_1_2_cast_fu_3119_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum8_cast_fu_3249_p1() {
    W6_sum8_cast_fu_3249_p1 = esl_sext<64,33>(W6_sum8_fu_3244_p2.read());
}

void cnn::thread_W6_sum8_fu_3244_p2() {
    W6_sum8_fu_3244_p2 = (!tmp_25_1_3_cast_fu_3240_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_1_3_cast_fu_3240_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum9_cast_fu_3378_p1() {
    W6_sum9_cast_fu_3378_p1 = esl_sext<64,33>(W6_sum9_fu_3373_p2.read());
}

void cnn::thread_W6_sum9_fu_3373_p2() {
    W6_sum9_fu_3373_p2 = (!tmp_25_2_cast_fu_3369_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_2_cast_fu_3369_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_W6_sum_cast_fu_3830_p1() {
    W6_sum_cast_fu_3830_p1 = esl_sext<64,33>(W6_sum_fu_3825_p2.read());
}

void cnn::thread_W6_sum_fu_3825_p2() {
    W6_sum_fu_3825_p2 = (!tmp_25_3_cast_fu_3821_p1.read().is_01() || !tmp_44_cast_reg_4220.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_25_3_cast_fu_3821_p1.read()) + sc_biguint<33>(tmp_44_cast_reg_4220.read()));
}

void cnn::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[8];
}

void cnn::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[51];
}

void cnn::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void cnn::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[96];
}

void cnn::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[97];
}

void cnn::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[98];
}

void cnn::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[99];
}

void cnn::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[100];
}

void cnn::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[101];
}

void cnn::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[107];
}

void cnn::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[108];
}

void cnn::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[109];
}

void cnn::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[112];
}

void cnn::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[113];
}

void cnn::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[9];
}

void cnn::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[117];
}

void cnn::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[118];
}

void cnn::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[123];
}

void cnn::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[124];
}

void cnn::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[125];
}

void cnn::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[10];
}

void cnn::thread_ap_CS_fsm_state130() {
    ap_CS_fsm_state130 = ap_CS_fsm.read()[126];
}

void cnn::thread_ap_CS_fsm_state131() {
    ap_CS_fsm_state131 = ap_CS_fsm.read()[127];
}

void cnn::thread_ap_CS_fsm_state132() {
    ap_CS_fsm_state132 = ap_CS_fsm.read()[128];
}

void cnn::thread_ap_CS_fsm_state133() {
    ap_CS_fsm_state133 = ap_CS_fsm.read()[129];
}

void cnn::thread_ap_CS_fsm_state139() {
    ap_CS_fsm_state139 = ap_CS_fsm.read()[135];
}

void cnn::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[11];
}

void cnn::thread_ap_CS_fsm_state140() {
    ap_CS_fsm_state140 = ap_CS_fsm.read()[136];
}

void cnn::thread_ap_CS_fsm_state141() {
    ap_CS_fsm_state141 = ap_CS_fsm.read()[137];
}

void cnn::thread_ap_CS_fsm_state144() {
    ap_CS_fsm_state144 = ap_CS_fsm.read()[140];
}

void cnn::thread_ap_CS_fsm_state145() {
    ap_CS_fsm_state145 = ap_CS_fsm.read()[141];
}

void cnn::thread_ap_CS_fsm_state149() {
    ap_CS_fsm_state149 = ap_CS_fsm.read()[145];
}

void cnn::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[12];
}

void cnn::thread_ap_CS_fsm_state150() {
    ap_CS_fsm_state150 = ap_CS_fsm.read()[146];
}

void cnn::thread_ap_CS_fsm_state155() {
    ap_CS_fsm_state155 = ap_CS_fsm.read()[151];
}

void cnn::thread_ap_CS_fsm_state156() {
    ap_CS_fsm_state156 = ap_CS_fsm.read()[152];
}

void cnn::thread_ap_CS_fsm_state157() {
    ap_CS_fsm_state157 = ap_CS_fsm.read()[153];
}

void cnn::thread_ap_CS_fsm_state158() {
    ap_CS_fsm_state158 = ap_CS_fsm.read()[154];
}

void cnn::thread_ap_CS_fsm_state159() {
    ap_CS_fsm_state159 = ap_CS_fsm.read()[155];
}

void cnn::thread_ap_CS_fsm_state160() {
    ap_CS_fsm_state160 = ap_CS_fsm.read()[156];
}

void cnn::thread_ap_CS_fsm_state161() {
    ap_CS_fsm_state161 = ap_CS_fsm.read()[157];
}

void cnn::thread_ap_CS_fsm_state167() {
    ap_CS_fsm_state167 = ap_CS_fsm.read()[163];
}

void cnn::thread_ap_CS_fsm_state168() {
    ap_CS_fsm_state168 = ap_CS_fsm.read()[164];
}

void cnn::thread_ap_CS_fsm_state169() {
    ap_CS_fsm_state169 = ap_CS_fsm.read()[165];
}

void cnn::thread_ap_CS_fsm_state172() {
    ap_CS_fsm_state172 = ap_CS_fsm.read()[168];
}

void cnn::thread_ap_CS_fsm_state173() {
    ap_CS_fsm_state173 = ap_CS_fsm.read()[169];
}

void cnn::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[173];
}

void cnn::thread_ap_CS_fsm_state178() {
    ap_CS_fsm_state178 = ap_CS_fsm.read()[174];
}

void cnn::thread_ap_CS_fsm_state183() {
    ap_CS_fsm_state183 = ap_CS_fsm.read()[179];
}

void cnn::thread_ap_CS_fsm_state184() {
    ap_CS_fsm_state184 = ap_CS_fsm.read()[180];
}

void cnn::thread_ap_CS_fsm_state185() {
    ap_CS_fsm_state185 = ap_CS_fsm.read()[181];
}

void cnn::thread_ap_CS_fsm_state186() {
    ap_CS_fsm_state186 = ap_CS_fsm.read()[182];
}

void cnn::thread_ap_CS_fsm_state187() {
    ap_CS_fsm_state187 = ap_CS_fsm.read()[183];
}

void cnn::thread_ap_CS_fsm_state188() {
    ap_CS_fsm_state188 = ap_CS_fsm.read()[184];
}

void cnn::thread_ap_CS_fsm_state189() {
    ap_CS_fsm_state189 = ap_CS_fsm.read()[185];
}

void cnn::thread_ap_CS_fsm_state190() {
    ap_CS_fsm_state190 = ap_CS_fsm.read()[186];
}

void cnn::thread_ap_CS_fsm_state191() {
    ap_CS_fsm_state191 = ap_CS_fsm.read()[187];
}

void cnn::thread_ap_CS_fsm_state192() {
    ap_CS_fsm_state192 = ap_CS_fsm.read()[188];
}

void cnn::thread_ap_CS_fsm_state193() {
    ap_CS_fsm_state193 = ap_CS_fsm.read()[189];
}

void cnn::thread_ap_CS_fsm_state197() {
    ap_CS_fsm_state197 = ap_CS_fsm.read()[193];
}

void cnn::thread_ap_CS_fsm_state199() {
    ap_CS_fsm_state199 = ap_CS_fsm.read()[195];
}

void cnn::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void cnn::thread_ap_CS_fsm_state200() {
    ap_CS_fsm_state200 = ap_CS_fsm.read()[196];
}

void cnn::thread_ap_CS_fsm_state201() {
    ap_CS_fsm_state201 = ap_CS_fsm.read()[197];
}

void cnn::thread_ap_CS_fsm_state202() {
    ap_CS_fsm_state202 = ap_CS_fsm.read()[198];
}

void cnn::thread_ap_CS_fsm_state203() {
    ap_CS_fsm_state203 = ap_CS_fsm.read()[199];
}

void cnn::thread_ap_CS_fsm_state204() {
    ap_CS_fsm_state204 = ap_CS_fsm.read()[200];
}

void cnn::thread_ap_CS_fsm_state205() {
    ap_CS_fsm_state205 = ap_CS_fsm.read()[201];
}

void cnn::thread_ap_CS_fsm_state206() {
    ap_CS_fsm_state206 = ap_CS_fsm.read()[202];
}

void cnn::thread_ap_CS_fsm_state207() {
    ap_CS_fsm_state207 = ap_CS_fsm.read()[203];
}

void cnn::thread_ap_CS_fsm_state208() {
    ap_CS_fsm_state208 = ap_CS_fsm.read()[204];
}

void cnn::thread_ap_CS_fsm_state209() {
    ap_CS_fsm_state209 = ap_CS_fsm.read()[205];
}

void cnn::thread_ap_CS_fsm_state210() {
    ap_CS_fsm_state210 = ap_CS_fsm.read()[206];
}

void cnn::thread_ap_CS_fsm_state215() {
    ap_CS_fsm_state215 = ap_CS_fsm.read()[211];
}

void cnn::thread_ap_CS_fsm_state216() {
    ap_CS_fsm_state216 = ap_CS_fsm.read()[212];
}

void cnn::thread_ap_CS_fsm_state217() {
    ap_CS_fsm_state217 = ap_CS_fsm.read()[213];
}

void cnn::thread_ap_CS_fsm_state218() {
    ap_CS_fsm_state218 = ap_CS_fsm.read()[214];
}

void cnn::thread_ap_CS_fsm_state219() {
    ap_CS_fsm_state219 = ap_CS_fsm.read()[215];
}

void cnn::thread_ap_CS_fsm_state220() {
    ap_CS_fsm_state220 = ap_CS_fsm.read()[216];
}

void cnn::thread_ap_CS_fsm_state221() {
    ap_CS_fsm_state221 = ap_CS_fsm.read()[217];
}

void cnn::thread_ap_CS_fsm_state227() {
    ap_CS_fsm_state227 = ap_CS_fsm.read()[223];
}

void cnn::thread_ap_CS_fsm_state228() {
    ap_CS_fsm_state228 = ap_CS_fsm.read()[224];
}

void cnn::thread_ap_CS_fsm_state229() {
    ap_CS_fsm_state229 = ap_CS_fsm.read()[225];
}

void cnn::thread_ap_CS_fsm_state232() {
    ap_CS_fsm_state232 = ap_CS_fsm.read()[228];
}

void cnn::thread_ap_CS_fsm_state233() {
    ap_CS_fsm_state233 = ap_CS_fsm.read()[229];
}

void cnn::thread_ap_CS_fsm_state237() {
    ap_CS_fsm_state237 = ap_CS_fsm.read()[233];
}

void cnn::thread_ap_CS_fsm_state238() {
    ap_CS_fsm_state238 = ap_CS_fsm.read()[234];
}

void cnn::thread_ap_CS_fsm_state243() {
    ap_CS_fsm_state243 = ap_CS_fsm.read()[239];
}

void cnn::thread_ap_CS_fsm_state244() {
    ap_CS_fsm_state244 = ap_CS_fsm.read()[240];
}

void cnn::thread_ap_CS_fsm_state245() {
    ap_CS_fsm_state245 = ap_CS_fsm.read()[241];
}

void cnn::thread_ap_CS_fsm_state246() {
    ap_CS_fsm_state246 = ap_CS_fsm.read()[242];
}

void cnn::thread_ap_CS_fsm_state247() {
    ap_CS_fsm_state247 = ap_CS_fsm.read()[243];
}

void cnn::thread_ap_CS_fsm_state248() {
    ap_CS_fsm_state248 = ap_CS_fsm.read()[244];
}

void cnn::thread_ap_CS_fsm_state249() {
    ap_CS_fsm_state249 = ap_CS_fsm.read()[245];
}

void cnn::thread_ap_CS_fsm_state255() {
    ap_CS_fsm_state255 = ap_CS_fsm.read()[251];
}

void cnn::thread_ap_CS_fsm_state256() {
    ap_CS_fsm_state256 = ap_CS_fsm.read()[252];
}

void cnn::thread_ap_CS_fsm_state257() {
    ap_CS_fsm_state257 = ap_CS_fsm.read()[253];
}

void cnn::thread_ap_CS_fsm_state260() {
    ap_CS_fsm_state260 = ap_CS_fsm.read()[256];
}

void cnn::thread_ap_CS_fsm_state261() {
    ap_CS_fsm_state261 = ap_CS_fsm.read()[257];
}

void cnn::thread_ap_CS_fsm_state265() {
    ap_CS_fsm_state265 = ap_CS_fsm.read()[261];
}

void cnn::thread_ap_CS_fsm_state266() {
    ap_CS_fsm_state266 = ap_CS_fsm.read()[262];
}

void cnn::thread_ap_CS_fsm_state271() {
    ap_CS_fsm_state271 = ap_CS_fsm.read()[267];
}

void cnn::thread_ap_CS_fsm_state272() {
    ap_CS_fsm_state272 = ap_CS_fsm.read()[268];
}

void cnn::thread_ap_CS_fsm_state273() {
    ap_CS_fsm_state273 = ap_CS_fsm.read()[269];
}

void cnn::thread_ap_CS_fsm_state274() {
    ap_CS_fsm_state274 = ap_CS_fsm.read()[270];
}

void cnn::thread_ap_CS_fsm_state275() {
    ap_CS_fsm_state275 = ap_CS_fsm.read()[271];
}

void cnn::thread_ap_CS_fsm_state276() {
    ap_CS_fsm_state276 = ap_CS_fsm.read()[272];
}

void cnn::thread_ap_CS_fsm_state277() {
    ap_CS_fsm_state277 = ap_CS_fsm.read()[273];
}

void cnn::thread_ap_CS_fsm_state283() {
    ap_CS_fsm_state283 = ap_CS_fsm.read()[279];
}

void cnn::thread_ap_CS_fsm_state284() {
    ap_CS_fsm_state284 = ap_CS_fsm.read()[280];
}

void cnn::thread_ap_CS_fsm_state285() {
    ap_CS_fsm_state285 = ap_CS_fsm.read()[281];
}

void cnn::thread_ap_CS_fsm_state288() {
    ap_CS_fsm_state288 = ap_CS_fsm.read()[284];
}

void cnn::thread_ap_CS_fsm_state289() {
    ap_CS_fsm_state289 = ap_CS_fsm.read()[285];
}

void cnn::thread_ap_CS_fsm_state293() {
    ap_CS_fsm_state293 = ap_CS_fsm.read()[289];
}

void cnn::thread_ap_CS_fsm_state294() {
    ap_CS_fsm_state294 = ap_CS_fsm.read()[290];
}

void cnn::thread_ap_CS_fsm_state299() {
    ap_CS_fsm_state299 = ap_CS_fsm.read()[295];
}

void cnn::thread_ap_CS_fsm_state300() {
    ap_CS_fsm_state300 = ap_CS_fsm.read()[296];
}

void cnn::thread_ap_CS_fsm_state301() {
    ap_CS_fsm_state301 = ap_CS_fsm.read()[297];
}

void cnn::thread_ap_CS_fsm_state302() {
    ap_CS_fsm_state302 = ap_CS_fsm.read()[298];
}

void cnn::thread_ap_CS_fsm_state303() {
    ap_CS_fsm_state303 = ap_CS_fsm.read()[299];
}

void cnn::thread_ap_CS_fsm_state304() {
    ap_CS_fsm_state304 = ap_CS_fsm.read()[300];
}

void cnn::thread_ap_CS_fsm_state305() {
    ap_CS_fsm_state305 = ap_CS_fsm.read()[301];
}

void cnn::thread_ap_CS_fsm_state306() {
    ap_CS_fsm_state306 = ap_CS_fsm.read()[302];
}

void cnn::thread_ap_CS_fsm_state307() {
    ap_CS_fsm_state307 = ap_CS_fsm.read()[303];
}

void cnn::thread_ap_CS_fsm_state308() {
    ap_CS_fsm_state308 = ap_CS_fsm.read()[304];
}

void cnn::thread_ap_CS_fsm_state309() {
    ap_CS_fsm_state309 = ap_CS_fsm.read()[305];
}

void cnn::thread_ap_CS_fsm_state313() {
    ap_CS_fsm_state313 = ap_CS_fsm.read()[309];
}

void cnn::thread_ap_CS_fsm_state315() {
    ap_CS_fsm_state315 = ap_CS_fsm.read()[311];
}

void cnn::thread_ap_CS_fsm_state316() {
    ap_CS_fsm_state316 = ap_CS_fsm.read()[312];
}

void cnn::thread_ap_CS_fsm_state317() {
    ap_CS_fsm_state317 = ap_CS_fsm.read()[313];
}

void cnn::thread_ap_CS_fsm_state318() {
    ap_CS_fsm_state318 = ap_CS_fsm.read()[314];
}

void cnn::thread_ap_CS_fsm_state319() {
    ap_CS_fsm_state319 = ap_CS_fsm.read()[315];
}

void cnn::thread_ap_CS_fsm_state320() {
    ap_CS_fsm_state320 = ap_CS_fsm.read()[316];
}

void cnn::thread_ap_CS_fsm_state321() {
    ap_CS_fsm_state321 = ap_CS_fsm.read()[317];
}

void cnn::thread_ap_CS_fsm_state322() {
    ap_CS_fsm_state322 = ap_CS_fsm.read()[318];
}

void cnn::thread_ap_CS_fsm_state323() {
    ap_CS_fsm_state323 = ap_CS_fsm.read()[319];
}

void cnn::thread_ap_CS_fsm_state324() {
    ap_CS_fsm_state324 = ap_CS_fsm.read()[320];
}

void cnn::thread_ap_CS_fsm_state325() {
    ap_CS_fsm_state325 = ap_CS_fsm.read()[321];
}

void cnn::thread_ap_CS_fsm_state326() {
    ap_CS_fsm_state326 = ap_CS_fsm.read()[322];
}

void cnn::thread_ap_CS_fsm_state331() {
    ap_CS_fsm_state331 = ap_CS_fsm.read()[327];
}

void cnn::thread_ap_CS_fsm_state332() {
    ap_CS_fsm_state332 = ap_CS_fsm.read()[328];
}

void cnn::thread_ap_CS_fsm_state333() {
    ap_CS_fsm_state333 = ap_CS_fsm.read()[329];
}

void cnn::thread_ap_CS_fsm_state334() {
    ap_CS_fsm_state334 = ap_CS_fsm.read()[330];
}

void cnn::thread_ap_CS_fsm_state335() {
    ap_CS_fsm_state335 = ap_CS_fsm.read()[331];
}

void cnn::thread_ap_CS_fsm_state336() {
    ap_CS_fsm_state336 = ap_CS_fsm.read()[332];
}

void cnn::thread_ap_CS_fsm_state337() {
    ap_CS_fsm_state337 = ap_CS_fsm.read()[333];
}

void cnn::thread_ap_CS_fsm_state343() {
    ap_CS_fsm_state343 = ap_CS_fsm.read()[339];
}

void cnn::thread_ap_CS_fsm_state344() {
    ap_CS_fsm_state344 = ap_CS_fsm.read()[340];
}

void cnn::thread_ap_CS_fsm_state345() {
    ap_CS_fsm_state345 = ap_CS_fsm.read()[341];
}

void cnn::thread_ap_CS_fsm_state348() {
    ap_CS_fsm_state348 = ap_CS_fsm.read()[344];
}

void cnn::thread_ap_CS_fsm_state349() {
    ap_CS_fsm_state349 = ap_CS_fsm.read()[345];
}

void cnn::thread_ap_CS_fsm_state353() {
    ap_CS_fsm_state353 = ap_CS_fsm.read()[349];
}

void cnn::thread_ap_CS_fsm_state354() {
    ap_CS_fsm_state354 = ap_CS_fsm.read()[350];
}

void cnn::thread_ap_CS_fsm_state359() {
    ap_CS_fsm_state359 = ap_CS_fsm.read()[355];
}

void cnn::thread_ap_CS_fsm_state360() {
    ap_CS_fsm_state360 = ap_CS_fsm.read()[356];
}

void cnn::thread_ap_CS_fsm_state361() {
    ap_CS_fsm_state361 = ap_CS_fsm.read()[357];
}

void cnn::thread_ap_CS_fsm_state362() {
    ap_CS_fsm_state362 = ap_CS_fsm.read()[358];
}

void cnn::thread_ap_CS_fsm_state363() {
    ap_CS_fsm_state363 = ap_CS_fsm.read()[359];
}

void cnn::thread_ap_CS_fsm_state364() {
    ap_CS_fsm_state364 = ap_CS_fsm.read()[360];
}

void cnn::thread_ap_CS_fsm_state365() {
    ap_CS_fsm_state365 = ap_CS_fsm.read()[361];
}

void cnn::thread_ap_CS_fsm_state371() {
    ap_CS_fsm_state371 = ap_CS_fsm.read()[367];
}

void cnn::thread_ap_CS_fsm_state372() {
    ap_CS_fsm_state372 = ap_CS_fsm.read()[368];
}

void cnn::thread_ap_CS_fsm_state373() {
    ap_CS_fsm_state373 = ap_CS_fsm.read()[369];
}

void cnn::thread_ap_CS_fsm_state376() {
    ap_CS_fsm_state376 = ap_CS_fsm.read()[372];
}

void cnn::thread_ap_CS_fsm_state377() {
    ap_CS_fsm_state377 = ap_CS_fsm.read()[373];
}

void cnn::thread_ap_CS_fsm_state381() {
    ap_CS_fsm_state381 = ap_CS_fsm.read()[377];
}

void cnn::thread_ap_CS_fsm_state382() {
    ap_CS_fsm_state382 = ap_CS_fsm.read()[378];
}

void cnn::thread_ap_CS_fsm_state387() {
    ap_CS_fsm_state387 = ap_CS_fsm.read()[383];
}

void cnn::thread_ap_CS_fsm_state388() {
    ap_CS_fsm_state388 = ap_CS_fsm.read()[384];
}

void cnn::thread_ap_CS_fsm_state389() {
    ap_CS_fsm_state389 = ap_CS_fsm.read()[385];
}

void cnn::thread_ap_CS_fsm_state390() {
    ap_CS_fsm_state390 = ap_CS_fsm.read()[386];
}

void cnn::thread_ap_CS_fsm_state391() {
    ap_CS_fsm_state391 = ap_CS_fsm.read()[387];
}

void cnn::thread_ap_CS_fsm_state392() {
    ap_CS_fsm_state392 = ap_CS_fsm.read()[388];
}

void cnn::thread_ap_CS_fsm_state393() {
    ap_CS_fsm_state393 = ap_CS_fsm.read()[389];
}

void cnn::thread_ap_CS_fsm_state399() {
    ap_CS_fsm_state399 = ap_CS_fsm.read()[395];
}

void cnn::thread_ap_CS_fsm_state400() {
    ap_CS_fsm_state400 = ap_CS_fsm.read()[396];
}

void cnn::thread_ap_CS_fsm_state401() {
    ap_CS_fsm_state401 = ap_CS_fsm.read()[397];
}

void cnn::thread_ap_CS_fsm_state404() {
    ap_CS_fsm_state404 = ap_CS_fsm.read()[400];
}

void cnn::thread_ap_CS_fsm_state405() {
    ap_CS_fsm_state405 = ap_CS_fsm.read()[401];
}

void cnn::thread_ap_CS_fsm_state409() {
    ap_CS_fsm_state409 = ap_CS_fsm.read()[405];
}

void cnn::thread_ap_CS_fsm_state410() {
    ap_CS_fsm_state410 = ap_CS_fsm.read()[406];
}

void cnn::thread_ap_CS_fsm_state415() {
    ap_CS_fsm_state415 = ap_CS_fsm.read()[411];
}

void cnn::thread_ap_CS_fsm_state416() {
    ap_CS_fsm_state416 = ap_CS_fsm.read()[412];
}

void cnn::thread_ap_CS_fsm_state417() {
    ap_CS_fsm_state417 = ap_CS_fsm.read()[413];
}

void cnn::thread_ap_CS_fsm_state418() {
    ap_CS_fsm_state418 = ap_CS_fsm.read()[414];
}

void cnn::thread_ap_CS_fsm_state419() {
    ap_CS_fsm_state419 = ap_CS_fsm.read()[415];
}

void cnn::thread_ap_CS_fsm_state420() {
    ap_CS_fsm_state420 = ap_CS_fsm.read()[416];
}

void cnn::thread_ap_CS_fsm_state421() {
    ap_CS_fsm_state421 = ap_CS_fsm.read()[417];
}

void cnn::thread_ap_CS_fsm_state422() {
    ap_CS_fsm_state422 = ap_CS_fsm.read()[418];
}

void cnn::thread_ap_CS_fsm_state423() {
    ap_CS_fsm_state423 = ap_CS_fsm.read()[419];
}

void cnn::thread_ap_CS_fsm_state424() {
    ap_CS_fsm_state424 = ap_CS_fsm.read()[420];
}

void cnn::thread_ap_CS_fsm_state425() {
    ap_CS_fsm_state425 = ap_CS_fsm.read()[421];
}

void cnn::thread_ap_CS_fsm_state429() {
    ap_CS_fsm_state429 = ap_CS_fsm.read()[425];
}

void cnn::thread_ap_CS_fsm_state431() {
    ap_CS_fsm_state431 = ap_CS_fsm.read()[427];
}

void cnn::thread_ap_CS_fsm_state432() {
    ap_CS_fsm_state432 = ap_CS_fsm.read()[428];
}

void cnn::thread_ap_CS_fsm_state433() {
    ap_CS_fsm_state433 = ap_CS_fsm.read()[429];
}

void cnn::thread_ap_CS_fsm_state434() {
    ap_CS_fsm_state434 = ap_CS_fsm.read()[430];
}

void cnn::thread_ap_CS_fsm_state435() {
    ap_CS_fsm_state435 = ap_CS_fsm.read()[431];
}

void cnn::thread_ap_CS_fsm_state436() {
    ap_CS_fsm_state436 = ap_CS_fsm.read()[432];
}

void cnn::thread_ap_CS_fsm_state437() {
    ap_CS_fsm_state437 = ap_CS_fsm.read()[433];
}

void cnn::thread_ap_CS_fsm_state438() {
    ap_CS_fsm_state438 = ap_CS_fsm.read()[434];
}

void cnn::thread_ap_CS_fsm_state439() {
    ap_CS_fsm_state439 = ap_CS_fsm.read()[435];
}

void cnn::thread_ap_CS_fsm_state440() {
    ap_CS_fsm_state440 = ap_CS_fsm.read()[436];
}

void cnn::thread_ap_CS_fsm_state441() {
    ap_CS_fsm_state441 = ap_CS_fsm.read()[437];
}

void cnn::thread_ap_CS_fsm_state442() {
    ap_CS_fsm_state442 = ap_CS_fsm.read()[438];
}

void cnn::thread_ap_CS_fsm_state447() {
    ap_CS_fsm_state447 = ap_CS_fsm.read()[443];
}

void cnn::thread_ap_CS_fsm_state448() {
    ap_CS_fsm_state448 = ap_CS_fsm.read()[444];
}

void cnn::thread_ap_CS_fsm_state449() {
    ap_CS_fsm_state449 = ap_CS_fsm.read()[445];
}

void cnn::thread_ap_CS_fsm_state450() {
    ap_CS_fsm_state450 = ap_CS_fsm.read()[446];
}

void cnn::thread_ap_CS_fsm_state451() {
    ap_CS_fsm_state451 = ap_CS_fsm.read()[447];
}

void cnn::thread_ap_CS_fsm_state452() {
    ap_CS_fsm_state452 = ap_CS_fsm.read()[448];
}

void cnn::thread_ap_CS_fsm_state453() {
    ap_CS_fsm_state453 = ap_CS_fsm.read()[449];
}

void cnn::thread_ap_CS_fsm_state459() {
    ap_CS_fsm_state459 = ap_CS_fsm.read()[455];
}

void cnn::thread_ap_CS_fsm_state460() {
    ap_CS_fsm_state460 = ap_CS_fsm.read()[456];
}

void cnn::thread_ap_CS_fsm_state461() {
    ap_CS_fsm_state461 = ap_CS_fsm.read()[457];
}

void cnn::thread_ap_CS_fsm_state464() {
    ap_CS_fsm_state464 = ap_CS_fsm.read()[460];
}

void cnn::thread_ap_CS_fsm_state465() {
    ap_CS_fsm_state465 = ap_CS_fsm.read()[461];
}

void cnn::thread_ap_CS_fsm_state469() {
    ap_CS_fsm_state469 = ap_CS_fsm.read()[465];
}

void cnn::thread_ap_CS_fsm_state470() {
    ap_CS_fsm_state470 = ap_CS_fsm.read()[466];
}

void cnn::thread_ap_CS_fsm_state475() {
    ap_CS_fsm_state475 = ap_CS_fsm.read()[471];
}

void cnn::thread_ap_CS_fsm_state476() {
    ap_CS_fsm_state476 = ap_CS_fsm.read()[472];
}

void cnn::thread_ap_CS_fsm_state477() {
    ap_CS_fsm_state477 = ap_CS_fsm.read()[473];
}

void cnn::thread_ap_CS_fsm_state478() {
    ap_CS_fsm_state478 = ap_CS_fsm.read()[474];
}

void cnn::thread_ap_CS_fsm_state479() {
    ap_CS_fsm_state479 = ap_CS_fsm.read()[475];
}

void cnn::thread_ap_CS_fsm_state480() {
    ap_CS_fsm_state480 = ap_CS_fsm.read()[476];
}

void cnn::thread_ap_CS_fsm_state481() {
    ap_CS_fsm_state481 = ap_CS_fsm.read()[477];
}

void cnn::thread_ap_CS_fsm_state487() {
    ap_CS_fsm_state487 = ap_CS_fsm.read()[483];
}

void cnn::thread_ap_CS_fsm_state488() {
    ap_CS_fsm_state488 = ap_CS_fsm.read()[484];
}

void cnn::thread_ap_CS_fsm_state489() {
    ap_CS_fsm_state489 = ap_CS_fsm.read()[485];
}

void cnn::thread_ap_CS_fsm_state492() {
    ap_CS_fsm_state492 = ap_CS_fsm.read()[488];
}

void cnn::thread_ap_CS_fsm_state493() {
    ap_CS_fsm_state493 = ap_CS_fsm.read()[489];
}

void cnn::thread_ap_CS_fsm_state497() {
    ap_CS_fsm_state497 = ap_CS_fsm.read()[493];
}

void cnn::thread_ap_CS_fsm_state498() {
    ap_CS_fsm_state498 = ap_CS_fsm.read()[494];
}

void cnn::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[47];
}

void cnn::thread_ap_CS_fsm_state503() {
    ap_CS_fsm_state503 = ap_CS_fsm.read()[499];
}

void cnn::thread_ap_CS_fsm_state504() {
    ap_CS_fsm_state504 = ap_CS_fsm.read()[500];
}

void cnn::thread_ap_CS_fsm_state505() {
    ap_CS_fsm_state505 = ap_CS_fsm.read()[501];
}

void cnn::thread_ap_CS_fsm_state506() {
    ap_CS_fsm_state506 = ap_CS_fsm.read()[502];
}

void cnn::thread_ap_CS_fsm_state507() {
    ap_CS_fsm_state507 = ap_CS_fsm.read()[503];
}

void cnn::thread_ap_CS_fsm_state508() {
    ap_CS_fsm_state508 = ap_CS_fsm.read()[504];
}

void cnn::thread_ap_CS_fsm_state509() {
    ap_CS_fsm_state509 = ap_CS_fsm.read()[505];
}

void cnn::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[48];
}

void cnn::thread_ap_CS_fsm_state515() {
    ap_CS_fsm_state515 = ap_CS_fsm.read()[511];
}

void cnn::thread_ap_CS_fsm_state516() {
    ap_CS_fsm_state516 = ap_CS_fsm.read()[512];
}

void cnn::thread_ap_CS_fsm_state517() {
    ap_CS_fsm_state517 = ap_CS_fsm.read()[513];
}

void cnn::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[49];
}

void cnn::thread_ap_CS_fsm_state520() {
    ap_CS_fsm_state520 = ap_CS_fsm.read()[516];
}

void cnn::thread_ap_CS_fsm_state521() {
    ap_CS_fsm_state521 = ap_CS_fsm.read()[517];
}

void cnn::thread_ap_CS_fsm_state525() {
    ap_CS_fsm_state525 = ap_CS_fsm.read()[521];
}

void cnn::thread_ap_CS_fsm_state526() {
    ap_CS_fsm_state526 = ap_CS_fsm.read()[522];
}

void cnn::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[50];
}

void cnn::thread_ap_CS_fsm_state531() {
    ap_CS_fsm_state531 = ap_CS_fsm.read()[527];
}

void cnn::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[56];
}

void cnn::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[57];
}

void cnn::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[58];
}

void cnn::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[59];
}

void cnn::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[60];
}

void cnn::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[61];
}

void cnn::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[62];
}

void cnn::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[63];
}

void cnn::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[64];
}

void cnn::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[65];
}

void cnn::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[66];
}

void cnn::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[67];
}

void cnn::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[68];
}

void cnn::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[69];
}

void cnn::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[70];
}

void cnn::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[71];
}

void cnn::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[72];
}

void cnn::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[73];
}

void cnn::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void cnn::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[77];
}

void cnn::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[79];
}

void cnn::thread_ap_CS_fsm_state84() {
    ap_CS_fsm_state84 = ap_CS_fsm.read()[80];
}

void cnn::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[81];
}

void cnn::thread_ap_CS_fsm_state86() {
    ap_CS_fsm_state86 = ap_CS_fsm.read()[82];
}

void cnn::thread_ap_CS_fsm_state87() {
    ap_CS_fsm_state87 = ap_CS_fsm.read()[83];
}

void cnn::thread_ap_CS_fsm_state88() {
    ap_CS_fsm_state88 = ap_CS_fsm.read()[84];
}

void cnn::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[85];
}

void cnn::thread_ap_CS_fsm_state90() {
    ap_CS_fsm_state90 = ap_CS_fsm.read()[86];
}

void cnn::thread_ap_CS_fsm_state91() {
    ap_CS_fsm_state91 = ap_CS_fsm.read()[87];
}

void cnn::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[88];
}

void cnn::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[89];
}

void cnn::thread_ap_CS_fsm_state94() {
    ap_CS_fsm_state94 = ap_CS_fsm.read()[90];
}

void cnn::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[95];
}

void cnn::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond1_reg_4268.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void cnn::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond1_reg_4268.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void cnn::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_pp1_stage0_01001() {
    ap_block_pp1_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state55_io.read()));
}

void cnn::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state55_io.read()));
}

void cnn::thread_ap_block_state104_io() {
    ap_block_state104_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state10_pp0_stage0_iter1() {
    ap_block_state10_pp0_stage0_iter1 = (esl_seteq<1,1,1>(exitcond1_reg_4268.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void cnn::thread_ap_block_state11_pp0_stage0_iter2() {
    ap_block_state11_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state132_io() {
    ap_block_state132_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state155() {
    ap_block_state155 = (esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op947_writeresp_state155.read()));
}

void cnn::thread_ap_block_state160_io() {
    ap_block_state160_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state220_io() {
    ap_block_state220_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state248_io() {
    ap_block_state248_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state271() {
    ap_block_state271 = (esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1195_writeresp_state271.read()));
}

void cnn::thread_ap_block_state276_io() {
    ap_block_state276_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state336_io() {
    ap_block_state336_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state364_io() {
    ap_block_state364_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state387() {
    ap_block_state387 = (esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1443_writeresp_state387.read()));
}

void cnn::thread_ap_block_state392_io() {
    ap_block_state392_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state452_io() {
    ap_block_state452_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state480_io() {
    ap_block_state480_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state503() {
    ap_block_state503 = (esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1693_writeresp_state503.read()));
}

void cnn::thread_ap_block_state508_io() {
    ap_block_state508_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_ARREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cnn::thread_ap_block_state54_pp1_stage0_iter0() {
    ap_block_state54_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state55_io() {
    ap_block_state55_io = (esl_seteq<1,1,1>(tmp_6_reg_4483.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_WREADY.read()));
}

void cnn::thread_ap_block_state55_pp1_stage0_iter1() {
    ap_block_state55_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state9_pp0_stage0_iter0() {
    ap_block_state9_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_condition_3292() {
    ap_condition_3292 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(tmp_6_reg_4483.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0));
}

void cnn::thread_ap_condition_pp0_exit_iter0_state9() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_2076_p2.read())) {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_0;
    }
}

void cnn::thread_ap_condition_pp1_exit_iter0_state54() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_6_fu_2147_p2.read())) {
        ap_condition_pp1_exit_iter0_state54 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state54 = ap_const_logic_0;
    }
}

void cnn::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_9_fu_2162_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void cnn::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void cnn::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void cnn::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void cnn::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void cnn::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void cnn::thread_ap_phi_mux_indvar_phi_fu_852_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond1_reg_4268.read(), ap_const_lv1_0))) {
        ap_phi_mux_indvar_phi_fu_852_p4 = indvar_next_reg_4272.read();
    } else {
        ap_phi_mux_indvar_phi_fu_852_p4 = indvar_reg_848.read();
    }
}

void cnn::thread_ap_predicate_op1195_writeresp_state271() {
    ap_predicate_op1195_writeresp_state271 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_56_reg_5059.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_1_1_reg_5156.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_1_2_reg_5243.read()));
}

void cnn::thread_ap_predicate_op1443_writeresp_state387() {
    ap_predicate_op1443_writeresp_state387 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_48_reg_4616.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_1_reg_4950.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_2_reg_5348.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_57_reg_5457.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_2_1_reg_5554.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_2_2_reg_5641.read()));
}

void cnn::thread_ap_predicate_op1693_writeresp_state503() {
    ap_predicate_op1693_writeresp_state503 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_58_reg_5854.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_3_1_reg_5951.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_3_2_reg_6038.read()));
}

void cnn::thread_ap_predicate_op947_writeresp_state155() {
    ap_predicate_op947_writeresp_state155 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_55_reg_4661.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_0_1_reg_4758.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_0_2_reg_4845.read()));
}

void cnn::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_9_fu_2162_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void cnn::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void cnn::thread_ap_sig_ioackin_gmem_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) {
        ap_sig_ioackin_gmem_ARREADY = gmem_ARREADY.read();
    } else {
        ap_sig_ioackin_gmem_ARREADY = ap_const_logic_1;
    }
}

void cnn::thread_ap_sig_ioackin_gmem_AWREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) {
        ap_sig_ioackin_gmem_AWREADY = gmem_AWREADY.read();
    } else {
        ap_sig_ioackin_gmem_AWREADY = ap_const_logic_1;
    }
}

void cnn::thread_ap_sig_ioackin_gmem_WREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) {
        ap_sig_ioackin_gmem_WREADY = gmem_WREADY.read();
    } else {
        ap_sig_ioackin_gmem_WREADY = ap_const_logic_1;
    }
}

void cnn::thread_c1_1_fu_2217_p2() {
    c1_1_fu_2217_p2 = (!c1_reg_905.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(c1_reg_905.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void cnn::thread_c1_cast_fu_2208_p1() {
    c1_cast_fu_2208_p1 = esl_zext<32,31>(c1_reg_905.read());
}

void cnn::thread_chi_1_0_1_fu_2626_p2() {
    chi_1_0_1_fu_2626_p2 = (chi_reg_928.read() | ap_const_lv32_2);
}

void cnn::thread_chi_1_0_2_fu_2725_p2() {
    chi_1_0_2_fu_2725_p2 = (chi_reg_928.read() | ap_const_lv32_3);
}

void cnn::thread_chi_1_0_3_fu_2741_p2() {
    chi_1_0_3_fu_2741_p2 = (!chi_reg_928.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<32>(): (sc_bigint<32>(chi_reg_928.read()) + sc_biguint<32>(ap_const_lv32_4));
}

void cnn::thread_chi_1_0_s_fu_2527_p2() {
    chi_1_0_s_fu_2527_p2 = (chi_reg_928.read() | ap_const_lv32_1);
}

void cnn::thread_chi_1_1_1_fu_3078_p2() {
    chi_1_1_1_fu_3078_p2 = (chi_s_reg_940.read() | ap_const_lv32_2);
}

void cnn::thread_chi_1_1_2_fu_3177_p2() {
    chi_1_1_2_fu_3177_p2 = (chi_s_reg_940.read() | ap_const_lv32_3);
}

void cnn::thread_chi_1_1_3_fu_3193_p2() {
    chi_1_1_3_fu_3193_p2 = (!chi_s_reg_940.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<32>(): (sc_bigint<32>(chi_s_reg_940.read()) + sc_biguint<32>(ap_const_lv32_4));
}

void cnn::thread_chi_1_1_s_fu_2979_p2() {
    chi_1_1_s_fu_2979_p2 = (chi_s_reg_940.read() | ap_const_lv32_1);
}

void cnn::thread_chi_1_2_1_fu_3530_p2() {
    chi_1_2_1_fu_3530_p2 = (chi_2_reg_952.read() | ap_const_lv32_2);
}

void cnn::thread_chi_1_2_2_fu_3629_p2() {
    chi_1_2_2_fu_3629_p2 = (chi_2_reg_952.read() | ap_const_lv32_3);
}

void cnn::thread_chi_1_2_3_fu_3645_p2() {
    chi_1_2_3_fu_3645_p2 = (!chi_2_reg_952.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<32>(): (sc_bigint<32>(chi_2_reg_952.read()) + sc_biguint<32>(ap_const_lv32_4));
}

void cnn::thread_chi_1_2_s_fu_3431_p2() {
    chi_1_2_s_fu_3431_p2 = (chi_2_reg_952.read() | ap_const_lv32_1);
}

void cnn::thread_chi_1_3_1_fu_3982_p2() {
    chi_1_3_1_fu_3982_p2 = (chi_3_reg_964.read() | ap_const_lv32_2);
}

void cnn::thread_chi_1_3_2_fu_4081_p2() {
    chi_1_3_2_fu_4081_p2 = (chi_3_reg_964.read() | ap_const_lv32_3);
}

void cnn::thread_chi_1_3_3_fu_4102_p2() {
    chi_1_3_3_fu_4102_p2 = (!chi_3_reg_964.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<32>(): (sc_bigint<32>(chi_3_reg_964.read()) + sc_biguint<32>(ap_const_lv32_4));
}

void cnn::thread_chi_1_3_s_fu_3883_p2() {
    chi_1_3_s_fu_3883_p2 = (chi_3_reg_964.read() | ap_const_lv32_1);
}

void cnn::thread_cho_1_1_fu_3199_p2() {
    cho_1_1_fu_3199_p2 = (cho_reg_916.read() | ap_const_lv32_2);
}

void cnn::thread_cho_1_2_fu_3651_p2() {
    cho_1_2_fu_3651_p2 = (cho_reg_916.read() | ap_const_lv32_3);
}

void cnn::thread_cho_1_3_fu_4108_p2() {
    cho_1_3_fu_4108_p2 = (!cho_reg_916.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<32>(): (sc_bigint<32>(cho_reg_916.read()) + sc_biguint<32>(ap_const_lv32_4));
}

void cnn::thread_cho_1_s_fu_2747_p2() {
    cho_1_s_fu_2747_p2 = (cho_reg_916.read() | ap_const_lv32_1);
}

void cnn::thread_exitcond1_fu_2076_p2() {
    exitcond1_fu_2076_p2 = (!ap_phi_mux_indvar_phi_fu_852_p4.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_phi_fu_852_p4.read() == ap_const_lv3_6);
}

void cnn::thread_exitcond_fu_2173_p2() {
    exitcond_fu_2173_p2 = (!kc_reg_882.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<1>(): sc_lv<1>(kc_reg_882.read() == K_reg_4339.read());
}

void cnn::thread_gmem_ARADDR() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read())) {
            gmem_ARADDR = gmem_addr_37_reg_6168.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read())) {
            gmem_ARADDR = gmem_addr_36_reg_6174.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
            gmem_ARADDR = gmem_addr_35_reg_6083.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
            gmem_ARADDR = gmem_addr_34_reg_6072.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read())) {
            gmem_ARADDR = gmem_addr_33_reg_5996.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read())) {
            gmem_ARADDR = gmem_addr_32_reg_5985.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read())) {
            gmem_ARADDR = gmem_addr_29_reg_5844.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
            gmem_ARADDR = gmem_addr_31_reg_5899.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state424.read())) {
            gmem_ARADDR = gmem_addr_30_reg_5888.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state393.read())) {
            gmem_ARADDR = gmem_addr_28_reg_5790.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read())) {
            gmem_ARADDR = gmem_addr_27_reg_5779.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state365.read())) {
            gmem_ARADDR = gmem_addr_26_reg_5686.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read())) {
            gmem_ARADDR = gmem_addr_25_reg_5675.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read())) {
            gmem_ARADDR = gmem_addr_24_reg_5599.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read())) {
            gmem_ARADDR = gmem_addr_23_reg_5588.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
            gmem_ARADDR = gmem_addr_20_reg_5447.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
            gmem_ARADDR = gmem_addr_22_reg_5502.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read())) {
            gmem_ARADDR = gmem_addr_21_reg_5491.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read())) {
            gmem_ARADDR = gmem_addr_19_reg_5393.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read())) {
            gmem_ARADDR = gmem_addr_18_reg_5382.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state249.read())) {
            gmem_ARADDR = gmem_addr_17_reg_5288.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read())) {
            gmem_ARADDR = gmem_addr_16_reg_5277.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
            gmem_ARADDR = gmem_addr_15_reg_5201.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
            gmem_ARADDR = gmem_addr_14_reg_5190.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read())) {
            gmem_ARADDR = gmem_addr_11_reg_5049.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read())) {
            gmem_ARADDR = gmem_addr_13_reg_5104.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read())) {
            gmem_ARADDR = gmem_addr_12_reg_5093.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
            gmem_ARADDR = gmem_addr_10_reg_4995.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read())) {
            gmem_ARADDR = gmem_addr_9_reg_4984.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
            gmem_ARADDR = gmem_addr_8_reg_4890.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read())) {
            gmem_ARADDR = gmem_addr_7_reg_4879.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
            gmem_ARADDR = gmem_addr_6_reg_4803.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read())) {
            gmem_ARADDR = gmem_addr_5_reg_4792.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
            gmem_ARADDR = gmem_addr_2_reg_4643.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
            gmem_ARADDR = gmem_addr_4_reg_4706.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
            gmem_ARADDR = gmem_addr_3_reg_4695.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
            gmem_ARADDR =  (sc_lv<32>) (tmp_4_fu_2057_p1.read());
        } else {
            gmem_ARADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        gmem_ARADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cnn::thread_gmem_ARLEN() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state249.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state365.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state393.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state424.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())))) {
        gmem_ARLEN = ap_const_lv32_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()))) {
        gmem_ARLEN = ap_const_lv32_6;
    } else {
        gmem_ARLEN = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cnn::thread_gmem_ARVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state249.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state365.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state393.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state424.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())))) {
        gmem_ARVALID = ap_const_logic_1;
    } else {
        gmem_ARVALID = ap_const_logic_0;
    }
}

void cnn::thread_gmem_AWADDR() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())))) {
        gmem_AWADDR = gmem_addr_29_reg_5844.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())))) {
        gmem_AWADDR = gmem_addr_20_reg_5447.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())))) {
        gmem_AWADDR = gmem_addr_11_reg_5049.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())))) {
        gmem_AWADDR = gmem_addr_2_reg_4643.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read()))) {
        gmem_AWADDR =  (sc_lv<32>) (tmp_32_fu_2133_p1.read());
    } else {
        gmem_AWADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cnn::thread_gmem_AWLEN() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())))) {
        gmem_AWLEN = ap_const_lv32_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read()))) {
        gmem_AWLEN = tmp_5_reg_4448.read();
    } else {
        gmem_AWLEN = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cnn::thread_gmem_AWVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())))) {
        gmem_AWVALID = ap_const_logic_1;
    } else {
        gmem_AWVALID = ap_const_logic_0;
    }
}

void cnn::thread_gmem_BREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state447.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state475.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read()) && 
          esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op947_writeresp_state155.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op947_writeresp_state155.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state271.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1195_writeresp_state271.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1195_writeresp_state271.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state387.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1443_writeresp_state387.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1443_writeresp_state387.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1693_writeresp_state503.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1693_writeresp_state503.read()))))) {
        gmem_BREADY = ap_const_logic_1;
    } else {
        gmem_BREADY = ap_const_logic_0;
    }
}

void cnn::thread_gmem_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state255.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state372.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state399.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state459.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state516.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond1_reg_4268.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        gmem_RREADY = ap_const_logic_1;
    } else {
        gmem_RREADY = ap_const_logic_0;
    }
}

void cnn::thread_gmem_WDATA() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
            gmem_WDATA = tmp_34_3_3_cast_fu_4189_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
            gmem_WDATA = tmp_34_3_2_cast_fu_4077_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read())) {
            gmem_WDATA = tmp_34_3_1_cast_fu_3978_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state442.read())) {
            gmem_WDATA = tmp_34_3_cast_fu_3879_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
            gmem_WDATA = tmp_34_2_3_cast_fu_3746_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state382.read())) {
            gmem_WDATA = tmp_34_2_2_cast_fu_3625_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read())) {
            gmem_WDATA = tmp_34_2_1_cast_fu_3526_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
            gmem_WDATA = tmp_34_2_cast_fu_3427_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
            gmem_WDATA = tmp_34_1_3_cast_fu_3294_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read())) {
            gmem_WDATA = tmp_34_1_2_cast_fu_3173_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read())) {
            gmem_WDATA = tmp_34_1_1_cast_fu_3074_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
            gmem_WDATA = tmp_34_1_cast_fu_2975_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read())) {
            gmem_WDATA = tmp_34_0_3_cast_fu_2842_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
            gmem_WDATA = tmp_34_0_2_cast_fu_2721_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
            gmem_WDATA = tmp_34_0_1_cast_fu_2622_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
            gmem_WDATA = tmp_34_cast_fu_2523_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3292.read(), ap_const_boolean_1)) {
            gmem_WDATA = ap_const_lv32_0;
        } else {
            gmem_WDATA = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        gmem_WDATA = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cnn::thread_gmem_WVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(tmp_6_reg_4483.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state382.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state442.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())))) {
        gmem_WVALID = ap_const_logic_1;
    } else {
        gmem_WVALID = ap_const_logic_0;
    }
}

void cnn::thread_gmem_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state249.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state365.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state393.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state424.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()))) {
        gmem_blk_n_AR = m_axi_gmem_ARREADY.read();
    } else {
        gmem_blk_n_AR = ap_const_logic_1;
    }
}

void cnn::thread_gmem_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()))) {
        gmem_blk_n_AW = m_axi_gmem_AWREADY.read();
    } else {
        gmem_blk_n_AW = ap_const_logic_1;
    }
}

void cnn::thread_gmem_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_55_reg_4661.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_0_1_reg_4758.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_0_2_reg_4845.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state271.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_56_reg_5059.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_1_1_reg_5156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_1_2_reg_5243.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state387.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_48_reg_4616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_1_reg_4950.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_2_reg_5348.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_57_reg_5457.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_2_1_reg_5554.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_2_2_reg_5641.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state447.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state475.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_58_reg_5854.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_3_1_reg_5951.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_3_2_reg_6038.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read()))) {
        gmem_blk_n_B = m_axi_gmem_BVALID.read();
    } else {
        gmem_blk_n_B = ap_const_logic_1;
    }
}

void cnn::thread_gmem_blk_n_R() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond1_reg_4268.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state255.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state372.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state399.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state516.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()))) {
        gmem_blk_n_R = m_axi_gmem_RVALID.read();
    } else {
        gmem_blk_n_R = ap_const_logic_1;
    }
}

void cnn::thread_gmem_blk_n_W() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(tmp_6_reg_4483.read(), ap_const_lv1_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state382.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state442.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()))) {
        gmem_blk_n_W = m_axi_gmem_WREADY.read();
    } else {
        gmem_blk_n_W = ap_const_logic_1;
    }
}

void cnn::thread_grp_fu_1496_p0() {
    grp_fu_1496_p0 = gmem_addr_7_read_reg_4896.read();
}

void cnn::thread_grp_fu_1496_p1() {
    grp_fu_1496_p1 = gmem_addr_8_read_reg_4901.read();
}

void cnn::thread_grp_fu_1497_p0() {
    grp_fu_1497_p0 = gmem_addr_5_read_reg_4809.read();
}

void cnn::thread_grp_fu_1497_p1() {
    grp_fu_1497_p1 = gmem_addr_6_read_reg_4814.read();
}

void cnn::thread_grp_fu_1498_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state318.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state319.read()))) {
        grp_fu_1498_ce = ap_const_logic_1;
    } else {
        grp_fu_1498_ce = ap_const_logic_0;
    }
}

void cnn::thread_grp_fu_1498_p0() {
    grp_fu_1498_p0 = gmem_addr_21_read_reg_5508.read();
}

void cnn::thread_grp_fu_1498_p1() {
    grp_fu_1498_p1 = gmem_addr_22_read_reg_5513.read();
}

void cnn::thread_grp_fu_1499_p0() {
    grp_fu_1499_p0 = gmem_addr_25_read_reg_5692.read();
}

void cnn::thread_grp_fu_1499_p1() {
    grp_fu_1499_p1 = gmem_addr_26_read_reg_5697.read();
}

void cnn::thread_grp_fu_1500_p0() {
    grp_fu_1500_p0 = gmem_addr_34_read_reg_6089.read();
}

void cnn::thread_grp_fu_1500_p1() {
    grp_fu_1500_p1 = gmem_addr_35_read_reg_6094.read();
}

void cnn::thread_grp_fu_1501_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()))) {
        grp_fu_1501_ce = ap_const_logic_1;
    } else {
        grp_fu_1501_ce = ap_const_logic_0;
    }
}

void cnn::thread_grp_fu_1501_p0() {
    grp_fu_1501_p0 = gmem_addr_12_read_reg_5110.read();
}

void cnn::thread_grp_fu_1501_p1() {
    grp_fu_1501_p1 = gmem_addr_13_read_reg_5115.read();
}

void cnn::thread_grp_fu_1502_p0() {
    grp_fu_1502_p0 = gmem_addr_23_read_reg_5605.read();
}

void cnn::thread_grp_fu_1502_p1() {
    grp_fu_1502_p1 = gmem_addr_24_read_reg_5610.read();
}

void cnn::thread_grp_fu_1503_p0() {
    grp_fu_1503_p0 = gmem_addr_36_read_reg_6180.read();
}

void cnn::thread_grp_fu_1503_p1() {
    grp_fu_1503_p1 = gmem_addr_37_read_reg_6185.read();
}

void cnn::thread_grp_fu_1504_p0() {
    grp_fu_1504_p0 = gmem_addr_18_read_reg_5399.read();
}

void cnn::thread_grp_fu_1504_p1() {
    grp_fu_1504_p1 = gmem_addr_19_read_reg_5404.read();
}

void cnn::thread_grp_fu_1505_p0() {
    grp_fu_1505_p0 = gmem_addr_27_read_reg_5796.read();
}

void cnn::thread_grp_fu_1505_p1() {
    grp_fu_1505_p1 = gmem_addr_28_read_reg_5801.read();
}

void cnn::thread_grp_fu_1506_p0() {
    grp_fu_1506_p0 = gmem_addr_14_read_reg_5207.read();
}

void cnn::thread_grp_fu_1506_p1() {
    grp_fu_1506_p1 = gmem_addr_15_read_reg_5212.read();
}

void cnn::thread_grp_fu_1507_p0() {
    grp_fu_1507_p0 = gmem_addr_9_read_reg_5001.read();
}

void cnn::thread_grp_fu_1507_p1() {
    grp_fu_1507_p1 = gmem_addr_10_read_reg_5006.read();
}

void cnn::thread_grp_fu_1508_p0() {
    grp_fu_1508_p0 = gmem_addr_32_read_reg_6002.read();
}

void cnn::thread_grp_fu_1508_p1() {
    grp_fu_1508_p1 = gmem_addr_33_read_reg_6007.read();
}

void cnn::thread_grp_fu_1509_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()))) {
        grp_fu_1509_ce = ap_const_logic_1;
    } else {
        grp_fu_1509_ce = ap_const_logic_0;
    }
}

void cnn::thread_grp_fu_1509_p0() {
    grp_fu_1509_p0 = gmem_addr_30_read_reg_5905.read();
}

void cnn::thread_grp_fu_1509_p1() {
    grp_fu_1509_p1 = gmem_addr_31_read_reg_5910.read();
}

void cnn::thread_grp_fu_1510_p0() {
    grp_fu_1510_p0 = gmem_addr_16_read_reg_5294.read();
}

void cnn::thread_grp_fu_1510_p1() {
    grp_fu_1510_p1 = gmem_addr_17_read_reg_5299.read();
}

void cnn::thread_grp_fu_1511_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()))) {
        grp_fu_1511_ce = ap_const_logic_1;
    } else {
        grp_fu_1511_ce = ap_const_logic_0;
    }
}

void cnn::thread_grp_fu_1511_p0() {
    grp_fu_1511_p0 = gmem_addr_3_read_reg_4712.read();
}

void cnn::thread_grp_fu_1511_p1() {
    grp_fu_1511_p1 = gmem_addr_4_read_reg_4717.read();
}

void cnn::thread_grp_fu_2097_ap_start() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        grp_fu_2097_ap_start = ap_const_logic_1;
    } else {
        grp_fu_2097_ap_start = ap_const_logic_0;
    }
}

void cnn::thread_grp_fu_2097_p0() {
    grp_fu_2097_p0 = (!R_in_reg_4287.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): (sc_bigint<32>(R_in_reg_4287.read()) - sc_bigint<32>(K_reg_4339.read()));
}

void cnn::thread_grp_fu_2107_ap_start() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        grp_fu_2107_ap_start = ap_const_logic_1;
    } else {
        grp_fu_2107_ap_start = ap_const_logic_0;
    }
}

void cnn::thread_grp_fu_2107_p0() {
    grp_fu_2107_p0 = (!C_in_reg_4318.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): (sc_bigint<32>(C_in_reg_4318.read()) - sc_bigint<32>(K_reg_4339.read()));
}

void cnn::thread_grp_fu_978_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_gmem_AWREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        grp_fu_978_ce = ap_const_logic_1;
    } else {
        grp_fu_978_ce = ap_const_logic_0;
    }
}

void cnn::thread_grp_fu_978_p0() {
    grp_fu_978_p0 = gmem_addr_20_read_reg_5533.read();
}

void cnn::thread_grp_fu_981_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state205.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_gmem_AWREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()))) {
        grp_fu_981_ce = ap_const_logic_1;
    } else {
        grp_fu_981_ce = ap_const_logic_0;
    }
}

void cnn::thread_grp_fu_981_p0() {
    grp_fu_981_p0 = gmem_addr_11_read_reg_5135.read();
}

void cnn::thread_grp_fu_989_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_gmem_AWREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state438.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()))) {
        grp_fu_989_ce = ap_const_logic_1;
    } else {
        grp_fu_989_ce = ap_const_logic_0;
    }
}

void cnn::thread_grp_fu_989_p0() {
    grp_fu_989_p0 = gmem_addr_29_read_reg_5930.read();
}

void cnn::thread_grp_fu_991_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_gmem_AWREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()))) {
        grp_fu_991_ce = ap_const_logic_1;
    } else {
        grp_fu_991_ce = ap_const_logic_0;
    }
}

void cnn::thread_grp_fu_991_p0() {
    grp_fu_991_p0 = gmem_addr_2_read_reg_4737.read();
}

void cnn::thread_i_1_fu_2152_p2() {
    i_1_fu_2152_p2 = (!i_reg_860.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(i_reg_860.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void cnn::thread_i_cast_fu_2143_p1() {
    i_cast_fu_2143_p1 = esl_zext<32,31>(i_reg_860.read());
}

void cnn::thread_indvar2_fu_2088_p1() {
    indvar2_fu_2088_p1 = esl_zext<64,3>(indvar_reg_848_pp0_iter1_reg.read());
}

void cnn::thread_indvar_next_fu_2082_p2() {
    indvar_next_fu_2082_p2 = (!ap_phi_mux_indvar_phi_fu_852_p4.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(ap_phi_mux_indvar_phi_fu_852_p4.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_kc_1_fu_2178_p2() {
    kc_1_fu_2178_p2 = (!kc_reg_882.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void cnn::thread_kr_1_fu_2167_p2() {
    kr_1_fu_2167_p2 = (!kr_reg_871.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(kr_reg_871.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void cnn::thread_kr_cast_fu_2158_p1() {
    kr_cast_fu_2158_p1 = esl_zext<32,31>(kr_reg_871.read());
}

void cnn::thread_p_lshr1_fu_2379_p4() {
    p_lshr1_fu_2379_p4 = p_neg1_fu_2374_p2.read().range(31, 2);
}

void cnn::thread_p_lshr_fu_2258_p4() {
    p_lshr_fu_2258_p4 = p_neg_fu_2253_p2.read().range(31, 2);
}

void cnn::thread_p_neg1_fu_2374_p2() {
    p_neg1_fu_2374_p2 = (!ap_const_lv32_FFFFFFFD.is_01() || !CHin_reg_4454.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFFD) - sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_p_neg_fu_2253_p2() {
    p_neg_fu_2253_p2 = (!ap_const_lv32_FFFFFFFD.is_01() || !CHout_reg_4427.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFFD) - sc_bigint<32>(CHout_reg_4427.read()));
}

void cnn::thread_p_neg_t1_fu_2389_p2() {
    p_neg_t1_fu_2389_p2 = (!ap_const_lv30_0.is_01() || !p_lshr1_fu_2379_p4.read().is_01())? sc_lv<30>(): (sc_biguint<30>(ap_const_lv30_0) - sc_biguint<30>(p_lshr1_fu_2379_p4.read()));
}

void cnn::thread_p_neg_t_fu_2268_p2() {
    p_neg_t_fu_2268_p2 = (!ap_const_lv30_0.is_01() || !p_lshr_fu_2258_p4.read().is_01())? sc_lv<30>(): (sc_biguint<30>(ap_const_lv30_0) - sc_biguint<30>(p_lshr_fu_2258_p4.read()));
}

void cnn::thread_parameter_buffer_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        parameter_buffer_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        parameter_buffer_address0 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        parameter_buffer_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        parameter_buffer_address0 =  (sc_lv<3>) (indvar2_fu_2088_p1.read());
    } else {
        parameter_buffer_address0 =  (sc_lv<3>) ("XXX");
    }
}

void cnn::thread_parameter_buffer_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        parameter_buffer_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        parameter_buffer_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        parameter_buffer_address1 =  (sc_lv<3>) (ap_const_lv64_4);
    } else {
        parameter_buffer_address1 =  (sc_lv<3>) ("XXX");
    }
}

void cnn::thread_parameter_buffer_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        parameter_buffer_ce0 = ap_const_logic_1;
    } else {
        parameter_buffer_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_parameter_buffer_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()))) {
        parameter_buffer_ce1 = ap_const_logic_1;
    } else {
        parameter_buffer_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_parameter_buffer_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_4268_pp0_iter1_reg.read()))) {
        parameter_buffer_we0 = ap_const_logic_1;
    } else {
        parameter_buffer_we0 = ap_const_logic_0;
    }
}

void cnn::thread_r1_1_fu_2193_p2() {
    r1_1_fu_2193_p2 = (!r1_reg_894.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(r1_reg_894.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void cnn::thread_r1_cast_fu_2184_p1() {
    r1_cast_fu_2184_p1 = esl_zext<32,31>(r1_reg_894.read());
}

void cnn::thread_tmp1_fu_2125_p2() {
    tmp1_fu_2125_p2 = (!R_out_reg_4407.read().is_01() || !C_out_reg_4417.read().is_01())? sc_lv<32>(): sc_bigint<32>(R_out_reg_4407.read()) * sc_bigint<32>(C_out_reg_4417.read());
}

void cnn::thread_tmp_10_fu_2212_p2() {
    tmp_10_fu_2212_p2 = (!c1_cast_fu_2208_p1.read().is_01() || !C_out_reg_4417.read().is_01())? sc_lv<1>(): (sc_bigint<32>(c1_cast_fu_2208_p1.read()) < sc_bigint<32>(C_out_reg_4417.read()));
}

void cnn::thread_tmp_11_fu_2223_p0() {
    tmp_11_fu_2223_p0 =  (sc_lv<31>) (c1_cast_fu_2208_p1.read());
}

void cnn::thread_tmp_11_fu_2223_p2() {
    tmp_11_fu_2223_p2 = (!tmp_11_fu_2223_p0.read().is_01() || !S_reg_4384.read().is_01())? sc_lv<32>(): sc_biguint<31>(tmp_11_fu_2223_p0.read()) * sc_bigint<32>(S_reg_4384.read());
}

void cnn::thread_tmp_12_1_fu_2753_p2() {
    tmp_12_1_fu_2753_p2 = (!cho_1_s_fu_2747_p2.read().is_01() || !CHout_reg_4427.read().is_01())? sc_lv<1>(): (sc_bigint<32>(cho_1_s_fu_2747_p2.read()) < sc_bigint<32>(CHout_reg_4427.read()));
}

void cnn::thread_tmp_12_2_fu_3205_p2() {
    tmp_12_2_fu_3205_p2 = (!cho_1_1_fu_3199_p2.read().is_01() || !CHout_reg_4427.read().is_01())? sc_lv<1>(): (sc_bigint<32>(cho_1_1_fu_3199_p2.read()) < sc_bigint<32>(CHout_reg_4427.read()));
}

void cnn::thread_tmp_12_3_fu_3657_p2() {
    tmp_12_3_fu_3657_p2 = (!cho_1_2_fu_3651_p2.read().is_01() || !CHout_reg_4427.read().is_01())? sc_lv<1>(): (sc_bigint<32>(cho_1_2_fu_3651_p2.read()) < sc_bigint<32>(CHout_reg_4427.read()));
}

void cnn::thread_tmp_13_1_fu_2854_p2() {
    tmp_13_1_fu_2854_p2 = (!cho_1_s_reg_4945.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<32>(): sc_bigint<32>(cho_1_s_reg_4945.read()) * sc_bigint<32>(CHin_reg_4454.read());
}

void cnn::thread_tmp_13_2_fu_3306_p2() {
    tmp_13_2_fu_3306_p2 = (!cho_1_1_reg_5343.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<32>(): sc_bigint<32>(cho_1_1_reg_5343.read()) * sc_bigint<32>(CHin_reg_4454.read());
}

void cnn::thread_tmp_13_3_fu_3758_p2() {
    tmp_13_3_fu_3758_p2 = (!cho_1_2_reg_5741.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<32>(): sc_bigint<32>(cho_1_2_reg_5741.read()) * sc_bigint<32>(CHin_reg_4454.read());
}

void cnn::thread_tmp_14_1_fu_2758_p2() {
    tmp_14_1_fu_2758_p2 = (!R_out_reg_4407.read().is_01() || !cho_1_s_fu_2747_p2.read().is_01())? sc_lv<32>(): sc_bigint<32>(R_out_reg_4407.read()) * sc_bigint<32>(cho_1_s_fu_2747_p2.read());
}

void cnn::thread_tmp_14_2_fu_3210_p2() {
    tmp_14_2_fu_3210_p2 = (!R_out_reg_4407.read().is_01() || !cho_1_1_fu_3199_p2.read().is_01())? sc_lv<32>(): sc_bigint<32>(R_out_reg_4407.read()) * sc_bigint<32>(cho_1_1_fu_3199_p2.read());
}

void cnn::thread_tmp_14_3_fu_3662_p2() {
    tmp_14_3_fu_3662_p2 = (!R_out_reg_4407.read().is_01() || !cho_1_2_fu_3651_p2.read().is_01())? sc_lv<32>(): sc_bigint<32>(R_out_reg_4407.read()) * sc_bigint<32>(cho_1_2_fu_3651_p2.read());
}

void cnn::thread_tmp_15_1_fu_2846_p2() {
    tmp_15_1_fu_2846_p2 = (!r1_cast_reg_4529.read().is_01() || !tmp_14_1_reg_4954.read().is_01())? sc_lv<32>(): (sc_biguint<32>(r1_cast_reg_4529.read()) + sc_biguint<32>(tmp_14_1_reg_4954.read()));
}

void cnn::thread_tmp_15_2_fu_3298_p2() {
    tmp_15_2_fu_3298_p2 = (!r1_cast_reg_4529.read().is_01() || !tmp_14_2_reg_5352.read().is_01())? sc_lv<32>(): (sc_biguint<32>(r1_cast_reg_4529.read()) + sc_biguint<32>(tmp_14_2_reg_5352.read()));
}

void cnn::thread_tmp_15_3_fu_3750_p2() {
    tmp_15_3_fu_3750_p2 = (!r1_cast_reg_4529.read().is_01() || !tmp_14_3_reg_5749.read().is_01())? sc_lv<32>(): (sc_biguint<32>(r1_cast_reg_4529.read()) + sc_biguint<32>(tmp_14_3_reg_5749.read()));
}

void cnn::thread_tmp_16_1_fu_2850_p2() {
    tmp_16_1_fu_2850_p2 = (!C_out_reg_4417.read().is_01() || !tmp_15_1_reg_5031.read().is_01())? sc_lv<32>(): sc_bigint<32>(C_out_reg_4417.read()) * sc_bigint<32>(tmp_15_1_reg_5031.read());
}

void cnn::thread_tmp_16_2_fu_3302_p2() {
    tmp_16_2_fu_3302_p2 = (!C_out_reg_4417.read().is_01() || !tmp_15_2_reg_5429.read().is_01())? sc_lv<32>(): sc_bigint<32>(C_out_reg_4417.read()) * sc_bigint<32>(tmp_15_2_reg_5429.read());
}

void cnn::thread_tmp_16_3_fu_3754_p2() {
    tmp_16_3_fu_3754_p2 = (!C_out_reg_4417.read().is_01() || !tmp_15_3_reg_5826.read().is_01())? sc_lv<32>(): sc_bigint<32>(C_out_reg_4417.read()) * sc_bigint<32>(tmp_15_3_reg_5826.read());
}

void cnn::thread_tmp_17_1_fu_2858_p2() {
    tmp_17_1_fu_2858_p2 = (!c1_cast_reg_4570.read().is_01() || !tmp_16_1_reg_5036.read().is_01())? sc_lv<32>(): (sc_biguint<32>(c1_cast_reg_4570.read()) + sc_biguint<32>(tmp_16_1_reg_5036.read()));
}

void cnn::thread_tmp_17_2_fu_3310_p2() {
    tmp_17_2_fu_3310_p2 = (!c1_cast_reg_4570.read().is_01() || !tmp_16_2_reg_5434.read().is_01())? sc_lv<32>(): (sc_biguint<32>(c1_cast_reg_4570.read()) + sc_biguint<32>(tmp_16_2_reg_5434.read()));
}

void cnn::thread_tmp_17_3_fu_3762_p2() {
    tmp_17_3_fu_3762_p2 = (!c1_cast_reg_4570.read().is_01() || !tmp_16_3_reg_5831.read().is_01())? sc_lv<32>(): (sc_biguint<32>(c1_cast_reg_4570.read()) + sc_biguint<32>(tmp_16_3_reg_5831.read()));
}

void cnn::thread_tmp_18_1_cast_fu_2862_p1() {
    tmp_18_1_cast_fu_2862_p1 = esl_sext<33,32>(tmp_17_1_fu_2858_p2.read());
}

void cnn::thread_tmp_18_2_cast_fu_3314_p1() {
    tmp_18_2_cast_fu_3314_p1 = esl_sext<33,32>(tmp_17_2_fu_3310_p2.read());
}

void cnn::thread_tmp_18_3_cast_fu_3766_p1() {
    tmp_18_3_cast_fu_3766_p1 = esl_sext<33,32>(tmp_17_3_fu_3762_p2.read());
}

void cnn::thread_tmp_18_cast_fu_2335_p1() {
    tmp_18_cast_fu_2335_p1 = esl_sext<33,32>(tmp_28_fu_2331_p2.read());
}

void cnn::thread_tmp_19_0_1_fu_2533_p2() {
    tmp_19_0_1_fu_2533_p2 = (!chi_1_0_s_fu_2527_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_0_s_fu_2527_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_0_2_fu_2632_p2() {
    tmp_19_0_2_fu_2632_p2 = (!chi_1_0_1_fu_2626_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_0_1_fu_2626_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_0_3_fu_2731_p2() {
    tmp_19_0_3_fu_2731_p2 = (!chi_1_0_2_fu_2725_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_0_2_fu_2725_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_1_1_fu_2985_p2() {
    tmp_19_1_1_fu_2985_p2 = (!chi_1_1_s_fu_2979_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_1_s_fu_2979_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_1_2_fu_3084_p2() {
    tmp_19_1_2_fu_3084_p2 = (!chi_1_1_1_fu_3078_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_1_1_fu_3078_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_1_3_fu_3183_p2() {
    tmp_19_1_3_fu_3183_p2 = (!chi_1_1_2_fu_3177_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_1_2_fu_3177_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_2_1_fu_3437_p2() {
    tmp_19_2_1_fu_3437_p2 = (!chi_1_2_s_fu_3431_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_2_s_fu_3431_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_2_2_fu_3536_p2() {
    tmp_19_2_2_fu_3536_p2 = (!chi_1_2_1_fu_3530_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_2_1_fu_3530_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_2_3_fu_3635_p2() {
    tmp_19_2_3_fu_3635_p2 = (!chi_1_2_2_fu_3629_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_2_2_fu_3629_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_3_1_fu_3889_p2() {
    tmp_19_3_1_fu_3889_p2 = (!chi_1_3_s_fu_3883_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_3_s_fu_3883_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_3_2_fu_3988_p2() {
    tmp_19_3_2_fu_3988_p2 = (!chi_1_3_1_fu_3982_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_3_1_fu_3982_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_19_3_3_fu_4087_p2() {
    tmp_19_3_3_fu_4087_p2 = (!chi_1_3_2_fu_4081_p2.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<1>(): (sc_bigint<32>(chi_1_3_2_fu_4081_p2.read()) < sc_bigint<32>(CHin_reg_4454.read()));
}

void cnn::thread_tmp_20_0_1_fu_2538_p2() {
    tmp_20_0_1_fu_2538_p2 = (!tmp_23_reg_4635.read().is_01() || !chi_1_0_s_fu_2527_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_23_reg_4635.read()) + sc_bigint<32>(chi_1_0_s_fu_2527_p2.read()));
}

void cnn::thread_tmp_20_0_2_fu_2637_p2() {
    tmp_20_0_2_fu_2637_p2 = (!tmp_23_reg_4635.read().is_01() || !chi_1_0_1_fu_2626_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_23_reg_4635.read()) + sc_bigint<32>(chi_1_0_1_fu_2626_p2.read()));
}

void cnn::thread_tmp_20_0_3_fu_2736_p2() {
    tmp_20_0_3_fu_2736_p2 = (!tmp_23_reg_4635.read().is_01() || !chi_1_0_2_fu_2725_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_23_reg_4635.read()) + sc_bigint<32>(chi_1_0_2_fu_2725_p2.read()));
}

void cnn::thread_tmp_20_1_1_fu_2990_p2() {
    tmp_20_1_1_fu_2990_p2 = (!tmp_13_1_reg_5041.read().is_01() || !chi_1_1_s_fu_2979_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_1_reg_5041.read()) + sc_bigint<32>(chi_1_1_s_fu_2979_p2.read()));
}

void cnn::thread_tmp_20_1_2_fu_3089_p2() {
    tmp_20_1_2_fu_3089_p2 = (!tmp_13_1_reg_5041.read().is_01() || !chi_1_1_1_fu_3078_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_1_reg_5041.read()) + sc_bigint<32>(chi_1_1_1_fu_3078_p2.read()));
}

void cnn::thread_tmp_20_1_3_fu_3188_p2() {
    tmp_20_1_3_fu_3188_p2 = (!tmp_13_1_reg_5041.read().is_01() || !chi_1_1_2_fu_3177_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_1_reg_5041.read()) + sc_bigint<32>(chi_1_1_2_fu_3177_p2.read()));
}

void cnn::thread_tmp_20_1_fu_2886_p2() {
    tmp_20_1_fu_2886_p2 = (!tmp_13_1_reg_5041.read().is_01() || !chi_s_reg_940.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_1_reg_5041.read()) + sc_bigint<32>(chi_s_reg_940.read()));
}

void cnn::thread_tmp_20_2_1_fu_3442_p2() {
    tmp_20_2_1_fu_3442_p2 = (!tmp_13_2_reg_5439.read().is_01() || !chi_1_2_s_fu_3431_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_2_reg_5439.read()) + sc_bigint<32>(chi_1_2_s_fu_3431_p2.read()));
}

void cnn::thread_tmp_20_2_2_fu_3541_p2() {
    tmp_20_2_2_fu_3541_p2 = (!tmp_13_2_reg_5439.read().is_01() || !chi_1_2_1_fu_3530_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_2_reg_5439.read()) + sc_bigint<32>(chi_1_2_1_fu_3530_p2.read()));
}

void cnn::thread_tmp_20_2_3_fu_3640_p2() {
    tmp_20_2_3_fu_3640_p2 = (!tmp_13_2_reg_5439.read().is_01() || !chi_1_2_2_fu_3629_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_2_reg_5439.read()) + sc_bigint<32>(chi_1_2_2_fu_3629_p2.read()));
}

void cnn::thread_tmp_20_2_fu_3338_p2() {
    tmp_20_2_fu_3338_p2 = (!tmp_13_2_reg_5439.read().is_01() || !chi_2_reg_952.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_2_reg_5439.read()) + sc_bigint<32>(chi_2_reg_952.read()));
}

void cnn::thread_tmp_20_3_1_fu_3894_p2() {
    tmp_20_3_1_fu_3894_p2 = (!tmp_13_3_reg_5836.read().is_01() || !chi_1_3_s_fu_3883_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_3_reg_5836.read()) + sc_bigint<32>(chi_1_3_s_fu_3883_p2.read()));
}

void cnn::thread_tmp_20_3_2_fu_3993_p2() {
    tmp_20_3_2_fu_3993_p2 = (!tmp_13_3_reg_5836.read().is_01() || !chi_1_3_1_fu_3982_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_3_reg_5836.read()) + sc_bigint<32>(chi_1_3_1_fu_3982_p2.read()));
}

void cnn::thread_tmp_20_3_3_fu_4092_p2() {
    tmp_20_3_3_fu_4092_p2 = (!tmp_13_3_reg_5836.read().is_01() || !chi_1_3_2_fu_4081_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_3_reg_5836.read()) + sc_bigint<32>(chi_1_3_2_fu_4081_p2.read()));
}

void cnn::thread_tmp_20_3_fu_3790_p2() {
    tmp_20_3_fu_3790_p2 = (!tmp_13_3_reg_5836.read().is_01() || !chi_3_reg_964.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_13_3_reg_5836.read()) + sc_bigint<32>(chi_3_reg_964.read()));
}

void cnn::thread_tmp_21_0_1_fu_2543_p2() {
    tmp_21_0_1_fu_2543_p2 = (!tmp_20_0_1_reg_4762.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_0_1_reg_4762.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_0_2_fu_2642_p2() {
    tmp_21_0_2_fu_2642_p2 = (!tmp_20_0_2_reg_4849.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_0_2_reg_4849.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_0_3_fu_2763_p2() {
    tmp_21_0_3_fu_2763_p2 = (!tmp_20_0_3_reg_4935.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_0_3_reg_4935.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_1_1_fu_2995_p2() {
    tmp_21_1_1_fu_2995_p2 = (!tmp_20_1_1_reg_5160.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_1_1_reg_5160.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_1_2_fu_3094_p2() {
    tmp_21_1_2_fu_3094_p2 = (!tmp_20_1_2_reg_5247.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_1_2_reg_5247.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_1_3_fu_3215_p2() {
    tmp_21_1_3_fu_3215_p2 = (!tmp_20_1_3_reg_5333.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_1_3_reg_5333.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_1_fu_2891_p2() {
    tmp_21_1_fu_2891_p2 = (!tmp_20_1_reg_5063.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_1_reg_5063.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_2_1_fu_3447_p2() {
    tmp_21_2_1_fu_3447_p2 = (!tmp_20_2_1_reg_5558.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_2_1_reg_5558.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_2_2_fu_3546_p2() {
    tmp_21_2_2_fu_3546_p2 = (!tmp_20_2_2_reg_5645.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_2_2_reg_5645.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_2_3_fu_3667_p2() {
    tmp_21_2_3_fu_3667_p2 = (!tmp_20_2_3_reg_5731.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_2_3_reg_5731.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_2_fu_3343_p2() {
    tmp_21_2_fu_3343_p2 = (!tmp_20_2_reg_5461.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_2_reg_5461.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_3_1_fu_3899_p2() {
    tmp_21_3_1_fu_3899_p2 = (!tmp_20_3_1_reg_5955.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_3_1_reg_5955.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_3_2_fu_3998_p2() {
    tmp_21_3_2_fu_3998_p2 = (!tmp_20_3_2_reg_6042.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_3_2_reg_6042.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_3_3_fu_4114_p2() {
    tmp_21_3_3_fu_4114_p2 = (!tmp_20_3_3_reg_6123.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_3_3_reg_6123.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_21_3_fu_3795_p2() {
    tmp_21_3_fu_3795_p2 = (!tmp_20_3_reg_5858.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_20_3_reg_5858.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_22_0_1_fu_2547_p2() {
    tmp_22_0_1_fu_2547_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_0_1_reg_4767.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_0_1_reg_4767.read()));
}

void cnn::thread_tmp_22_0_2_fu_2646_p2() {
    tmp_22_0_2_fu_2646_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_0_2_reg_4854.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_0_2_reg_4854.read()));
}

void cnn::thread_tmp_22_0_3_fu_2767_p2() {
    tmp_22_0_3_fu_2767_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_0_3_reg_4959.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_0_3_reg_4959.read()));
}

void cnn::thread_tmp_22_1_1_fu_2999_p2() {
    tmp_22_1_1_fu_2999_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_1_1_reg_5165.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_1_1_reg_5165.read()));
}

void cnn::thread_tmp_22_1_2_fu_3098_p2() {
    tmp_22_1_2_fu_3098_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_1_2_reg_5252.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_1_2_reg_5252.read()));
}

void cnn::thread_tmp_22_1_3_fu_3219_p2() {
    tmp_22_1_3_fu_3219_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_1_3_reg_5357.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_1_3_reg_5357.read()));
}

void cnn::thread_tmp_22_1_fu_2895_p2() {
    tmp_22_1_fu_2895_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_1_reg_5068.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_1_reg_5068.read()));
}

void cnn::thread_tmp_22_2_1_fu_3451_p2() {
    tmp_22_2_1_fu_3451_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_2_1_reg_5563.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_2_1_reg_5563.read()));
}

void cnn::thread_tmp_22_2_2_fu_3550_p2() {
    tmp_22_2_2_fu_3550_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_2_2_reg_5650.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_2_2_reg_5650.read()));
}

void cnn::thread_tmp_22_2_3_fu_3671_p2() {
    tmp_22_2_3_fu_3671_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_2_3_reg_5754.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_2_3_reg_5754.read()));
}

void cnn::thread_tmp_22_2_fu_3347_p2() {
    tmp_22_2_fu_3347_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_2_reg_5466.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_2_reg_5466.read()));
}

void cnn::thread_tmp_22_3_1_fu_3903_p2() {
    tmp_22_3_1_fu_3903_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_3_1_reg_5960.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_3_1_reg_5960.read()));
}

void cnn::thread_tmp_22_3_2_fu_4002_p2() {
    tmp_22_3_2_fu_4002_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_3_2_reg_6047.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_3_2_reg_6047.read()));
}

void cnn::thread_tmp_22_3_3_fu_4122_p2() {
    tmp_22_3_3_fu_4122_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_3_3_reg_6143.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_3_3_reg_6143.read()));
}

void cnn::thread_tmp_22_3_fu_3799_p2() {
    tmp_22_3_fu_3799_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_21_3_reg_5863.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_21_3_reg_5863.read()));
}

void cnn::thread_tmp_23_0_1_fu_2555_p2() {
    tmp_23_0_1_fu_2555_p2 = (!tmp_22_0_1_reg_4772.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_0_1_reg_4772.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_0_2_fu_2654_p2() {
    tmp_23_0_2_fu_2654_p2 = (!tmp_22_0_2_reg_4859.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_0_2_reg_4859.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_0_3_fu_2775_p2() {
    tmp_23_0_3_fu_2775_p2 = (!tmp_22_0_3_reg_4964.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_0_3_reg_4964.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_1_1_fu_3007_p2() {
    tmp_23_1_1_fu_3007_p2 = (!tmp_22_1_1_reg_5170.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_1_1_reg_5170.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_1_2_fu_3106_p2() {
    tmp_23_1_2_fu_3106_p2 = (!tmp_22_1_2_reg_5257.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_1_2_reg_5257.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_1_3_fu_3227_p2() {
    tmp_23_1_3_fu_3227_p2 = (!tmp_22_1_3_reg_5362.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_1_3_reg_5362.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_1_fu_2904_p2() {
    tmp_23_1_fu_2904_p2 = (!tmp_22_1_reg_5073.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_1_reg_5073.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_2_1_fu_3459_p2() {
    tmp_23_2_1_fu_3459_p2 = (!tmp_22_2_1_reg_5568.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_2_1_reg_5568.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_2_2_fu_3558_p2() {
    tmp_23_2_2_fu_3558_p2 = (!tmp_22_2_2_reg_5655.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_2_2_reg_5655.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_2_3_fu_3679_p2() {
    tmp_23_2_3_fu_3679_p2 = (!tmp_22_2_3_reg_5759.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_2_3_reg_5759.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_2_fu_3356_p2() {
    tmp_23_2_fu_3356_p2 = (!tmp_22_2_reg_5471.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_2_reg_5471.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_3_1_fu_3911_p2() {
    tmp_23_3_1_fu_3911_p2 = (!tmp_22_3_1_reg_5965.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_3_1_reg_5965.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_3_2_fu_4010_p2() {
    tmp_23_3_2_fu_4010_p2 = (!tmp_22_3_2_reg_6052.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_3_2_reg_6052.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_3_3_fu_4130_p2() {
    tmp_23_3_3_fu_4130_p2 = (!tmp_22_3_3_reg_6153.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_3_3_reg_6153.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_3_fu_3808_p2() {
    tmp_23_3_fu_3808_p2 = (!tmp_22_3_reg_5868.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_22_3_reg_5868.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_23_fu_2326_p2() {
    tmp_23_fu_2326_p2 = (!cho_reg_916.read().is_01() || !CHin_reg_4454.read().is_01())? sc_lv<32>(): sc_bigint<32>(cho_reg_916.read()) * sc_bigint<32>(CHin_reg_4454.read());
}

void cnn::thread_tmp_24_0_1_fu_2563_p2() {
    tmp_24_0_1_fu_2563_p2 = (!kc_reg_882.read().is_01() || !tmp_23_0_1_reg_4782.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_0_1_reg_4782.read()));
}

void cnn::thread_tmp_24_0_2_fu_2662_p2() {
    tmp_24_0_2_fu_2662_p2 = (!kc_reg_882.read().is_01() || !tmp_23_0_2_reg_4869.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_0_2_reg_4869.read()));
}

void cnn::thread_tmp_24_0_3_fu_2783_p2() {
    tmp_24_0_3_fu_2783_p2 = (!kc_reg_882.read().is_01() || !tmp_23_0_3_reg_4974.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_0_3_reg_4974.read()));
}

void cnn::thread_tmp_24_1_1_fu_3015_p2() {
    tmp_24_1_1_fu_3015_p2 = (!kc_reg_882.read().is_01() || !tmp_23_1_1_reg_5180.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_1_1_reg_5180.read()));
}

void cnn::thread_tmp_24_1_2_fu_3114_p2() {
    tmp_24_1_2_fu_3114_p2 = (!kc_reg_882.read().is_01() || !tmp_23_1_2_reg_5267.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_1_2_reg_5267.read()));
}

void cnn::thread_tmp_24_1_3_fu_3235_p2() {
    tmp_24_1_3_fu_3235_p2 = (!kc_reg_882.read().is_01() || !tmp_23_1_3_reg_5372.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_1_3_reg_5372.read()));
}

void cnn::thread_tmp_24_1_fu_2912_p2() {
    tmp_24_1_fu_2912_p2 = (!kc_reg_882.read().is_01() || !tmp_23_1_reg_5083.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_1_reg_5083.read()));
}

void cnn::thread_tmp_24_2_1_fu_3467_p2() {
    tmp_24_2_1_fu_3467_p2 = (!kc_reg_882.read().is_01() || !tmp_23_2_1_reg_5578.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_2_1_reg_5578.read()));
}

void cnn::thread_tmp_24_2_2_fu_3566_p2() {
    tmp_24_2_2_fu_3566_p2 = (!kc_reg_882.read().is_01() || !tmp_23_2_2_reg_5665.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_2_2_reg_5665.read()));
}

void cnn::thread_tmp_24_2_3_fu_3687_p2() {
    tmp_24_2_3_fu_3687_p2 = (!kc_reg_882.read().is_01() || !tmp_23_2_3_reg_5769.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_2_3_reg_5769.read()));
}

void cnn::thread_tmp_24_2_fu_3364_p2() {
    tmp_24_2_fu_3364_p2 = (!kc_reg_882.read().is_01() || !tmp_23_2_reg_5481.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_2_reg_5481.read()));
}

void cnn::thread_tmp_24_3_1_fu_3919_p2() {
    tmp_24_3_1_fu_3919_p2 = (!kc_reg_882.read().is_01() || !tmp_23_3_1_reg_5975.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_3_1_reg_5975.read()));
}

void cnn::thread_tmp_24_3_2_fu_4018_p2() {
    tmp_24_3_2_fu_4018_p2 = (!kc_reg_882.read().is_01() || !tmp_23_3_2_reg_6062.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_3_2_reg_6062.read()));
}

void cnn::thread_tmp_24_3_3_fu_4157_p2() {
    tmp_24_3_3_fu_4157_p2 = (!kc_reg_882.read().is_01() || !tmp_23_3_3_reg_6163.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_3_3_reg_6163.read()));
}

void cnn::thread_tmp_24_3_fu_3816_p2() {
    tmp_24_3_fu_3816_p2 = (!kc_reg_882.read().is_01() || !tmp_23_3_reg_5878.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_23_3_reg_5878.read()));
}

void cnn::thread_tmp_24_fu_2313_p2() {
    tmp_24_fu_2313_p2 = (!R_out_reg_4407.read().is_01() || !cho_reg_916.read().is_01())? sc_lv<32>(): sc_bigint<32>(R_out_reg_4407.read()) * sc_bigint<32>(cho_reg_916.read());
}

void cnn::thread_tmp_25_0_1_cast_fu_2568_p1() {
    tmp_25_0_1_cast_fu_2568_p1 = esl_sext<33,32>(tmp_24_0_1_fu_2563_p2.read());
}

void cnn::thread_tmp_25_0_2_cast_fu_2667_p1() {
    tmp_25_0_2_cast_fu_2667_p1 = esl_sext<33,32>(tmp_24_0_2_fu_2662_p2.read());
}

void cnn::thread_tmp_25_0_3_cast_fu_2788_p1() {
    tmp_25_0_3_cast_fu_2788_p1 = esl_sext<33,32>(tmp_24_0_3_fu_2783_p2.read());
}

void cnn::thread_tmp_25_1_1_cast_fu_3020_p1() {
    tmp_25_1_1_cast_fu_3020_p1 = esl_sext<33,32>(tmp_24_1_1_fu_3015_p2.read());
}

void cnn::thread_tmp_25_1_2_cast_fu_3119_p1() {
    tmp_25_1_2_cast_fu_3119_p1 = esl_sext<33,32>(tmp_24_1_2_fu_3114_p2.read());
}

void cnn::thread_tmp_25_1_3_cast_fu_3240_p1() {
    tmp_25_1_3_cast_fu_3240_p1 = esl_sext<33,32>(tmp_24_1_3_fu_3235_p2.read());
}

void cnn::thread_tmp_25_1_cast_fu_2917_p1() {
    tmp_25_1_cast_fu_2917_p1 = esl_sext<33,32>(tmp_24_1_fu_2912_p2.read());
}

void cnn::thread_tmp_25_2_1_cast_fu_3472_p1() {
    tmp_25_2_1_cast_fu_3472_p1 = esl_sext<33,32>(tmp_24_2_1_fu_3467_p2.read());
}

void cnn::thread_tmp_25_2_2_cast_fu_3571_p1() {
    tmp_25_2_2_cast_fu_3571_p1 = esl_sext<33,32>(tmp_24_2_2_fu_3566_p2.read());
}

void cnn::thread_tmp_25_2_3_cast_fu_3692_p1() {
    tmp_25_2_3_cast_fu_3692_p1 = esl_sext<33,32>(tmp_24_2_3_fu_3687_p2.read());
}

void cnn::thread_tmp_25_2_cast_fu_3369_p1() {
    tmp_25_2_cast_fu_3369_p1 = esl_sext<33,32>(tmp_24_2_fu_3364_p2.read());
}

void cnn::thread_tmp_25_3_1_cast_fu_3924_p1() {
    tmp_25_3_1_cast_fu_3924_p1 = esl_sext<33,32>(tmp_24_3_1_fu_3919_p2.read());
}

void cnn::thread_tmp_25_3_2_cast_fu_4023_p1() {
    tmp_25_3_2_cast_fu_4023_p1 = esl_sext<33,32>(tmp_24_3_2_fu_4018_p2.read());
}

void cnn::thread_tmp_25_3_3_cast_fu_4162_p1() {
    tmp_25_3_3_cast_fu_4162_p1 = esl_sext<33,32>(tmp_24_3_3_fu_4157_p2.read());
}

void cnn::thread_tmp_25_3_cast_fu_3821_p1() {
    tmp_25_3_cast_fu_3821_p1 = esl_sext<33,32>(tmp_24_3_fu_3816_p2.read());
}

void cnn::thread_tmp_25_fu_2318_p2() {
    tmp_25_fu_2318_p2 = (!r1_cast_reg_4529.read().is_01() || !tmp_24_reg_4620.read().is_01())? sc_lv<32>(): (sc_biguint<32>(r1_cast_reg_4529.read()) + sc_biguint<32>(tmp_24_reg_4620.read()));
}

void cnn::thread_tmp_26_0_1_fu_2551_p2() {
    tmp_26_0_1_fu_2551_p2 = (!chi_1_0_s_reg_4753.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_0_s_reg_4753.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_0_2_fu_2650_p2() {
    tmp_26_0_2_fu_2650_p2 = (!chi_1_0_1_reg_4840.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_0_1_reg_4840.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_0_3_fu_2771_p2() {
    tmp_26_0_3_fu_2771_p2 = (!chi_1_0_2_reg_4927.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_0_2_reg_4927.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_1_1_fu_3003_p2() {
    tmp_26_1_1_fu_3003_p2 = (!chi_1_1_s_reg_5151.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_1_s_reg_5151.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_1_2_fu_3102_p2() {
    tmp_26_1_2_fu_3102_p2 = (!chi_1_1_1_reg_5238.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_1_1_reg_5238.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_1_3_fu_3223_p2() {
    tmp_26_1_3_fu_3223_p2 = (!chi_1_1_2_reg_5325.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_1_2_reg_5325.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_1_fu_2899_p2() {
    tmp_26_1_fu_2899_p2 = (!chi_s_reg_940.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_s_reg_940.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_2_1_fu_3455_p2() {
    tmp_26_2_1_fu_3455_p2 = (!chi_1_2_s_reg_5549.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_2_s_reg_5549.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_2_2_fu_3554_p2() {
    tmp_26_2_2_fu_3554_p2 = (!chi_1_2_1_reg_5636.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_2_1_reg_5636.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_2_3_fu_3675_p2() {
    tmp_26_2_3_fu_3675_p2 = (!chi_1_2_2_reg_5723.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_2_2_reg_5723.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_2_fu_3351_p2() {
    tmp_26_2_fu_3351_p2 = (!chi_2_reg_952.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_2_reg_952.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_3_1_fu_3907_p2() {
    tmp_26_3_1_fu_3907_p2 = (!chi_1_3_s_reg_5946.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_3_s_reg_5946.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_3_2_fu_4006_p2() {
    tmp_26_3_2_fu_4006_p2 = (!chi_1_3_1_reg_6033.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_3_1_reg_6033.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_3_3_fu_4097_p2() {
    tmp_26_3_3_fu_4097_p2 = (!chi_1_3_2_fu_4081_p2.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_1_3_2_fu_4081_p2.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_3_fu_3803_p2() {
    tmp_26_3_fu_3803_p2 = (!chi_3_reg_964.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_3_reg_964.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_26_fu_2322_p2() {
    tmp_26_fu_2322_p2 = (!C_out_reg_4417.read().is_01() || !tmp_25_reg_4625.read().is_01())? sc_lv<32>(): sc_bigint<32>(C_out_reg_4417.read()) * sc_bigint<32>(tmp_25_reg_4625.read());
}

void cnn::thread_tmp_27_fu_2204_p2() {
    tmp_27_fu_2204_p2 = (!tmp_8_reg_4545.read().is_01() || !kr_cast_reg_4492.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_8_reg_4545.read()) + sc_biguint<32>(kr_cast_reg_4492.read()));
}

void cnn::thread_tmp_28_0_1_fu_2559_p2() {
    tmp_28_0_1_fu_2559_p2 = (!tmp_26_0_1_reg_4777.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_0_1_reg_4777.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_0_2_fu_2658_p2() {
    tmp_28_0_2_fu_2658_p2 = (!tmp_26_0_2_reg_4864.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_0_2_reg_4864.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_0_3_fu_2779_p2() {
    tmp_28_0_3_fu_2779_p2 = (!tmp_26_0_3_reg_4969.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_0_3_reg_4969.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_1_1_fu_3011_p2() {
    tmp_28_1_1_fu_3011_p2 = (!tmp_26_1_1_reg_5175.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_1_1_reg_5175.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_1_2_fu_3110_p2() {
    tmp_28_1_2_fu_3110_p2 = (!tmp_26_1_2_reg_5262.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_1_2_reg_5262.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_1_3_fu_3231_p2() {
    tmp_28_1_3_fu_3231_p2 = (!tmp_26_1_3_reg_5367.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_1_3_reg_5367.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_1_fu_2908_p2() {
    tmp_28_1_fu_2908_p2 = (!tmp_26_1_reg_5078.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_1_reg_5078.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_2_1_fu_3463_p2() {
    tmp_28_2_1_fu_3463_p2 = (!tmp_26_2_1_reg_5573.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_2_1_reg_5573.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_2_2_fu_3562_p2() {
    tmp_28_2_2_fu_3562_p2 = (!tmp_26_2_2_reg_5660.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_2_2_reg_5660.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_2_3_fu_3683_p2() {
    tmp_28_2_3_fu_3683_p2 = (!tmp_26_2_3_reg_5764.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_2_3_reg_5764.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_2_fu_3360_p2() {
    tmp_28_2_fu_3360_p2 = (!tmp_26_2_reg_5476.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_2_reg_5476.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_3_1_fu_3915_p2() {
    tmp_28_3_1_fu_3915_p2 = (!tmp_26_3_1_reg_5970.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_3_1_reg_5970.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_3_2_fu_4014_p2() {
    tmp_28_3_2_fu_4014_p2 = (!tmp_26_3_2_reg_6057.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_3_2_reg_6057.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_3_3_fu_4118_p2() {
    tmp_28_3_3_fu_4118_p2 = (!tmp_26_3_3_reg_6128.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_3_3_reg_6128.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_3_fu_3812_p2() {
    tmp_28_3_fu_3812_p2 = (!tmp_26_3_reg_5873.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_26_3_reg_5873.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_28_fu_2331_p2() {
    tmp_28_fu_2331_p2 = (!c1_cast_reg_4570.read().is_01() || !tmp_26_reg_4630.read().is_01())? sc_lv<32>(): (sc_biguint<32>(c1_cast_reg_4570.read()) + sc_biguint<32>(tmp_26_reg_4630.read()));
}

void cnn::thread_tmp_29_0_1_fu_2587_p2() {
    tmp_29_0_1_fu_2587_p2 = (!tmp_28_0_1_reg_4787.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_0_1_reg_4787.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_0_2_fu_2686_p2() {
    tmp_29_0_2_fu_2686_p2 = (!tmp_28_0_2_reg_4874.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_0_2_reg_4874.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_0_3_fu_2807_p2() {
    tmp_29_0_3_fu_2807_p2 = (!tmp_28_0_3_reg_4979.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_0_3_reg_4979.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_1_1_fu_3039_p2() {
    tmp_29_1_1_fu_3039_p2 = (!tmp_28_1_1_reg_5185.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_1_1_reg_5185.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_1_2_fu_3138_p2() {
    tmp_29_1_2_fu_3138_p2 = (!tmp_28_1_2_reg_5272.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_1_2_reg_5272.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_1_3_fu_3259_p2() {
    tmp_29_1_3_fu_3259_p2 = (!tmp_28_1_3_reg_5377.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_1_3_reg_5377.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_1_fu_2936_p2() {
    tmp_29_1_fu_2936_p2 = (!tmp_28_1_reg_5088.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_1_reg_5088.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_2_1_fu_3491_p2() {
    tmp_29_2_1_fu_3491_p2 = (!tmp_28_2_1_reg_5583.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_2_1_reg_5583.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_2_2_fu_3590_p2() {
    tmp_29_2_2_fu_3590_p2 = (!tmp_28_2_2_reg_5670.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_2_2_reg_5670.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_2_3_fu_3711_p2() {
    tmp_29_2_3_fu_3711_p2 = (!tmp_28_2_3_reg_5774.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_2_3_reg_5774.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_2_fu_3388_p2() {
    tmp_29_2_fu_3388_p2 = (!tmp_28_2_reg_5486.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_2_reg_5486.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_3_1_fu_3943_p2() {
    tmp_29_3_1_fu_3943_p2 = (!tmp_28_3_1_reg_5980.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_3_1_reg_5980.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_3_2_fu_4042_p2() {
    tmp_29_3_2_fu_4042_p2 = (!tmp_28_3_2_reg_6067.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_3_2_reg_6067.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_3_3_fu_4126_p2() {
    tmp_29_3_3_fu_4126_p2 = (!tmp_28_3_3_reg_6148.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_3_3_reg_6148.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_3_fu_3840_p2() {
    tmp_29_3_fu_3840_p2 = (!tmp_28_3_reg_5883.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_28_3_reg_5883.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_29_fu_2484_p2() {
    tmp_29_fu_2484_p2 = (!tmp_43_reg_4690.read().is_01() || !C_in_reg_4318.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_43_reg_4690.read()) * sc_bigint<32>(C_in_reg_4318.read());
}

void cnn::thread_tmp_30_fu_2228_p2() {
    tmp_30_fu_2228_p2 = (!kc_reg_882.read().is_01() || !tmp_11_reg_4586.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_11_reg_4586.read()));
}

void cnn::thread_tmp_31_0_1_fu_2591_p2() {
    tmp_31_0_1_fu_2591_p2 = (!tmp_29_0_1_reg_4798.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_0_1_reg_4798.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_0_2_fu_2690_p2() {
    tmp_31_0_2_fu_2690_p2 = (!tmp_29_0_2_reg_4885.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_0_2_reg_4885.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_0_3_fu_2811_p2() {
    tmp_31_0_3_fu_2811_p2 = (!tmp_29_0_3_reg_4990.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_0_3_reg_4990.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_1_1_fu_3043_p2() {
    tmp_31_1_1_fu_3043_p2 = (!tmp_29_1_1_reg_5196.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_1_1_reg_5196.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_1_2_fu_3142_p2() {
    tmp_31_1_2_fu_3142_p2 = (!tmp_29_1_2_reg_5283.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_1_2_reg_5283.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_1_3_fu_3263_p2() {
    tmp_31_1_3_fu_3263_p2 = (!tmp_29_1_3_reg_5388.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_1_3_reg_5388.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_1_fu_2940_p2() {
    tmp_31_1_fu_2940_p2 = (!tmp_29_1_reg_5099.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_1_reg_5099.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_2_1_fu_3495_p2() {
    tmp_31_2_1_fu_3495_p2 = (!tmp_29_2_1_reg_5594.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_2_1_reg_5594.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_2_2_fu_3594_p2() {
    tmp_31_2_2_fu_3594_p2 = (!tmp_29_2_2_reg_5681.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_2_2_reg_5681.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_2_3_fu_3715_p2() {
    tmp_31_2_3_fu_3715_p2 = (!tmp_29_2_3_reg_5785.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_2_3_reg_5785.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_2_fu_3392_p2() {
    tmp_31_2_fu_3392_p2 = (!tmp_29_2_reg_5497.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_2_reg_5497.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_3_1_fu_3947_p2() {
    tmp_31_3_1_fu_3947_p2 = (!tmp_29_3_1_reg_5991.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_3_1_reg_5991.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_3_2_fu_4046_p2() {
    tmp_31_3_2_fu_4046_p2 = (!tmp_29_3_2_reg_6078.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_3_2_reg_6078.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_3_3_fu_4134_p2() {
    tmp_31_3_3_fu_4134_p2 = (!tmp_29_3_3_reg_6158.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_3_3_reg_6158.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_3_fu_3844_p2() {
    tmp_31_3_fu_3844_p2 = (!tmp_29_3_reg_5894.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_3_reg_5894.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_31_fu_2488_p2() {
    tmp_31_fu_2488_p2 = (!tmp_29_reg_4701.read().is_01() || !tmp_30_reg_4591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_29_reg_4701.read()) + sc_biguint<32>(tmp_30_reg_4591.read()));
}

void cnn::thread_tmp_32_0_1_cast_fu_2595_p1() {
    tmp_32_0_1_cast_fu_2595_p1 = esl_sext<33,32>(tmp_31_0_1_fu_2591_p2.read());
}

void cnn::thread_tmp_32_0_2_cast_fu_2694_p1() {
    tmp_32_0_2_cast_fu_2694_p1 = esl_sext<33,32>(tmp_31_0_2_fu_2690_p2.read());
}

void cnn::thread_tmp_32_0_3_cast_fu_2815_p1() {
    tmp_32_0_3_cast_fu_2815_p1 = esl_sext<33,32>(tmp_31_0_3_fu_2811_p2.read());
}

void cnn::thread_tmp_32_1_1_cast_fu_3047_p1() {
    tmp_32_1_1_cast_fu_3047_p1 = esl_sext<33,32>(tmp_31_1_1_fu_3043_p2.read());
}

void cnn::thread_tmp_32_1_2_cast_fu_3146_p1() {
    tmp_32_1_2_cast_fu_3146_p1 = esl_sext<33,32>(tmp_31_1_2_fu_3142_p2.read());
}

void cnn::thread_tmp_32_1_3_cast_fu_3267_p1() {
    tmp_32_1_3_cast_fu_3267_p1 = esl_sext<33,32>(tmp_31_1_3_fu_3263_p2.read());
}

void cnn::thread_tmp_32_1_cast_fu_2944_p1() {
    tmp_32_1_cast_fu_2944_p1 = esl_sext<33,32>(tmp_31_1_fu_2940_p2.read());
}

void cnn::thread_tmp_32_2_1_cast_fu_3499_p1() {
    tmp_32_2_1_cast_fu_3499_p1 = esl_sext<33,32>(tmp_31_2_1_fu_3495_p2.read());
}

void cnn::thread_tmp_32_2_2_cast_fu_3598_p1() {
    tmp_32_2_2_cast_fu_3598_p1 = esl_sext<33,32>(tmp_31_2_2_fu_3594_p2.read());
}

void cnn::thread_tmp_32_2_3_cast_fu_3719_p1() {
    tmp_32_2_3_cast_fu_3719_p1 = esl_sext<33,32>(tmp_31_2_3_fu_3715_p2.read());
}

void cnn::thread_tmp_32_2_cast_fu_3396_p1() {
    tmp_32_2_cast_fu_3396_p1 = esl_sext<33,32>(tmp_31_2_fu_3392_p2.read());
}

void cnn::thread_tmp_32_3_1_cast_fu_3951_p1() {
    tmp_32_3_1_cast_fu_3951_p1 = esl_sext<33,32>(tmp_31_3_1_fu_3947_p2.read());
}

void cnn::thread_tmp_32_3_2_cast_fu_4050_p1() {
    tmp_32_3_2_cast_fu_4050_p1 = esl_sext<33,32>(tmp_31_3_2_fu_4046_p2.read());
}

void cnn::thread_tmp_32_3_3_cast_fu_4138_p1() {
    tmp_32_3_3_cast_fu_4138_p1 = esl_sext<33,32>(tmp_31_3_3_fu_4134_p2.read());
}

void cnn::thread_tmp_32_3_cast_fu_3848_p1() {
    tmp_32_3_cast_fu_3848_p1 = esl_sext<33,32>(tmp_31_3_fu_3844_p2.read());
}

void cnn::thread_tmp_32_cast_fu_2492_p1() {
    tmp_32_cast_fu_2492_p1 = esl_sext<33,32>(tmp_31_fu_2488_p2.read());
}

void cnn::thread_tmp_32_fu_2133_p1() {
    tmp_32_fu_2133_p1 = esl_zext<64,30>(tmp_18_reg_4203.read());
}

void cnn::thread_tmp_34_0_1_cast_fu_2622_p1() {
    tmp_34_0_1_cast_fu_2622_p1 = tmp_34_0_1_reg_4834.read();
}

void cnn::thread_tmp_34_0_2_cast_fu_2721_p1() {
    tmp_34_0_2_cast_fu_2721_p1 = tmp_34_0_2_reg_4921.read();
}

void cnn::thread_tmp_34_0_3_cast_fu_2842_p1() {
    tmp_34_0_3_cast_fu_2842_p1 = tmp_34_0_3_reg_5026.read();
}

void cnn::thread_tmp_34_1_1_cast_fu_3074_p1() {
    tmp_34_1_1_cast_fu_3074_p1 = tmp_34_1_1_reg_5232.read();
}

void cnn::thread_tmp_34_1_2_cast_fu_3173_p1() {
    tmp_34_1_2_cast_fu_3173_p1 = tmp_34_1_2_reg_5319.read();
}

void cnn::thread_tmp_34_1_3_cast_fu_3294_p1() {
    tmp_34_1_3_cast_fu_3294_p1 = tmp_34_1_3_reg_5424.read();
}

void cnn::thread_tmp_34_1_cast_fu_2975_p1() {
    tmp_34_1_cast_fu_2975_p1 = tmp_34_1_reg_5145.read();
}

void cnn::thread_tmp_34_2_1_cast_fu_3526_p1() {
    tmp_34_2_1_cast_fu_3526_p1 = tmp_34_2_1_reg_5630.read();
}

void cnn::thread_tmp_34_2_2_cast_fu_3625_p1() {
    tmp_34_2_2_cast_fu_3625_p1 = tmp_34_2_2_reg_5717.read();
}

void cnn::thread_tmp_34_2_3_cast_fu_3746_p1() {
    tmp_34_2_3_cast_fu_3746_p1 = tmp_34_2_3_reg_5821.read();
}

void cnn::thread_tmp_34_2_cast_fu_3427_p1() {
    tmp_34_2_cast_fu_3427_p1 = tmp_34_2_reg_5543.read();
}

void cnn::thread_tmp_34_3_1_cast_fu_3978_p1() {
    tmp_34_3_1_cast_fu_3978_p1 = tmp_34_3_1_reg_6027.read();
}

void cnn::thread_tmp_34_3_2_cast_fu_4077_p1() {
    tmp_34_3_2_cast_fu_4077_p1 = tmp_34_3_2_reg_6114.read();
}

void cnn::thread_tmp_34_3_3_cast_fu_4189_p1() {
    tmp_34_3_3_cast_fu_4189_p1 = tmp_34_3_3_reg_6205.read();
}

void cnn::thread_tmp_34_3_cast_fu_3879_p1() {
    tmp_34_3_cast_fu_3879_p1 = tmp_34_3_reg_5940.read();
}

void cnn::thread_tmp_34_cast_fu_2523_p1() {
    tmp_34_cast_fu_2523_p1 = tmp_34_reg_4747.read();
}

void cnn::thread_tmp_35_fu_2233_p3() {
    tmp_35_fu_2233_p3 = CHout_reg_4427.read().range(31, 31);
}

void cnn::thread_tmp_36_fu_2434_p2() {
    tmp_36_fu_2434_p2 = (!tmp_23_reg_4635.read().is_01() || !chi_reg_928.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_23_reg_4635.read()) + sc_bigint<32>(chi_reg_928.read()));
}

void cnn::thread_tmp_37_fu_2439_p2() {
    tmp_37_fu_2439_p2 = (!tmp_36_reg_4665.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_36_reg_4665.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_38_fu_2443_p2() {
    tmp_38_fu_2443_p2 = (!kr_cast_reg_4492.read().is_01() || !tmp_37_reg_4670.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kr_cast_reg_4492.read()) + sc_biguint<32>(tmp_37_reg_4670.read()));
}

void cnn::thread_tmp_39_fu_2452_p2() {
    tmp_39_fu_2452_p2 = (!tmp_38_reg_4675.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_38_reg_4675.read()) * sc_bigint<32>(K_reg_4339.read());
}

void cnn::thread_tmp_40_fu_2460_p2() {
    tmp_40_fu_2460_p2 = (!kc_reg_882.read().is_01() || !tmp_39_reg_4685.read().is_01())? sc_lv<32>(): (sc_biguint<32>(kc_reg_882.read()) + sc_biguint<32>(tmp_39_reg_4685.read()));
}

void cnn::thread_tmp_41_cast_fu_2465_p1() {
    tmp_41_cast_fu_2465_p1 = esl_sext<33,32>(tmp_40_fu_2460_p2.read());
}

void cnn::thread_tmp_41_fu_2245_p3() {
    tmp_41_fu_2245_p3 = CHout_op_op_fu_2240_p2.read().range(31, 31);
}

void cnn::thread_tmp_42_fu_2447_p2() {
    tmp_42_fu_2447_p2 = (!chi_reg_928.read().is_01() || !R_in_reg_4287.read().is_01())? sc_lv<32>(): sc_bigint<32>(chi_reg_928.read()) * sc_bigint<32>(R_in_reg_4287.read());
}

void cnn::thread_tmp_43_fu_2456_p2() {
    tmp_43_fu_2456_p2 = (!tmp_42_reg_4680.read().is_01() || !tmp_27_reg_4550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_42_reg_4680.read()) + sc_biguint<32>(tmp_27_reg_4550.read()));
}

void cnn::thread_tmp_44_cast_fu_2067_p1() {
    tmp_44_cast_fu_2067_p1 = esl_zext<33,30>(tmp_7_reg_4198.read());
}

void cnn::thread_tmp_44_fu_2274_p4() {
    tmp_44_fu_2274_p4 = CHout_op_op_fu_2240_p2.read().range(31, 2);
}

void cnn::thread_tmp_45_cast_fu_2070_p1() {
    tmp_45_cast_fu_2070_p1 = esl_zext<33,30>(tmp_18_reg_4203.read());
}

void cnn::thread_tmp_45_fu_2284_p3() {
    tmp_45_fu_2284_p3 = (!tmp_41_fu_2245_p3.read()[0].is_01())? sc_lv<30>(): ((tmp_41_fu_2245_p3.read()[0].to_bool())? p_neg_t_fu_2268_p2.read(): tmp_44_fu_2274_p4.read());
}

void cnn::thread_tmp_46_cast_fu_2073_p1() {
    tmp_46_cast_fu_2073_p1 = esl_zext<33,30>(tmp_22_reg_4209.read());
}

void cnn::thread_tmp_46_fu_2292_p3() {
    tmp_46_fu_2292_p3 = (!tmp_35_fu_2233_p3.read()[0].is_01())? sc_lv<30>(): ((tmp_35_fu_2233_p3.read()[0].to_bool())? ap_const_lv30_0: tmp_45_fu_2284_p3.read());
}

void cnn::thread_tmp_47_fu_2300_p3() {
    tmp_47_fu_2300_p3 = esl_concat<30,2>(tmp_46_fu_2292_p3.read(), ap_const_lv2_0);
}

void cnn::thread_tmp_48_fu_2308_p2() {
    tmp_48_fu_2308_p2 = (!cho_reg_916.read().is_01() || !tmp_47_reg_4611.read().is_01())? sc_lv<1>(): sc_lv<1>(cho_reg_916.read() == tmp_47_reg_4611.read());
}

void cnn::thread_tmp_49_fu_2354_p3() {
    tmp_49_fu_2354_p3 = CHin_reg_4454.read().range(31, 31);
}

void cnn::thread_tmp_4_fu_2057_p1() {
    tmp_4_fu_2057_p1 = esl_zext<64,30>(Parameter7_reg_4193.read());
}

void cnn::thread_tmp_50_fu_2366_p3() {
    tmp_50_fu_2366_p3 = CHin_op_op_fu_2361_p2.read().range(31, 31);
}

void cnn::thread_tmp_51_fu_2395_p4() {
    tmp_51_fu_2395_p4 = CHin_op_op_fu_2361_p2.read().range(31, 2);
}

void cnn::thread_tmp_52_fu_2405_p3() {
    tmp_52_fu_2405_p3 = (!tmp_50_fu_2366_p3.read()[0].is_01())? sc_lv<30>(): ((tmp_50_fu_2366_p3.read()[0].to_bool())? p_neg_t1_fu_2389_p2.read(): tmp_51_fu_2395_p4.read());
}

void cnn::thread_tmp_53_fu_2413_p3() {
    tmp_53_fu_2413_p3 = (!tmp_49_fu_2354_p3.read()[0].is_01())? sc_lv<30>(): ((tmp_49_fu_2354_p3.read()[0].to_bool())? ap_const_lv30_0: tmp_52_fu_2405_p3.read());
}

void cnn::thread_tmp_54_fu_2421_p3() {
    tmp_54_fu_2421_p3 = esl_concat<30,2>(tmp_53_fu_2413_p3.read(), ap_const_lv2_0);
}

void cnn::thread_tmp_55_fu_2429_p2() {
    tmp_55_fu_2429_p2 = (!chi_reg_928.read().is_01() || !tmp_54_reg_4653.read().is_01())? sc_lv<1>(): sc_lv<1>(chi_reg_928.read() == tmp_54_reg_4653.read());
}

void cnn::thread_tmp_56_fu_2881_p2() {
    tmp_56_fu_2881_p2 = (!chi_s_reg_940.read().is_01() || !tmp_54_reg_4653.read().is_01())? sc_lv<1>(): sc_lv<1>(chi_s_reg_940.read() == tmp_54_reg_4653.read());
}

void cnn::thread_tmp_57_fu_3333_p2() {
    tmp_57_fu_3333_p2 = (!chi_2_reg_952.read().is_01() || !tmp_54_reg_4653.read().is_01())? sc_lv<1>(): sc_lv<1>(chi_2_reg_952.read() == tmp_54_reg_4653.read());
}

void cnn::thread_tmp_58_fu_3785_p2() {
    tmp_58_fu_3785_p2 = (!chi_3_reg_964.read().is_01() || !tmp_54_reg_4653.read().is_01())? sc_lv<1>(): sc_lv<1>(chi_3_reg_964.read() == tmp_54_reg_4653.read());
}

void cnn::thread_tmp_5_fu_2129_p2() {
    tmp_5_fu_2129_p2 = (!tmp1_reg_4438.read().is_01() || !CHout_reg_4427.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp1_reg_4438.read()) * sc_bigint<32>(CHout_reg_4427.read());
}

void cnn::thread_tmp_6_fu_2147_p2() {
    tmp_6_fu_2147_p2 = (!i_cast_fu_2143_p1.read().is_01() || !tmp_5_reg_4448.read().is_01())? sc_lv<1>(): (sc_bigint<32>(i_cast_fu_2143_p1.read()) < sc_bigint<32>(tmp_5_reg_4448.read()));
}

void cnn::thread_tmp_8_fu_2199_p1() {
    tmp_8_fu_2199_p1 =  (sc_lv<31>) (r1_cast_fu_2184_p1.read());
}

void cnn::thread_tmp_8_fu_2199_p2() {
    tmp_8_fu_2199_p2 = (!S_reg_4384.read().is_01() || !tmp_8_fu_2199_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(S_reg_4384.read()) * sc_biguint<31>(tmp_8_fu_2199_p1.read());
}

void cnn::thread_tmp_9_fu_2162_p2() {
    tmp_9_fu_2162_p2 = (!kr_cast_fu_2158_p1.read().is_01() || !K_reg_4339.read().is_01())? sc_lv<1>(): (sc_bigint<32>(kr_cast_fu_2158_p1.read()) < sc_bigint<32>(K_reg_4339.read()));
}

void cnn::thread_tmp_s_fu_2188_p2() {
    tmp_s_fu_2188_p2 = (!r1_cast_fu_2184_p1.read().is_01() || !R_out_reg_4407.read().is_01())? sc_lv<1>(): (sc_bigint<32>(r1_cast_fu_2184_p1.read()) < sc_bigint<32>(R_out_reg_4407.read()));
}

}

