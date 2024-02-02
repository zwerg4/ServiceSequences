#include "core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "D_5States_1Algo_ServiceSeq_MAX_gen.cpp"
#endif

struct D_5States_1Algo_TestFixture : public CFBTestFixtureBase {
D_5States_1Algo_TestFixture() : 
CFBTestFixtureBase(g_nStringIdservSeq__D_5States_1Algo) {
setInputData({});
setOutputData({&OutputString});
CFBTestFixtureBase::setup();
}
CIEC_STRING OutputString;
};
BOOST_FIXTURE_TEST_SUITE(D_5States_1AlgoTEST, D_5States_1Algo_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_TEST(OutputString == CIEC_STRING('HELLO WORLD!'));
}
BOOST_AUTO_TEST_SUITE_END()