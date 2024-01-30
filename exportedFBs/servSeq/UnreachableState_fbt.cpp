/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: UnreachableState
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-11-22/AK124910 -  -
 *************************************************************************/

#include "UnreachableState_fbt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "servSeq/UnreachableState_fbt_gen.cpp"
#endif

#include "criticalregion.h"
#include "resource.h"
#include "forte_int.h"
#include "forte_bool.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_FB(FORTE_servSeq__UnreachableState, g_nStringIdservSeq__UnreachableState)

const CStringDictionary::TStringId FORTE_servSeq__UnreachableState::scmDataInputNames[] = {g_nStringIdinput};
const CStringDictionary::TStringId FORTE_servSeq__UnreachableState::scmDataInputTypeIds[] = {g_nStringIdINT};
const TDataIOID FORTE_servSeq__UnreachableState::scmEIWith[] = {0, scmWithListDelimiter};
const TForteInt16 FORTE_servSeq__UnreachableState::scmEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_servSeq__UnreachableState::scmEventInputNames[] = {g_nStringIdEI1};
const TForteInt16 FORTE_servSeq__UnreachableState::scmEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_servSeq__UnreachableState::scmEventOutputNames[] = {g_nStringIdEO1};
const SFBInterfaceSpec FORTE_servSeq__UnreachableState::scmFBInterfaceSpec = {
  1, scmEventInputNames, scmEIWith, scmEIWithIndexes,
  1, scmEventOutputNames, nullptr, scmEOWithIndexes,
  1, scmDataInputNames, scmDataInputTypeIds,
  0, nullptr, nullptr,
  0, nullptr,
  0, nullptr
};

FORTE_servSeq__UnreachableState::FORTE_servSeq__UnreachableState(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer) :
    CBasicFB(paContainer, &scmFBInterfaceSpec, paInstanceNameId, nullptr),
    conn_EO1(this, 0),
    conn_input(nullptr) {
}

void FORTE_servSeq__UnreachableState::setInitialValues() {
  var_input = 0_INT;
}

void FORTE_servSeq__UnreachableState::executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) {
  do {
    switch(mECCState) {
      case scmStateSTART:
        if(scmEventEI1ID == paEIID) enterStateState(paECET);
        else return; //no transition cleared
        break;
      case scmStateState:
        if(func_EQ(var_input, 5_INT)) enterStateState_1(paECET);
        else
        if(func_LT(var_input, 5_INT)) enterStateState_2(paECET);
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
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 4.", mECCState.operator TForteUInt16 ());
        mECCState = 0; // 0 is always the initial state
        return;
    }
    paEIID = cgInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(true);
}

void FORTE_servSeq__UnreachableState::enterStateSTART(CEventChainExecutionThread *const) {
  mECCState = scmStateSTART;
}

void FORTE_servSeq__UnreachableState::enterStateState(CEventChainExecutionThread *const) {
  mECCState = scmStateState;
  alg_five();
}

void FORTE_servSeq__UnreachableState::enterStateState_1(CEventChainExecutionThread *const) {
  mECCState = scmStateState_1;
}

void FORTE_servSeq__UnreachableState::enterStateState_2(CEventChainExecutionThread *const paECET) {
  mECCState = scmStateState_2;
  sendOutputEvent(scmEventEO1ID, paECET);
}

void FORTE_servSeq__UnreachableState::readInputData(const TEventID paEIID) {
  switch(paEIID) {
    case scmEventEI1ID: {
      readData(0, var_input, conn_input);
      break;
    }
    default:
      break;
  }
}

void FORTE_servSeq__UnreachableState::writeOutputData(TEventID) {
  // nothing to do
}

CIEC_ANY *FORTE_servSeq__UnreachableState::getDI(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_input;
  }
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__UnreachableState::getDO(size_t) {
  return nullptr;
}

CEventConnection *FORTE_servSeq__UnreachableState::getEOConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_EO1;
  }
  return nullptr;
}

CDataConnection **FORTE_servSeq__UnreachableState::getDIConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_input;
  }
  return nullptr;
}

CDataConnection *FORTE_servSeq__UnreachableState::getDOConUnchecked(TPortId) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__UnreachableState::getVarInternal(size_t) {
  return nullptr;
}

void FORTE_servSeq__UnreachableState::alg_five(void) {

  #line 2 "UnreachableState.fbt"
  var_input = 5_INT;
}

