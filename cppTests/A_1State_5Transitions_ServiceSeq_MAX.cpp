#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "A_1State_5Transitions_ServiceSeq_MAX_gen.cpp"
#endif

struct A_1State_5Transitions_TestFixture : public CFBTestFixtureBase {
A_1State_5Transitions_TestFixture() : 
CFBTestFixtureBase(g_nStringIdservSeq__A_1State_5Transitions) {
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
BOOST_AUTO_TEST_SUITE_END()