/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: E_4States_11Transitions
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-09-22/AK124910 -  -
 *************************************************************************/

#include "E_4States_11Transitions_fbt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "servSeq/E_4States_11Transitions_fbt_gen.cpp"
#endif

#include "criticalregion.h"
#include "resource.h"
#include "forte_string.h"
#include "forte_any_chars_variant.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_FB(FORTE_servSeq__E_4States_11Transitions, g_nStringIdservSeq__E_4States_11Transitions)

const CStringDictionary::TStringId FORTE_servSeq__E_4States_11Transitions::scmDataOutputNames[] = {g_nStringIdOutputString};
const CStringDictionary::TStringId FORTE_servSeq__E_4States_11Transitions::scmDataOutputTypeIds[] = {g_nStringIdSTRING};
const TForteInt16 FORTE_servSeq__E_4States_11Transitions::scmEIWithIndexes[] = {-1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_servSeq__E_4States_11Transitions::scmEventInputNames[] = {g_nStringIdEI1, g_nStringIdEI2, g_nStringIdEI3, g_nStringIdEI4, g_nStringIdReset};
const TDataIOID FORTE_servSeq__E_4States_11Transitions::scmEOWith[] = {0, scmWithListDelimiter};
const TForteInt16 FORTE_servSeq__E_4States_11Transitions::scmEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_servSeq__E_4States_11Transitions::scmEventOutputNames[] = {g_nStringIdAlgo1};
const SFBInterfaceSpec FORTE_servSeq__E_4States_11Transitions::scmFBInterfaceSpec = {
  5, scmEventInputNames, nullptr, scmEIWithIndexes,
  1, scmEventOutputNames, scmEOWith, scmEOWithIndexes,
  0, nullptr, nullptr,
  1, scmDataOutputNames, scmDataOutputTypeIds,
  0, nullptr,
  0, nullptr
};

FORTE_servSeq__E_4States_11Transitions::FORTE_servSeq__E_4States_11Transitions(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer) :
    CBasicFB(paContainer, &scmFBInterfaceSpec, paInstanceNameId, nullptr),
    var_conn_OutputString(var_OutputString),
    conn_Algo1(this, 0),
    conn_OutputString(this, 0, &var_conn_OutputString) {
}

void FORTE_servSeq__E_4States_11Transitions::setInitialValues() {
  var_OutputString = ""_STRING;
}

void FORTE_servSeq__E_4States_11Transitions::executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) {
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
        else return; //no transition cleared
        break;
      case scmStateState_1:
        if(scmEventResetID == paEIID) enterStateSTART(paECET);
        else
        if(scmEventEI2ID == paEIID) enterStateState_2(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_2:
        if(scmEventResetID == paEIID) enterStateSTART(paECET);
        else
        if(scmEventEI3ID == paEIID) enterStateState_3(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_3:
        if(scmEventResetID == paEIID) enterStateSTART(paECET);
        else
        if(scmEventEI4ID == paEIID) enterStateState_4(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_4:
        if(scmEventResetID == paEIID) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 5.", mECCState.operator TForteUInt16 ());
        mECCState = 0; // 0 is always the initial state
        return;
    }
    paEIID = cgInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(true);
}

void FORTE_servSeq__E_4States_11Transitions::enterStateSTART(CEventChainExecutionThread *const) {
  mECCState = scmStateSTART;
}

void FORTE_servSeq__E_4States_11Transitions::enterStateState_1(CEventChainExecutionThread *const) {
  mECCState = scmStateState_1;
}

void FORTE_servSeq__E_4States_11Transitions::enterStateState_2(CEventChainExecutionThread *const) {
  mECCState = scmStateState_2;
}

void FORTE_servSeq__E_4States_11Transitions::enterStateState_3(CEventChainExecutionThread *const) {
  mECCState = scmStateState_3;
}

void FORTE_servSeq__E_4States_11Transitions::enterStateState_4(CEventChainExecutionThread *const) {
  mECCState = scmStateState_4;
}

void FORTE_servSeq__E_4States_11Transitions::readInputData(TEventID) {
  // nothing to do
}

void FORTE_servSeq__E_4States_11Transitions::writeOutputData(const TEventID paEIID) {
  switch(paEIID) {
    case scmEventAlgo1ID: {
      writeData(0, var_OutputString, conn_OutputString);
      break;
    }
    default:
      break;
  }
}

CIEC_ANY *FORTE_servSeq__E_4States_11Transitions::getDI(size_t) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__E_4States_11Transitions::getDO(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_OutputString;
  }
  return nullptr;
}

CEventConnection *FORTE_servSeq__E_4States_11Transitions::getEOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_Algo1;
  }
  return nullptr;
}

CDataConnection **FORTE_servSeq__E_4States_11Transitions::getDIConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection *FORTE_servSeq__E_4States_11Transitions::getDOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_OutputString;
  }
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__E_4States_11Transitions::getVarInternal(size_t) {
  return nullptr;
}

void FORTE_servSeq__E_4States_11Transitions::alg_HWAlgo(void) {

  #line 2 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "H"_STRING);
  #line 3 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "E"_STRING);
  #line 4 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "L"_STRING);
  #line 5 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "L"_STRING);
  #line 6 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "O"_STRING);
  #line 7 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, " "_STRING);
  #line 8 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "W"_STRING);
  #line 9 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "O"_STRING);
  #line 10 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "R"_STRING);
  #line 11 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "L"_STRING);
  #line 12 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "D"_STRING);
  #line 13 "E_4States_11Transitions.fbt"
  var_OutputString = func_CONCAT(var_OutputString, "!"_STRING);
}

