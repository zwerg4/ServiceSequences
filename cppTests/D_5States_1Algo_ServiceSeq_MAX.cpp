#include "../../core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "D_5States_1Algo_tester_gen.cpp"
#endif

struct D_5States_1Algo_TestFixture : public CFBTestFixtureBase {
D_5States_1Algo_TestFixture() : 
CFBTestFixtureBase(g_nStringIdD_5States_1Algo) {
setInputData({});
setOutputData({&OutputString});
CFBTestFixtureBase::setup();
}
 OutputString;
};
BOOST_FIXTURE_TEST_SUITE(D_5States_1AlgoTEST, D_5States_1Algo_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
triggerEvent(1);
triggerEvent(2);
triggerEvent(3);
triggerEvent(4);
BOOST_ASSERT(func_EQ(OutputString,('HELLO WORLD!')));
}
BOOST_AUTO_TEST_SUITE_END()