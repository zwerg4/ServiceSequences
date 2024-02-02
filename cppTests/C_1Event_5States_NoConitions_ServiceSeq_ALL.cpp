#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "C_1Event_5States_NoConitions_ServiceSeq_ALL_gen.cpp"
#endif

struct C_1Event_5States_NoConitions_TestFixture : public CFBTestFixtureBase {
C_1Event_5States_NoConitions_TestFixture() : 
CFBTestFixtureBase(g_nStringIdservSeq__C_1Event_5States_NoConitions) {
setInputData({});
setOutputData({});
CFBTestFixtureBase::setup();
}
};
BOOST_FIXTURE_TEST_SUITE(C_1Event_5States_NoConitionsTEST, C_1Event_5States_NoConitions_TestFixture)
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
BOOST_AUTO_TEST_SUITE_END()