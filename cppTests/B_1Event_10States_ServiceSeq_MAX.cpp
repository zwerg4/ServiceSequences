#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "B_1Event_10States_ServiceSeq_MAX_gen.cpp"
#endif

struct B_1Event_10States_TestFixture : public CFBTestFixtureBase {
B_1Event_10States_TestFixture() : 
CFBTestFixtureBase(g_nStringIdservSeq__B_1Event_10States) {
setInputData({});
setOutputData({});
CFBTestFixtureBase::setup();
}
};
BOOST_FIXTURE_TEST_SUITE(B_1Event_10StatesTEST, B_1Event_10States_TestFixture)
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
BOOST_AUTO_TEST_CASE(ServiceSequence_7) {
setECCState(CIEC_STATE(7));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_8) {
setECCState(CIEC_STATE(8));
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_9) {
setECCState(CIEC_STATE(9));
triggerEvent(0);
}
BOOST_AUTO_TEST_SUITE_END()