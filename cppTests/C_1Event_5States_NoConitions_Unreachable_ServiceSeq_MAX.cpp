#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "C_1Event_5States_NoConitions_Unreachable_ServiceSeq_MAX_gen.cpp"
#endif

struct C_1Event_5States_NoConitions_Unreachable_TestFixture : public CFBTestFixtureBase {
C_1Event_5States_NoConitions_Unreachable_TestFixture() : 
CFBTestFixtureBase(g_nStringIdservSeq__C_1Event_5States_NoConitions_Unreachable) {
setInputData({&DI1});
setOutputData({});
CFBTestFixtureBase::setup();
}
CIEC_BOOL DI1;
};
BOOST_FIXTURE_TEST_SUITE(C_1Event_5States_NoConitions_UnreachableTEST, C_1Event_5States_NoConitions_Unreachable_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1) {
setECCState(CIEC_STATE(6));
triggerEvent(0);
}
BOOST_AUTO_TEST_SUITE_END()