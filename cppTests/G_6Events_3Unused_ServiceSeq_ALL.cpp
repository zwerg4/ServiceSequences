#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "G_6Events_3Unused_ServiceSeq_ALL_gen.cpp"
#endif

struct G_6Events_3Unused_TestFixture : public CFBTestFixtureBase {
G_6Events_3Unused_TestFixture() : 
CFBTestFixtureBase(g_nStringIdservSeq__G_6Events_3Unused) {
setInputData({});
setOutputData({&OutputString});
CFBTestFixtureBase::setup();
}
CIEC_STRING OutputString;
};
BOOST_FIXTURE_TEST_SUITE(G_6Events_3UnusedTEST, G_6Events_3Unused_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_3) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_4) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_5) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_6) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_7) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_8) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_9) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_10) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_11) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_12) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_13) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_14) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_15) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_16) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_17) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_18) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_19) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_20) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_21) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_22) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_23) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_24) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_25) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_26) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_27) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_28) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_29) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_30) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_31) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_32) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_33) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_34) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_35) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_36) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_37) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_38) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_39) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_40) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_41) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_42) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_43) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_44) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_45) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_46) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_47) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_48) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_49) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_50) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_51) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_52) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_53) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_54) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_55) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_56) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_57) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_58) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_59) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_60) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_61) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_62) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_63) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_64) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_65) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_66) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_67) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_68) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_69) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_70) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_71) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_72) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_73) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_74) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_75) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_76) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_77) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_78) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_79) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_80) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_81) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_82) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_83) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_84) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_85) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_86) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_87) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_88) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_89) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_90) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_91) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_92) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_93) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_94) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_95) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_96) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_97) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_98) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_99) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_100) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_101) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_102) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_103) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_104) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_105) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_106) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_107) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_108) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_109) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_110) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_111) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_112) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_113) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_114) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_115) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_116) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_117) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_118) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_119) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_120) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_121) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_122) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_123) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_124) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_125) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_126) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_127) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_128) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_129) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_130) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_131) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_132) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_133) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_134) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_135) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_136) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_137) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_138) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_139) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_140) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_141) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_142) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_143) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_144) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_145) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_146) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_147) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_148) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_149) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_150) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_151) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_152) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_153) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_154) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_155) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_156) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_157) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_158) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_159) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_160) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_161) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_162) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_163) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_164) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_165) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_166) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_167) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_168) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_169) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_170) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_171) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_172) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_173) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_174) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_175) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_176) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_177) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_178) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_179) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_180) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_181) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_182) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_183) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_184) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_185) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_186) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_187) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_188) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_189) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_190) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_191) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_192) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_193) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_194) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_195) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_196) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_197) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_198) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_199) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_200) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_201) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_202) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_203) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_204) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_205) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_206) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_207) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_208) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_209) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_210) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_211) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_212) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_213) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_214) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_215) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_216) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_217) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_218) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_219) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_220) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_221) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_222) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_223) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_224) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_225) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_226) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_227) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_228) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_229) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_230) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_231) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_232) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_233) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_234) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_235) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_236) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_237) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_238) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_239) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_240) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_241) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_242) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_243) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_244) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_245) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_246) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_247) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_248) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_249) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_250) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_251) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_252) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_253) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_254) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_255) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_256) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_257) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_258) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_259) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_260) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_261) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_262) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_263) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_264) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_265) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_266) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_267) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_268) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_269) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_270) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_271) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_272) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_273) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_274) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_275) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_276) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_277) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_278) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_279) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_280) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_281) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_282) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_283) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_284) {
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_285) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_286) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_287) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_288) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_289) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_290) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_291) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_292) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_293) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_294) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_295) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_296) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_297) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_298) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_299) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_300) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_301) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_302) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_303) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_304) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_305) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_306) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_307) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_308) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_309) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_310) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_311) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_312) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_313) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_314) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_315) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_316) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_317) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_318) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_319) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_320) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_321) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_322) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_323) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_324) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_325) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_326) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_327) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_328) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_329) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_330) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_331) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_332) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_333) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_334) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_335) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_336) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_337) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_338) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_339) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_340) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_341) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_342) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_343) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_344) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_345) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_346) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_347) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_348) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_349) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_350) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_351) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_352) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_353) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_354) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_355) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_356) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_357) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_358) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_359) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_360) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_361) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_362) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_363) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_364) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_365) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_366) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_367) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_368) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_369) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_370) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_371) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_372) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_373) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_374) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_375) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_376) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_377) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_378) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_379) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_380) {
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_381) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_382) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_383) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_384) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_385) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_386) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_387) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_388) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_389) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_390) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_391) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_392) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_393) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_394) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_395) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_396) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_397) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_398) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_399) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_400) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_401) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_402) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_403) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_404) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_405) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_406) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_407) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_408) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_409) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_410) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_411) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_412) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_413) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_414) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_415) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_416) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_417) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_418) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_419) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_420) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_421) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_422) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_423) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_424) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_425) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_426) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_427) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_428) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_429) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_430) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_431) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_432) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_433) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_434) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_435) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_436) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_437) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_438) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_439) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_440) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_441) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_442) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_443) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_444) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_445) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_446) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_447) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_448) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_449) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_450) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_451) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_452) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_453) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_454) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_455) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_456) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_457) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_458) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_459) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_460) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_461) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_462) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_463) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_464) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_465) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_466) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_467) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_468) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_469) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_470) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_471) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_472) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_473) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_474) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_475) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_476) {
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_477) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_478) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_479) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_480) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_481) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_482) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_483) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_484) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_485) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_486) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_487) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_488) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_489) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_490) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_491) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_492) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_493) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_494) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_495) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_496) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_497) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_498) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_499) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_500) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_501) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_502) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_503) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_504) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_505) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_506) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_507) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_508) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_509) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_510) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_511) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_512) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_513) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_514) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_515) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_516) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_517) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_518) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_519) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_520) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_521) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_522) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_523) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_524) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_525) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_526) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_527) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_528) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_529) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_530) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_531) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_532) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_533) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_534) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_535) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_536) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_537) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_538) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_539) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_540) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_541) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_542) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_543) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_544) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_545) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_546) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_547) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_548) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_549) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_550) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_551) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_552) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_553) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_554) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_555) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_556) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_557) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_558) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_559) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_560) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_561) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_562) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_563) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_564) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_565) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_566) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_567) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_568) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_569) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_570) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_571) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_572) {
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_573) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_574) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_575) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_576) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_577) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_578) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_579) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_580) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_581) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_582) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_583) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_584) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_585) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_586) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_587) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_588) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_589) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_590) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_591) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_592) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_593) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_594) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_595) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_596) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_597) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_598) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_599) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_600) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_601) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_602) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_603) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_604) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_605) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_606) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_607) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_608) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_609) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_610) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_611) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_612) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_613) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_614) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_615) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_616) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_617) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_618) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_619) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_620) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_621) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_622) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_623) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_624) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_625) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_626) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_627) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_628) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_629) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_630) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_631) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_632) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_633) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_634) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_635) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_636) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_637) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_638) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_639) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_640) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_641) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_642) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_643) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_644) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_645) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_646) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_647) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_648) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_649) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_650) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_651) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_652) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_653) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_654) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_655) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_656) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_657) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_658) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_659) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_660) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_661) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_662) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_663) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_664) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_665) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_666) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_667) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_668) {
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_669) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_670) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_671) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_672) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_673) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_674) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_675) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_676) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_677) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_678) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_679) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_680) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_681) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_682) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_683) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_684) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_685) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_686) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_687) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_688) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_689) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_690) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_691) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_692) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_693) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_694) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_695) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_696) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_697) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_698) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_699) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_700) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_701) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_702) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_703) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_704) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_705) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_706) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_707) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_708) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_709) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_710) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_711) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_712) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_713) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_714) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_715) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_716) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_717) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_718) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_719) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_720) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_721) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_722) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_723) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_724) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_725) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_726) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_727) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_728) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_729) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_730) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_731) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_732) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_733) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_734) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_735) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_736) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_737) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_738) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_739) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_740) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_741) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_742) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_743) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_744) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_745) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_746) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_747) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_748) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_749) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_750) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_751) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_752) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_753) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_754) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_755) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_756) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_757) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_758) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_759) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_760) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_761) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_762) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_763) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_764) {
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_765) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_766) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_767) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_768) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_769) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_770) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_771) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_772) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_773) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_774) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_775) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_776) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_777) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_778) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_779) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_780) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_781) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_782) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_783) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_784) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_785) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_786) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_787) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_788) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_789) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_790) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_791) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_792) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_793) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_794) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_795) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_796) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_797) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_798) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_799) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_800) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_801) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_802) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_803) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_804) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_805) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_806) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_807) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_808) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_809) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_810) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_811) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_812) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_813) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_814) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_815) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_816) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_817) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_818) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_819) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_820) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_821) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_822) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_823) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_824) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_825) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_826) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_827) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_828) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_829) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_830) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_831) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_832) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_833) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_834) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_835) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_836) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_837) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_838) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_839) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_840) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_841) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_842) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_843) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_844) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_845) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_846) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_847) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_848) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_849) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_850) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_851) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_852) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_853) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_854) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_855) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_856) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_857) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_858) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_859) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_860) {
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_861) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_862) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_863) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_864) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_865) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_866) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_867) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_868) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_869) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_870) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_871) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_872) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_873) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_874) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_875) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_876) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_877) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_878) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_879) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_880) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_881) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_882) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_883) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_884) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_885) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_886) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_887) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_888) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_889) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_890) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_891) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_892) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_893) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_894) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_895) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_896) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_897) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_898) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_899) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_900) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_901) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_902) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_903) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_904) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_905) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_906) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_907) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_908) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_909) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_910) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_911) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_912) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_913) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_914) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_915) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_916) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_917) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_918) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_919) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_920) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_921) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_922) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_923) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_924) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_925) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_926) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_927) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_928) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_929) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_930) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_931) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_932) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_933) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_934) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_935) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_936) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_937) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_938) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_939) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_940) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_941) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_942) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_943) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_944) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_945) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_946) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_947) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_948) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_949) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_950) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_951) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_952) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_953) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_954) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_955) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_956) {
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_957) {
setECCState(CIEC_STATE(1));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_958) {
setECCState(CIEC_STATE(2));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_959) {
setECCState(CIEC_STATE(3));
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_960) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_961) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_962) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_963) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_964) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_965) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_966) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_967) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_968) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_969) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_970) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_971) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_972) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_973) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_974) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_975) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_976) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_977) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_978) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_979) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_980) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_981) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_982) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_983) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_984) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_985) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_986) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_987) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_988) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_989) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_990) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_991) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_992) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_993) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_994) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_995) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_996) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_997) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_998) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_999) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1000) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1001) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1002) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1003) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1004) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1005) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1006) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1007) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1008) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1009) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1010) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1011) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1012) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1013) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1014) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1015) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1016) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1017) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1018) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1019) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1020) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1021) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1022) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1023) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1024) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1025) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1026) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1027) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1028) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1029) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1030) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1031) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1032) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1033) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1034) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1035) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1036) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1037) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1038) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1039) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1040) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1041) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1042) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1043) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1044) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1045) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1046) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1047) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1048) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1049) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1050) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1051) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1052) {
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1053) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1054) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1055) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1056) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1057) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1058) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1059) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1060) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1061) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1062) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1063) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1064) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1065) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1066) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1067) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1068) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1069) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1070) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1071) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1072) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1073) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1074) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1075) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1076) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1077) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1078) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1079) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1080) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1081) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1082) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1083) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1084) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1085) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1086) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1087) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1088) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1089) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1090) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1091) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1092) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1093) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1094) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1095) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1096) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1097) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1098) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1099) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1100) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1101) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1102) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1103) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1104) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1105) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1106) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1107) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1108) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1109) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1110) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1111) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1112) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1113) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1114) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1115) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1116) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1117) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1118) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1119) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1120) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1121) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1122) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1123) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1124) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1125) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1126) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1127) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1128) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1129) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1130) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1131) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1132) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1133) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1134) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1135) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1136) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1137) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1138) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1139) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1140) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1141) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1142) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1143) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1144) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1145) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1146) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1147) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1148) {
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1149) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1150) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1151) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1152) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1153) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1154) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1155) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1156) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1157) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1158) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1159) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1160) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1161) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1162) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1163) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1164) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1165) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1166) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1167) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1168) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1169) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1170) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1171) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1172) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1173) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1174) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1175) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1176) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1177) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1178) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1179) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1180) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1181) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1182) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1183) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1184) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1185) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1186) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1187) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1188) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1189) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1190) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1191) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1192) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1193) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1194) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1195) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1196) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1197) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1198) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1199) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1200) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1201) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1202) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1203) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1204) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1205) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1206) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1207) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1208) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1209) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1210) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1211) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1212) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1213) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1214) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1215) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1216) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1217) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1218) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1219) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1220) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1221) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1222) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1223) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1224) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1225) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1226) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1227) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1228) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1229) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1230) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1231) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1232) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1233) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1234) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1235) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1236) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1237) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1238) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1239) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1240) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1241) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1242) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1243) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1244) {
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1245) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1246) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1247) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1248) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1249) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1250) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1251) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1252) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1253) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1254) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1255) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1256) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1257) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1258) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1259) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1260) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1261) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1262) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1263) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1264) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1265) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1266) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1267) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1268) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1269) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1270) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1271) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1272) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1273) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1274) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1275) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1276) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1277) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1278) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1279) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1280) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1281) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1282) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1283) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1284) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1285) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1286) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1287) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1288) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1289) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1290) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1291) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1292) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1293) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1294) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1295) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1296) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1297) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1298) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1299) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1300) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1301) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1302) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1303) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1304) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1305) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1306) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1307) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1308) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1309) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1310) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1311) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1312) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1313) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1314) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1315) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1316) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1317) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1318) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1319) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1320) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1321) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1322) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1323) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1324) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1325) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1326) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1327) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1328) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1329) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1330) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1331) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1332) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1333) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1334) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1335) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1336) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1337) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1338) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1339) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1340) {
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1341) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1342) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1343) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1344) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1345) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1346) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1347) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1348) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1349) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1350) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1351) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1352) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1353) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1354) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1355) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1356) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1357) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1358) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1359) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1360) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1361) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1362) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1363) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1364) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1365) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1366) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1367) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1368) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1369) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1370) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1371) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1372) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1373) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1374) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1375) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1376) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1377) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1378) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1379) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1380) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1381) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1382) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1383) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1384) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1385) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1386) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1387) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1388) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1389) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1390) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1391) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1392) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1393) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1394) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1395) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1396) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1397) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1398) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1399) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1400) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1401) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1402) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1403) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1404) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1405) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1406) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1407) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1408) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1409) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1410) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1411) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1412) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1413) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1414) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1415) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1416) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1417) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1418) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1419) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1420) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1421) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1422) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1423) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1424) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1425) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1426) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1427) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1428) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1429) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1430) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1431) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1432) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1433) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1434) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1435) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1436) {
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1437) {
setECCState(CIEC_STATE(1));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1438) {
setECCState(CIEC_STATE(2));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1439) {
setECCState(CIEC_STATE(3));
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1440) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1441) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1442) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1443) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1444) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1445) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1446) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1447) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1448) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1449) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1450) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1451) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1452) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1453) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1454) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1455) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1456) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1457) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1458) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1459) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1460) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1461) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1462) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1463) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1464) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1465) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1466) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1467) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1468) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1469) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1470) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1471) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1472) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1473) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1474) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1475) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1476) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1477) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1478) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1479) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1480) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1481) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1482) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1483) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1484) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1485) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1486) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1487) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1488) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1489) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1490) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1491) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1492) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1493) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1494) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1495) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1496) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1497) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1498) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1499) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1500) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1501) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1502) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1503) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1504) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1505) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1506) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1507) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1508) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1509) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1510) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1511) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1512) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1513) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1514) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1515) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1516) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1517) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1518) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1519) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1520) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1521) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1522) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1523) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1524) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1525) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1526) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1527) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1528) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1529) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1530) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1531) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1532) {
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1533) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1534) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1535) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1536) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1537) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1538) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1539) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1540) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1541) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1542) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1543) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1544) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1545) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1546) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1547) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1548) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1549) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1550) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1551) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1552) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1553) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1554) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1555) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1556) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1557) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1558) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1559) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1560) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1561) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1562) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1563) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1564) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1565) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1566) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1567) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1568) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1569) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1570) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1571) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1572) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1573) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1574) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1575) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1576) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1577) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1578) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1579) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1580) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1581) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1582) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1583) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1584) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1585) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1586) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1587) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1588) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1589) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1590) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1591) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1592) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1593) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1594) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1595) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1596) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1597) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1598) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1599) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1600) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1601) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1602) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1603) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1604) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1605) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1606) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1607) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1608) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1609) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1610) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1611) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1612) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1613) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1614) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1615) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1616) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1617) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1618) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1619) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1620) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1621) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1622) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1623) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1624) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1625) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1626) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1627) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1628) {
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1629) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1630) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1631) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1632) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1633) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1634) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1635) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1636) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1637) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1638) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1639) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1640) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1641) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1642) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1643) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1644) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1645) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1646) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1647) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1648) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1649) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1650) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1651) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1652) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1653) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1654) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1655) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1656) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1657) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1658) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1659) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1660) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1661) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1662) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1663) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1664) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1665) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1666) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1667) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1668) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1669) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1670) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1671) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1672) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1673) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1674) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1675) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1676) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1677) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1678) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1679) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1680) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1681) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1682) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1683) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1684) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1685) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1686) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1687) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1688) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1689) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1690) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1691) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1692) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1693) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1694) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1695) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1696) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1697) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1698) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1699) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1700) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1701) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1702) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1703) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1704) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1705) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1706) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1707) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1708) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1709) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1710) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1711) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1712) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1713) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1714) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1715) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1716) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1717) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1718) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1719) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1720) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1721) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1722) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1723) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1724) {
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1725) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1726) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1727) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1728) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1729) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1730) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1731) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1732) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1733) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1734) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1735) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1736) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1737) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1738) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1739) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1740) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1741) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1742) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1743) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1744) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1745) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1746) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1747) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1748) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1749) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1750) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1751) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1752) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1753) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1754) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1755) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1756) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1757) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1758) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1759) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1760) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1761) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1762) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1763) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1764) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1765) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1766) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1767) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1768) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1769) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1770) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1771) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1772) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1773) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1774) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1775) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1776) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1777) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1778) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1779) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1780) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1781) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1782) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1783) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1784) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1785) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1786) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1787) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1788) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1789) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1790) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1791) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1792) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1793) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1794) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1795) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1796) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1797) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1798) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1799) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1800) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1801) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1802) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1803) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1804) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1805) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1806) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1807) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1808) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1809) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1810) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1811) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1812) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1813) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1814) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1815) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1816) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1817) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1818) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1819) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1820) {
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1821) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1822) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1823) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1824) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1825) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1826) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1827) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1828) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1829) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1830) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1831) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1832) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1833) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1834) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1835) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1836) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1837) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1838) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1839) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1840) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1841) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1842) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1843) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1844) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1845) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1846) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1847) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1848) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1849) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1850) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1851) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1852) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1853) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1854) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1855) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1856) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1857) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1858) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1859) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1860) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1861) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1862) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1863) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1864) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1865) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1866) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1867) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1868) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1869) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1870) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1871) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1872) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1873) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1874) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1875) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1876) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1877) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1878) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1879) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1880) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1881) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1882) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1883) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1884) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1885) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1886) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1887) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1888) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1889) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1890) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1891) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1892) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1893) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1894) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1895) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1896) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1897) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1898) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1899) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1900) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1901) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1902) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1903) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1904) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1905) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1906) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1907) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1908) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1909) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1910) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1911) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1912) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1913) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1914) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1915) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1916) {
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1917) {
setECCState(CIEC_STATE(1));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1918) {
setECCState(CIEC_STATE(2));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1919) {
setECCState(CIEC_STATE(3));
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1920) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1921) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1922) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1923) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1924) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1925) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1926) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1927) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1928) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1929) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1930) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1931) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1932) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1933) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1934) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1935) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1936) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1937) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1938) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1939) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1940) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1941) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1942) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1943) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1944) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1945) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1946) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1947) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1948) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1949) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1950) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1951) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1952) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1953) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1954) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1955) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1956) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1957) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1958) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1959) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1960) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1961) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1962) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1963) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1964) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1965) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1966) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1967) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1968) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1969) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1970) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1971) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1972) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1973) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1974) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1975) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1976) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1977) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1978) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1979) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1980) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1981) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1982) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1983) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1984) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1985) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1986) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1987) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1988) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1989) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1990) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1991) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1992) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1993) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1994) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1995) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1996) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1997) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1998) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1999) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2000) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2001) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2002) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2003) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2004) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2005) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2006) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2007) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2008) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2009) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2010) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2011) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2012) {
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2013) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2014) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2015) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2016) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2017) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2018) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2019) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2020) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2021) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2022) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2023) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2024) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2025) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2026) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2027) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2028) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2029) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2030) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2031) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2032) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2033) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2034) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2035) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2036) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2037) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2038) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2039) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2040) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2041) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2042) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2043) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2044) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2045) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2046) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2047) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2048) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2049) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2050) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2051) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2052) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2053) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2054) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2055) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2056) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2057) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2058) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2059) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2060) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2061) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2062) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2063) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2064) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2065) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2066) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2067) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2068) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2069) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2070) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2071) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2072) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2073) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2074) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2075) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2076) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2077) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2078) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2079) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2080) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2081) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2082) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2083) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2084) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2085) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2086) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2087) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2088) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2089) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2090) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2091) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2092) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2093) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2094) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2095) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2096) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2097) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2098) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2099) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2100) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2101) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2102) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2103) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2104) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2105) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2106) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2107) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2108) {
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2109) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2110) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2111) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2112) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2113) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2114) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2115) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2116) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2117) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2118) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2119) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2120) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2121) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2122) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2123) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2124) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2125) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2126) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2127) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2128) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2129) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2130) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2131) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2132) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2133) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2134) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2135) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2136) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2137) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2138) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2139) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2140) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2141) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2142) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2143) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2144) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2145) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2146) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2147) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2148) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2149) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2150) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2151) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2152) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2153) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2154) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2155) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2156) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2157) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2158) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2159) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2160) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2161) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2162) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2163) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2164) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2165) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2166) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2167) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2168) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2169) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2170) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2171) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2172) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2173) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2174) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2175) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2176) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2177) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2178) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2179) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2180) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2181) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2182) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2183) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2184) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2185) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2186) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2187) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2188) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2189) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2190) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2191) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2192) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2193) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2194) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2195) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2196) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2197) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2198) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2199) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2200) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2201) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2202) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2203) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2204) {
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2205) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2206) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2207) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2208) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2209) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2210) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2211) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2212) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2213) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2214) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2215) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2216) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2217) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2218) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2219) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2220) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2221) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2222) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2223) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2224) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2225) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2226) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2227) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2228) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2229) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2230) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2231) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2232) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2233) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2234) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2235) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2236) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2237) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2238) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2239) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2240) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2241) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2242) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2243) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2244) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2245) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2246) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2247) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2248) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2249) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2250) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2251) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2252) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2253) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2254) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2255) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2256) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2257) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2258) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2259) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2260) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2261) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2262) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2263) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(5);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2264) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2265) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2266) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2267) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(5);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2268) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2269) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2270) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2271) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(5);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2272) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2273) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2274) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2275) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2276) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2277) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2278) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2279) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2280) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2281) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2282) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2283) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2284) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2285) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2286) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2287) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2288) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2289) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2290) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2291) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2292) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2293) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2294) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2295) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2296) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2297) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2298) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2299) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2300) {
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2301) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2302) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2303) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(0);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2304) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2305) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2306) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2307) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2308) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2309) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2310) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2311) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2312) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2313) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2314) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2315) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2316) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2317) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2318) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2319) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2320) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2321) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2322) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2323) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2324) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2325) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2326) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2327) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2328) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2329) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2330) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2331) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2332) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2333) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2334) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2335) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2336) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2337) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2338) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2339) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2340) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2341) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2342) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2343) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2344) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2345) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2346) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2347) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2348) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2349) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2350) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2351) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2352) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2353) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2354) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2355) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2356) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2357) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2358) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2359) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2360) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2361) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2362) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2363) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2364) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2365) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2366) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2367) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2368) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2369) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2370) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2371) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2372) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2373) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2374) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2375) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2376) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2377) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2378) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2379) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2380) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2381) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2382) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2383) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2384) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2385) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2386) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2387) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2388) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2389) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2390) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2391) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2392) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2393) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2394) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2395) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2396) {
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2397) {
setECCState(CIEC_STATE(1));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2398) {
setECCState(CIEC_STATE(2));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2399) {
setECCState(CIEC_STATE(3));
triggerEvent(4);
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2400) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2401) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2402) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2403) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2404) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2405) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2406) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2407) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2408) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2409) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2410) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2411) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2412) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2413) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2414) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2415) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2416) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2417) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2418) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2419) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2420) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2421) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2422) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2423) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2424) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2425) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2426) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2427) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2428) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2429) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2430) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2431) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2432) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2433) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2434) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2435) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2436) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2437) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2438) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2439) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2440) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2441) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2442) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2443) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2444) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2445) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2446) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2447) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2448) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2449) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2450) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2451) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2452) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2453) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2454) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2455) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2456) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2457) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2458) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2459) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2460) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2461) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2462) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2463) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2464) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2465) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2466) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2467) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2468) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2469) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2470) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2471) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2472) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2473) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2474) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2475) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2476) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2477) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2478) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2479) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2480) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2481) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2482) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2483) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2484) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2485) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2486) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2487) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2488) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2489) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2490) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2491) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2492) {
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2493) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2494) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2495) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2496) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2497) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2498) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2499) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2500) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2501) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2502) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2503) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2504) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2505) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2506) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2507) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2508) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2509) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2510) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2511) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2512) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2513) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2514) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2515) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2516) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2517) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2518) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2519) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2520) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2521) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2522) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2523) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2524) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2525) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2526) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2527) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2528) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2529) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2530) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2531) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2532) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2533) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2534) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2535) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2536) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2537) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2538) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2539) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2540) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2541) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2542) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2543) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2544) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2545) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2546) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2547) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2548) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2549) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2550) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2551) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2552) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2553) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2554) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2555) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2556) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2557) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2558) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2559) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2560) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2561) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2562) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2563) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2564) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2565) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2566) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2567) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2568) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2569) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2570) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2571) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2572) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2573) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2574) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2575) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2576) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2577) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2578) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2579) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2580) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2581) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2582) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2583) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2584) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2585) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2586) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2587) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2588) {
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2589) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2590) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2591) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2592) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2593) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2594) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2595) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2596) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2597) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2598) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2599) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2600) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2601) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2602) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2603) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2604) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2605) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2606) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2607) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2608) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2609) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2610) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2611) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2612) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2613) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2614) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2615) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2616) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2617) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2618) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2619) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2620) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2621) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2622) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2623) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2624) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2625) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2626) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2627) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2628) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2629) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2630) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2631) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2632) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2633) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2634) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2635) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2636) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2637) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2638) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2639) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2640) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2641) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2642) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2643) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2644) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2645) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2646) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2647) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2648) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2649) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2650) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2651) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2652) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2653) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2654) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2655) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2656) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2657) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2658) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2659) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2660) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2661) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2662) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2663) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2664) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2665) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2666) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2667) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2668) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2669) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2670) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2671) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2672) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2673) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2674) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2675) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2676) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2677) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2678) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2679) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2680) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2681) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2682) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2683) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2684) {
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2685) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2686) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2687) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2688) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2689) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2690) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2691) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2692) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2693) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2694) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2695) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2696) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2697) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2698) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2699) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2700) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2701) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2702) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2703) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2704) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2705) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2706) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2707) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2708) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2709) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2710) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2711) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2712) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2713) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2714) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2715) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2716) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2717) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2718) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2719) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2720) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2721) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2722) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2723) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2724) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2725) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2726) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2727) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2728) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2729) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2730) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2731) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2732) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2733) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2734) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2735) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2736) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2737) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2738) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2739) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2740) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2741) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2742) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2743) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(0);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2744) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2745) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2746) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2747) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2748) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2749) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2750) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2751) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(0);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2752) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2753) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2754) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2755) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2756) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2757) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2758) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2759) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(1);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2760) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2761) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2762) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2763) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2764) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2765) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2766) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2767) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2768) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2769) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2770) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2771) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2772) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2773) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2774) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2775) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2776) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2777) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2778) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2779) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2780) {
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2781) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2782) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2783) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(4);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2784) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2785) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2786) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2787) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2788) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2789) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2790) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2791) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2792) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2793) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2794) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2795) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2796) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2797) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2798) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2799) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2800) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2801) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2802) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2803) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2804) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2805) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2806) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2807) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2808) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2809) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2810) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2811) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2812) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2813) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2814) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2815) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2816) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2817) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2818) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2819) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2820) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2821) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2822) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2823) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2824) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2825) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2826) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2827) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2828) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2829) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2830) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2831) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2832) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2833) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2834) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2835) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2836) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2837) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2838) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2839) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(3);
triggerEvent(1);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2840) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2841) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2842) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2843) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
triggerEvent(1);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2844) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2845) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2846) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2847) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(2);
triggerEvent(1);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2848) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2849) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2850) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2851) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2852) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2853) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2854) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2855) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(4);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2856) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2857) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2858) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2859) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2860) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2861) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2862) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2863) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(3);
triggerEvent(2);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2864) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2865) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2866) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2867) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(3);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2868) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2869) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2870) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2871) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(4);
triggerEvent(2);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2872) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2873) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2874) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2875) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(4);
triggerEvent(3);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2876) {
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2877) {
setECCState(CIEC_STATE(1));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2878) {
setECCState(CIEC_STATE(2));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2879) {
setECCState(CIEC_STATE(3));
triggerEvent(5);
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
}
BOOST_AUTO_TEST_SUITE_END()