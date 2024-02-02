#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "F_2States_2Algo2_ServiceSeq_MAX_gen.cpp"
#endif

struct F_2States_2Algo2_TestFixture : public CFBTestFixtureBase {
F_2States_2Algo2_TestFixture() : 
CFBTestFixtureBase(g_nStringIdservSeq__F_2States_2Algo2) {
setInputData({});
setOutputData({&OutputString});
CFBTestFixtureBase::setup();
}
CIEC_STRING OutputString;
};
BOOST_FIXTURE_TEST_SUITE(F_2States_2Algo2TEST, F_2States_2Algo2_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
BOOST_TEST(OutputString == CIEC_STRING('ALGO1/'));
BOOST_TEST(OutputString == CIEC_STRING('ALGO1/ALGO2/'));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1) {
setECCState(CIEC_STATE(1));
triggerEvent(0);
BOOST_TEST(OutputString == CIEC_STRING('ALGO2/'));
BOOST_TEST(OutputString == CIEC_STRING('ALGO2/ALGO1/'));
}
BOOST_AUTO_TEST_SUITE_END()