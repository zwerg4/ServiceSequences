#include "../../core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "A_1State_5Transitions_tester_gen.cpp"
#endif

struct A_1State_5Transitions_TestFixture : public CFBTestFixtureBase {
A_1State_5Transitions_TestFixture() : 
CFBTestFixtureBase(g_nStringIdA_1State_5Transitions) {
setInputData({});
setOutputData({});
CFBTestFixtureBase::setup();
}
};
BOOST_FIXTURE_TEST_SUITE(A_1State_5TransitionsTEST, A_1State_5Transitions_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_3) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_4) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_5) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_6) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_7) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_8) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_9) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_10) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_11) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_12) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_13) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_14) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_15) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_16) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_17) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_18) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_19) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_20) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_21) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_22) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_23) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_24) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_25) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_26) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_27) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_28) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_29) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_30) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_31) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_32) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_33) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_34) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_35) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_36) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_37) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_38) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_39) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_40) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_41) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_42) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_43) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_44) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_45) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_46) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_47) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_48) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_49) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_50) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_51) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_52) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_53) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_54) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_55) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_56) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_57) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_58) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_59) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_60) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_61) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_62) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_63) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_64) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_65) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_66) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_67) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_68) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_69) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_70) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_71) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_72) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_73) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_74) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_75) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_76) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_77) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_78) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_79) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_80) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_81) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_82) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_83) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_84) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_85) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_86) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_87) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_88) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_89) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_90) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_91) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_92) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_93) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_94) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_95) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_96) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_97) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_98) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_99) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_100) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_101) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_102) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_103) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_104) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_105) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_106) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_107) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_108) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_109) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_110) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_111) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_112) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_113) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_114) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_115) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_116) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_117) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_118) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_119) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_SUITE_END()