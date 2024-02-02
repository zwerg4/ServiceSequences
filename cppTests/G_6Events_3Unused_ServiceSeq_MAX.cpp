#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "G_6Events_3Unused_ServiceSeq_gen.cpp"
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
BOOST_AUTO_TEST_SUITE_END()