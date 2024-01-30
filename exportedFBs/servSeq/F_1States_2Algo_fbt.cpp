/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: F_1States_2Algo
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-09-22/AK124910 -  -
 *************************************************************************/

#include "F_1States_2Algo_fbt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "servSeq/F_1States_2Algo_fbt_gen.cpp"
#endif

#include "criticalregion.h"
#include "resource.h"
#include "forte_string.h"
#include "forte_any_chars_variant.h"
#include "forte_bool.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_FB(FORTE_servSeq__F_1States_2Algo, g_nStringIdservSeq__F_1States_2Algo)

const CStringDictionary::TStringId FORTE_servSeq__F_1States_2Algo::scmDataOutputNames[] = {g_nStringIdOutputString};
const CStringDictionary::TStringId FORTE_servSeq__F_1States_2Algo::scmDataOutputTypeIds[] = {g_nStringIdSTRING};
const TForteInt16 FORTE_servSeq__F_1States_2Algo::scmEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_servSeq__F_1States_2Algo::scmEventInputNames[] = {g_nStringIdEI1};
const TForteInt16 FORTE_servSeq__F_1States_2Algo::scmEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_servSeq__F_1States_2Algo::scmEventOutputNames[] = {g_nStringIdAlgo1};
const SFBInterfaceSpec FORTE_servSeq__F_1States_2Algo::scmFBInterfaceSpec = {
  1, scmEventInputNames, nullptr, scmEIWithIndexes,
  1, scmEventOutputNames, nullptr, scmEOWithIndexes,
  0, nullptr, nullptr,
  1, scmDataOutputNames, scmDataOutputTypeIds,
  0, nullptr,
  0, nullptr
};

FORTE_servSeq__F_1States_2Algo::FORTE_servSeq__F_1States_2Algo(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer) :
    CBasicFB(paContainer, &scmFBInterfaceSpec, paInstanceNameId, nullptr),
    var_conn_OutputString(var_OutputString),
    conn_Algo1(this, 0),
    conn_OutputString(this, 0, &var_conn_OutputString) {
}

void FORTE_servSeq__F_1States_2Algo::setInitialValues() {
  var_OutputString = ""_STRING;
}

void FORTE_servSeq__F_1States_2Algo::executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) {
  do {
    switch(mECCState) {
      case scmStateSTART:
        if(scmEventEI1ID == paEIID) enterStateState_1(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_1:
        if(1) enterStateState(paECET);
        else return; //no transition cleared
        break;
      case scmStateState:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 3.", mECCState.operator TForteUInt16 ());
        mECCState = 0; // 0 is always the initial state
        return;
    }
    paEIID = cgInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(true);
}

void FORTE_servSeq__F_1States_2Algo::enterStateSTART(CEventChainExecutionThread *const) {
  mECCState = scmStateSTART;
}

void FORTE_servSeq__F_1States_2Algo::enterStateState_1(CEventChainExecutionThread *const paECET) {
  mECCState = scmStateState_1;
  alg_ALGO1();
  sendOutputEvent(scmEventAlgo1ID, paECET);
  alg_ALGO2();
  sendOutputEvent(scmEventAlgo1ID, paECET);
}

void FORTE_servSeq__F_1States_2Algo::enterStateState(CEventChainExecutionThread *const paECET) {
  mECCState = scmStateState;
  alg_ALGO2();
  sendOutputEvent(scmEventAlgo1ID, paECET);
  alg_ALGO1();
  sendOutputEvent(scmEventAlgo1ID, paECET);
}

void FORTE_servSeq__F_1States_2Algo::readInputData(TEventID) {
  // nothing to do
}

void FORTE_servSeq__F_1States_2Algo::writeOutputData(TEventID) {
  // nothing to do
}

CIEC_ANY *FORTE_servSeq__F_1States_2Algo::getDI(size_t) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__F_1States_2Algo::getDO(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_OutputString;
  }
  return nullptr;
}

CEventConnection *FORTE_servSeq__F_1States_2Algo::getEOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_Algo1;
  }
  return nullptr;
}

CDataConnection **FORTE_servSeq__F_1States_2Algo::getDIConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection *FORTE_servSeq__F_1States_2Algo::getDOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_OutputString;
  }
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__F_1States_2Algo::getVarInternal(size_t) {
  return nullptr;
}

void FORTE_servSeq__F_1States_2Algo::alg_ALGO1(void) {

  #line 2 "F_1States_2Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "ALGO1/"_STRING);
}

void FORTE_servSeq__F_1States_2Algo::alg_ALGO2(void) {

  #line 6 "F_1States_2Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "ALGO2/"_STRING);
}

