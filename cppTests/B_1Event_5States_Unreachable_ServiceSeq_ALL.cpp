#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "B_1Event_5States_Unreachable_ServiceSeq_ALL_gen.cpp"
#endif

struct B_1Event_5States_Unreachable_TestFixture : public CFBTestFixtureBase {
B_1Event_5States_Unreachable_TestFixture() : 
CFBTestFixtureBase(g_nStringIdservSeq__B_1Event_5States_Unreachable) {
setInputData({&DI1});
setOutputData({});
CFBTestFixtureBase::setup();
}
CIEC_BOOL DI1;
};
BOOST_FIXTURE_TEST_SUITE(B_1Event_5States_UnreachableTEST, B_1Event_5States_Unreachable_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2) {
setECCState(CIEC_STATE(2));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_3) {
setECCState(CIEC_STATE(3));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_4) {
setECCState(CIEC_STATE(4));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_5) {
setECCState(CIEC_STATE(5));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_6) {
setECCState(CIEC_STATE(6));
triggerEvent(0);
}
BOOST_AUTO_TEST_SUITE_END()