/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: D_5States_1Algo
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-09-22/AK124910 -  -
 *************************************************************************/

#include "D_5States_1Algo_fbt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "servSeq/D_5States_1Algo_fbt_gen.cpp"
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

DEFINE_FIRMWARE_FB(FORTE_servSeq__D_5States_1Algo, g_nStringIdservSeq__D_5States_1Algo)

const CStringDictionary::TStringId FORTE_servSeq__D_5States_1Algo::scmDataOutputNames[] = {g_nStringIdOutputString};
const CStringDictionary::TStringId FORTE_servSeq__D_5States_1Algo::scmDataOutputTypeIds[] = {g_nStringIdSTRING};
const TForteInt16 FORTE_servSeq__D_5States_1Algo::scmEIWithIndexes[] = {-1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_servSeq__D_5States_1Algo::scmEventInputNames[] = {g_nStringIdEI1, g_nStringIdEI2, g_nStringIdEI3, g_nStringIdEI4, g_nStringIdPrintHelloWorld};
const TForteInt16 FORTE_servSeq__D_5States_1Algo::scmEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_servSeq__D_5States_1Algo::scmEventOutputNames[] = {g_nStringIdAlgo1};
const SFBInterfaceSpec FORTE_servSeq__D_5States_1Algo::scmFBInterfaceSpec = {
  5, scmEventInputNames, nullptr, scmEIWithIndexes,
  1, scmEventOutputNames, nullptr, scmEOWithIndexes,
  0, nullptr, nullptr,
  1, scmDataOutputNames, scmDataOutputTypeIds,
  0, nullptr,
  0, nullptr
};

FORTE_servSeq__D_5States_1Algo::FORTE_servSeq__D_5States_1Algo(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer) :
    CBasicFB(paContainer, &scmFBInterfaceSpec, paInstanceNameId, nullptr),
    var_conn_OutputString(var_OutputString),
    conn_Algo1(this, 0),
    conn_OutputString(this, 0, &var_conn_OutputString) {
}

void FORTE_servSeq__D_5States_1Algo::setInitialValues() {
  var_OutputString = ""_STRING;
}

void FORTE_servSeq__D_5States_1Algo::executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) {
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
        if(scmEventPrintHelloWorldID == paEIID) enterStateHW(paECET);
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
      case scmStateHW:
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

void FORTE_servSeq__D_5States_1Algo::enterStateSTART(CEventChainExecutionThread *const) {
  mECCState = scmStateSTART;
}

void FORTE_servSeq__D_5States_1Algo::enterStateState_1(CEventChainExecutionThread *const) {
  mECCState = scmStateState_1;
}

void FORTE_servSeq__D_5States_1Algo::enterStateState_2(CEventChainExecutionThread *const) {
  mECCState = scmStateState_2;
}

void FORTE_servSeq__D_5States_1Algo::enterStateState_3(CEventChainExecutionThread *const) {
  mECCState = scmStateState_3;
}

void FORTE_servSeq__D_5States_1Algo::enterStateState_4(CEventChainExecutionThread *const) {
  mECCState = scmStateState_4;
}

void FORTE_servSeq__D_5States_1Algo::enterStateHW(CEventChainExecutionThread *const paECET) {
  mECCState = scmStateHW;
  alg_HWAlgo();
  sendOutputEvent(scmEventAlgo1ID, paECET);
}

void FORTE_servSeq__D_5States_1Algo::readInputData(TEventID) {
  // nothing to do
}

void FORTE_servSeq__D_5States_1Algo::writeOutputData(TEventID) {
  // nothing to do
}

CIEC_ANY *FORTE_servSeq__D_5States_1Algo::getDI(size_t) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__D_5States_1Algo::getDO(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_OutputString;
  }
  return nullptr;
}

CEventConnection *FORTE_servSeq__D_5States_1Algo::getEOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_Algo1;
  }
  return nullptr;
}

CDataConnection **FORTE_servSeq__D_5States_1Algo::getDIConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection *FORTE_servSeq__D_5States_1Algo::getDOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_OutputString;
  }
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__D_5States_1Algo::getVarInternal(size_t) {
  return nullptr;
}

void FORTE_servSeq__D_5States_1Algo::alg_HWAlgo(void) {

  #line 2 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "H"_STRING);
  #line 3 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "E"_STRING);
  #line 4 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "L"_STRING);
  #line 5 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "L"_STRING);
  #line 6 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "O"_STRING);
  #line 7 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, " "_STRING);
  #line 8 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "W"_STRING);
  #line 9 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "O"_STRING);
  #line 10 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "R"_STRING);
  #line 11 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "L"_STRING);
  #line 12 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "D"_STRING);
  #line 13 "D_5States_1Algo.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "!"_STRING);
}

