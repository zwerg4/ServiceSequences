/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: D_5States_5Algo
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-09-22/AK124910 -  -
 *************************************************************************/

#include "D_5States_5Algo_fbt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "servSeq/D_5States_5Algo_fbt_gen.cpp"
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

DEFINE_FIRMWARE_FB(FORTE_servSeq__D_5States_5Algo, g_nStringIdservSeq__D_5States_5Algo)

const CStringDictionary::TStringId FORTE_servSeq__D_5States_5Algo::scmDataOutputNames[] = {g_nStringIdOutputString};
const CStringDictionary::TStringId FORTE_servSeq__D_5States_5Algo::scmDataOutputTypeIds[] = {g_nStringIdSTRING};
const TForteInt16 FORTE_servSeq__D_5States_5Algo::scmEIWithIndexes[] = {-1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_servSeq__D_5States_5Algo::scmEventInputNames[] = {g_nStringIdEI1, g_nStringIdEI2, g_nStringIdEI3, g_nStringIdEI4, g_nStringIdEI5};
const TForteInt16 FORTE_servSeq__D_5States_5Algo::scmEOWithIndexes[] = {-1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_servSeq__D_5States_5Algo::scmEventOutputNames[] = {g_nStringIdAlgo1, g_nStringIdAlgo2, g_nStringIdAlgo3, g_nStringIdAlgo4, g_nStringIdAlgo5};
const SFBInterfaceSpec FORTE_servSeq__D_5States_5Algo::scmFBInterfaceSpec = {
  5, scmEventInputNames, nullptr, scmEIWithIndexes,
  5, scmEventOutputNames, nullptr, scmEOWithIndexes,
  0, nullptr, nullptr,
  1, scmDataOutputNames, scmDataOutputTypeIds,
  0, nullptr,
  0, nullptr
};

FORTE_servSeq__D_5States_5Algo::FORTE_servSeq__D_5States_5Algo(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer) :
    CBasicFB(paContainer, &scmFBInterfaceSpec, paInstanceNameId, nullptr),
    var_conn_OutputString(var_OutputString),
    conn_Algo1(this, 0),
    conn_Algo2(this, 1),
    conn_Algo3(this, 2),
    conn_Algo4(this, 3),
    conn_Algo5(this, 4),
    conn_OutputString(this, 0, &var_conn_OutputString) {
}

void FORTE_servSeq__D_5States_5Algo::setInitialValues() {
  var_OutputString = ""_STRING;
}

void FORTE_servSeq__D_5States_5Algo::executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) {
  do {
    switch(mECCState) {
      case scmStateSTART:
        if(scmEventEI1ID == paEIID) enterStateState_1(paECET);
        else
        if(scmEventEI2ID == paEIID) enterStateState_2(paECET);
        else
        if(scmEventEI3ID == paEIID) enterStateState_3(paECET);
        else
        if(scmEventEI4ID == paEIID) enterStateState_4(paECET);
        else
        if(scmEventEI5ID == paEIID) enterStateState_5(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_1:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_2:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_3:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_4:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_5:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 6.", mECCState.operator TForteUInt16 ());
        mECCState = 0; // 0 is always the initial state
        return;
    }
    paEIID = cgInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(true);
}

void FORTE_servSeq__D_5States_5Algo::enterStateSTART(CEventChainExecutionThread *const) {
  mECCState = scmStateSTART;
}

void FORTE_servSeq__D_5States_5Algo::enterStateState_1(CEventChainExecutionThread *const paECET) {
  mECCState = scmStateState_1;
  alg_ALGO1();
  sendOutputEvent(scmEventAlgo1ID, paECET);
}

void FORTE_servSeq__D_5States_5Algo::enterStateState_2(CEventChainExecutionThread *const paECET) {
  mECCState = scmStateState_2;
  alg_ALGO2();
  sendOutputEvent(scmEventAlgo2ID, paECET);
}

void FORTE_servSeq__D_5States_5Algo::enterStateState_3(CEventChainExecutionThread *const paECET) {
  mECCState = scmStateState_3;
  alg_ALGO3();
  sendOutputEvent(scmEventAlgo3ID, paECET);
}

void FORTE_servSeq__D_5States_5Algo::enterStateState_4(CEventChainExecutionThread *const paECET) {
  mECCState = scmStateState_4;
  alg_ALGO4();
  sendOutputEvent(scmEventAlgo4ID, paECET);
}

void FORTE_servSeq__D_5States_5Algo::enterStateState_5(CEventChainExecutionThread *const paECET) {
  mECCState = scmStateState_5;
  alg_ALGO5();
  sendOutputEvent(scmEventAlgo5ID, paECET);
}

void FORTE_servSeq__D_5States_5Algo::readInputData(TEventID) {
  // nothing to do
}

void FORTE_servSeq__D_5States_5Algo::writeOutputData(TEventID) {
  // nothing to do
}

CIEC_ANY *FORTE_servSeq__D_5States_5Algo::getDI(size_t) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__D_5States_5Algo::getDO(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_OutputString;
  }
  return nullptr;
}

CEventConnection *FORTE_servSeq__D_5States_5Algo::getEOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_Algo1;
    case 1: return &conn_Algo2;
    case 2: return &conn_Algo3;
    case 3: return &conn_Algo4;
    case 4: return &conn_Algo5;
  }
  return nullptr;
}

CDataConnection **FORTE_servSeq__D_5States_5Algo::getDIConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection *FORTE_servSeq__D_5States_5Algo::getDOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_OutputString;
  }
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__D_5States_5Algo::getVarInternal(size_t) {
  return nullptr;
}

void FORTE_servSeq__D_5States_5Algo::alg_ALGO1(void) {

  #line 2 "D_5States_5Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "ALGO1/"_STRING);
}

void FORTE_servSeq__D_5States_5Algo::alg_ALGO2(void) {

  #line 6 "D_5States_5Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "ALGO2/"_STRING);
}

void FORTE_servSeq__D_5States_5Algo::alg_ALGO3(void) {

  #line 10 "D_5States_5Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "ALGO3/"_STRING);
}

void FORTE_servSeq__D_5States_5Algo::alg_ALGO4(void) {

  #line 14 "D_5States_5Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "ALGO4/"_STRING);
}

void FORTE_servSeq__D_5States_5Algo::alg_ALGO5(void) {

  #line 18 "D_5States_5Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "ALGO5/"_STRING);
}

