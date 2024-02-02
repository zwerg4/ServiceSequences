#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "D_5States_1Algo_ServiceSeq_ALL_gen.cpp"
#endif

struct D_5States_1Algo_TestFixture : public CFBTestFixtureBase {
D_5States_1Algo_TestFixture() : 
CFBTestFixtureBase(g_nStringIdservSeq__D_5States_1Algo) {
setInputData({});
setOutputData({&OutputString});
CFBTestFixtureBase::setup();
}
CIEC_STRING OutputString;
};
BOOST_FIXTURE_TEST_SUITE(D_5States_1AlgoTEST, D_5States_1Algo_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_3) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_4) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_5) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_6) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_7) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_8) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_9) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_10) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_11) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_12) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_13) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_14) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_15) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_16) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_17) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_18) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_19) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_20) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_21) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_22) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_23) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_24) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_25) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_26) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_27) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_28) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_29) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_30) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_31) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_32) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_33) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_34) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_35) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_36) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_37) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_38) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_39) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_40) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_41) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_42) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_43) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_44) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_45) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_46) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_47) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_48) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_49) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_50) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_51) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_52) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_53) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_54) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_55) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_56) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_57) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_58) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_59) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_60) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_61) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_62) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_63) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_64) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_65) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_66) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_67) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_68) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_69) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_70) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_71) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_72) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_73) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_74) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_75) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_76) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_77) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_78) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_79) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_80) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_81) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_82) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_83) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_84) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_85) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_86) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_87) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_88) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_89) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_90) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_91) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_92) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_93) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_94) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_95) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_96) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_97) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_98) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_99) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_100) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_101) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_102) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_103) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_104) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_105) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_106) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_107) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_108) {
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_109) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_110) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_111) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_112) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_113) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_114) {
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_115) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_116) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_117) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_118) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_119) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_120) {
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_121) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_122) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_123) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_124) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_125) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_126) {
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_127) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_128) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_129) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_130) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_131) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_132) {
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_133) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_134) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_135) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_136) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_137) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_138) {
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_139) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_140) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_141) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_142) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_143) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_144) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_145) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_146) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_147) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_148) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_149) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_150) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_151) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_152) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_153) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_154) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_155) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_156) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_157) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_158) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_159) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_160) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_161) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_162) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_163) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_164) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_165) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_166) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_167) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_168) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_169) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_170) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_171) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_172) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_173) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_174) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_175) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_176) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_177) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_178) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_179) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_180) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_181) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_182) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_183) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_184) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_185) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_186) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_187) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_188) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_189) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_190) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_191) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_192) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_193) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_194) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_195) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_196) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_197) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_198) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_199) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_200) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_201) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_202) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_203) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_204) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_205) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_206) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_207) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_208) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_209) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_210) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_211) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_212) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_213) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_214) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_215) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_216) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_217) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_218) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_219) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_220) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_221) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_222) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_223) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_224) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_225) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_226) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_227) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_228) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_229) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_230) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_231) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_232) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_233) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_234) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_235) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_236) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_237) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_238) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_239) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_240) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_241) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_242) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_243) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_244) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_245) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_246) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_247) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_248) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_249) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_250) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_251) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_252) {
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_253) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_254) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_255) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_256) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_257) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_258) {
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_259) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_260) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_261) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_262) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_263) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_264) {
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_265) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_266) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_267) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_268) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_269) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_270) {
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_271) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_272) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_273) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_274) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_275) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_276) {
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_277) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_278) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_279) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_280) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_281) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_282) {
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_283) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_284) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_285) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_286) {
setECCState(CIEC_STATE(4));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_287) {
setECCState(CIEC_STATE(5));
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_288) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_289) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_290) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_291) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_292) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_293) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_294) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_295) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_296) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_297) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_298) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_299) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_300) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_301) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_302) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_303) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_304) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_305) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_306) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_307) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_308) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_309) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_310) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_311) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_312) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_313) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_314) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_315) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_316) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_317) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_318) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_319) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_320) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_321) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_322) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_323) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_324) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_325) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_326) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_327) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_328) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_329) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_330) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_331) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_332) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_333) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_334) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_335) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_336) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_337) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_338) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_339) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_340) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_341) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_342) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_343) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_344) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_345) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_346) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_347) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_348) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_349) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_350) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_351) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_352) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_353) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_354) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_355) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_356) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_357) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_358) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_359) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_360) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_361) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_362) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_363) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_364) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_365) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_366) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_367) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_368) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_369) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_370) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_371) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_372) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_373) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_374) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_375) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_376) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_377) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_378) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_379) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_380) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_381) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_382) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_383) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_384) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_385) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_386) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_387) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_388) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_389) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_390) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_391) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_392) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_393) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_394) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_395) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_396) {
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_397) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_398) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_399) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_400) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_401) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_402) {
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_403) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_404) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_405) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_406) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_407) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_408) {
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_409) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_410) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_411) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_412) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_413) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_414) {
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_415) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_416) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_417) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_418) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_419) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_420) {
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_421) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_422) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_423) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_424) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_425) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_426) {
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_427) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_428) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_429) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_430) {
setECCState(CIEC_STATE(4));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_431) {
setECCState(CIEC_STATE(5));
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_432) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_433) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_434) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_435) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_436) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_437) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_438) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_439) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_440) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_441) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_442) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_443) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_444) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_445) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_446) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_447) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_448) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_449) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_450) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_451) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_452) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_453) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_454) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_455) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_456) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_457) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_458) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_459) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_460) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_461) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_462) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_463) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_464) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_465) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_466) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_467) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_468) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_469) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_470) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_471) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_472) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_473) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_474) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_475) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_476) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_477) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_478) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_479) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_480) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_481) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_482) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_483) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_484) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_485) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_486) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_487) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_488) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_489) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_490) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_491) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_492) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_493) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_494) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_495) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_496) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_497) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_498) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_499) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_500) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_501) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_502) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_503) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_504) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_505) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_506) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_507) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_508) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_509) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_510) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_511) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_512) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_513) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_514) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_515) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_516) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_517) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_518) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_519) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_520) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_521) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_522) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_523) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_524) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_525) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_526) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_527) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_528) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_529) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_530) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_531) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_532) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_533) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_534) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_535) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_536) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_537) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_538) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_539) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_540) {
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_541) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_542) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_543) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_544) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_545) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_546) {
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_547) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_548) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_549) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_550) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_551) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_552) {
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_553) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_554) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_555) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_556) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_557) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_558) {
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_559) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_560) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_561) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_562) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_563) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_564) {
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_565) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_566) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_567) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_568) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_569) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_570) {
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_571) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_572) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_573) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_574) {
setECCState(CIEC_STATE(4));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_575) {
setECCState(CIEC_STATE(5));
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_576) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_577) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_578) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_579) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_580) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_581) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_582) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_583) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_584) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_585) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_586) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_587) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_588) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_589) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_590) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_591) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_592) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_593) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_594) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_595) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_596) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_597) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_598) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_599) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_600) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_601) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_602) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_603) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_604) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_605) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_606) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_607) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_608) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_609) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_610) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_611) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_612) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_613) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_614) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_615) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_616) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_617) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_618) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_619) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_620) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_621) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_622) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_623) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_624) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_625) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_626) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_627) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_628) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_629) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_630) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_631) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_632) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_633) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_634) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_635) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_636) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_637) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_638) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_639) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_640) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_641) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_642) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_643) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_644) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_645) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_646) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_647) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_648) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_649) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_650) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_651) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_652) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_653) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_654) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_655) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_656) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_657) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_658) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_659) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_660) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_661) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_662) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_663) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_664) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_665) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_666) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_667) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_668) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_669) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_670) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_671) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_672) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_673) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_674) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_675) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_676) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_677) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_678) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_679) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_680) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_681) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_682) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_683) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_684) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_685) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_686) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_687) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_688) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_689) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_690) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_691) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_692) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_693) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_694) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_695) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_696) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_697) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_698) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_699) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_700) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_701) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_702) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_703) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_704) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_705) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_706) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_707) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_708) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_709) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_710) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_711) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_712) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_713) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_714) {
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_715) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_716) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_717) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_718) {
setECCState(CIEC_STATE(4));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_719) {
setECCState(CIEC_STATE(5));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_SUITE_END()