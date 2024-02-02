#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "C_1Event_5States_NoConitions_ServiceSeq_MAX_gen.cpp"
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
BOOST_AUTO_TEST_SUITE_END()