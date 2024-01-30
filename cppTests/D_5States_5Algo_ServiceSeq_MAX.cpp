#include "../../core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "D_5States_5Algo_tester_gen.cpp"
#endif

struct D_5States_5Algo_TestFixture : public CFBTestFixtureBase {
D_5States_5Algo_TestFixture() : 
CFBTestFixtureBase(g_nStringIdD_5States_5Algo) {
setInputData({});
setOutputData({&OutputString});
CFBTestFixtureBase::setup();
}
 OutputString;
};
BOOST_FIXTURE_TEST_SUITE(D_5States_5AlgoTEST, D_5States_5Algo_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/')));
triggerEvent(1);
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/ALGO2/')));
triggerEvent(2);
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/ALGO2/ALGO3/')));
triggerEvent(3);
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/ALGO2/ALGO3/ALGO4/')));
triggerEvent(4);
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/ALGO2/ALGO3/ALGO4/ALGO5/')));
}
BOOST_AUTO_TEST_SUITE_END()