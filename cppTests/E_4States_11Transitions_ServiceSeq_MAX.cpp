#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "E_4States_11Transitions_ServiceSeq_MAX_gen.cpp"
#endif

struct E_4States_11Transitions_TestFixture : public CFBTestFixtureBase {
E_4States_11Transitions_TestFixture() : 
CFBTestFixtureBase(g_nStringIdservSeq__E_4States_11Transitions) {
setInputData({});
setOutputData({&OutputString});
CFBTestFixtureBase::setup();
}
 CIEC_STRING OutputString;
};
BOOST_FIXTURE_TEST_SUITE(E_4States_11TransitionsTEST, E_4States_11Transitions_TestFixture)
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
triggerEvent(4);
triggerEvent(2);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_3) {
triggerEvent(0);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
triggerEvent(1);
}
BOOST_AUTO_TEST_SUITE_END()