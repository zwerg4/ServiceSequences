#include "../../core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "F_1States_2Algo_tester_gen.cpp"
#endif

struct F_1States_2Algo_TestFixture : public CFBTestFixtureBase {
F_1States_2Algo_TestFixture() : 
CFBTestFixtureBase(g_nStringIdF_1States_2Algo) {
setInputData({});
setOutputData({&OutputString});
CFBTestFixtureBase::setup();
}
 OutputString;
};
BOOST_FIXTURE_TEST_SUITE(F_1States_2AlgoTEST, F_1States_2Algo_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/')));
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/ALGO2/')));
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/ALGO2/ALGO2/')));
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/ALGO2/ALGO2/ALGO1/')));
}
BOOST_AUTO_TEST_SUITE_END()