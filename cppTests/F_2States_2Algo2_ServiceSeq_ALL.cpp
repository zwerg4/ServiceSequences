#include "../../core/fbtests/fbtestfixture.h"
#include <forte_uint.h>
#include <forte_bool.h>
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "F_2States_2Algo2_tester_gen.cpp"
#endif

struct F_2States_2Algo2_TestFixture : public CFBTestFixtureBase {
F_2States_2Algo2_TestFixture() : 
CFBTestFixtureBase(g_nStringIdF_2States_2Algo2) {
setInputData({});
setOutputData({&OutputString});
CFBTestFixtureBase::setup();
}
 OutputString;
};
BOOST_FIXTURE_TEST_SUITE(F_2States_2Algo2TEST, F_2States_2Algo2_TestFixture)
BOOST_AUTO_TEST_CASE(ServiceSequence) {
triggerEvent(0);
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/')));
BOOST_ASSERT(func_EQ(OutputString,('ALGO1/ALGO2/')));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_1) {
triggerEvent(0);
BOOST_ASSERT(func_EQ(OutputString,('ALGO2/')));
BOOST_ASSERT(func_EQ(OutputString,('ALGO2/ALGO1/')));
}
BOOST_AUTO_TEST_CASE(ServiceSequence_2) {
triggerEvent(0);
}
BOOST_AUTO_TEST_SUITE_END()