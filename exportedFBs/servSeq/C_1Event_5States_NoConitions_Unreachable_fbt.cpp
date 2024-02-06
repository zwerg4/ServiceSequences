/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: C_1Event_5States_NoConitions_Unreachable
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-09-22/AK124910 -  -
 *************************************************************************/

#include "C_1Event_5States_NoConitions_Unreachable_fbt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "servSeq/C_1Event_5States_NoConitions_Unreachable_fbt_gen.cpp"
#endif

#include "criticalregion.h"
#include "resource.h"
#include "forte_bool.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_FB(FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable, g_nStringIdservSeq__C_1Event_5States_NoConitions_Unreachable)

const CStringDictionary::TStringId FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::scmDataInputNames[] = {g_nStringIdDI1};
const CStringDictionary::TStringId FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::scmDataInputTypeIds[] = {g_nStringIdBOOL};
const TForteInt16 FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::scmEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::scmEventInputNames[] = {g_nStringIdEI1};
const SFBInterfaceSpec FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::scmFBInterfaceSpec = {
  1, scmEventInputNames, nullptr, scmEIWithIndexes,
  0, nullptr, nullptr, nullptr,
  1, scmDataInputNames, scmDataInputTypeIds,
  0, nullptr, nullptr,
  0, nullptr,
  0, nullptr
};

FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer) :
    CBasicFB(paContainer, &scmFBInterfaceSpec, paInstanceNameId, nullptr),
    conn_DI1(nullptr) {
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::setInitialValues() {
  var_DI1 = 0_BOOL;
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) {
  do {
    switch(mECCState) {
      case scmStateSTART:
        if(scmEventEI1ID == paEIID) enterStateState_1(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_1:
        if(1) enterStateState_2(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_2:
        if(1) enterStateState_3(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_3:
        if(1) enterStateState_4(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_4:
        if(1) enterStateState_5(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_5:
        if(func_EQ(var_DI1, true_BOOL)) enterStateState_Unreachable(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_Unreachable:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 7.", mECCState.operator TForteUInt16 ());
        mECCState = 0; // 0 is always the initial state
        return;
    }
    paEIID = cgInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(true);
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::enterStateSTART(CEventChainExecutionThread *const) {
  mECCState = scmStateSTART;
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::enterStateState_1(CEventChainExecutionThread *const) {
  mECCState = scmStateState_1;
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::enterStateState_2(CEventChainExecutionThread *const) {
  mECCState = scmStateState_2;
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::enterStateState_3(CEventChainExecutionThread *const) {
  mECCState = scmStateState_3;
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::enterStateState_4(CEventChainExecutionThread *const) {
  mECCState = scmStateState_4;
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::enterStateState_5(CEventChainExecutionThread *const) {
  mECCState = scmStateState_5;
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::enterStateState_Unreachable(CEventChainExecutionThread *const) {
  mECCState = scmStateState_Unreachable;
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::readInputData(TEventID) {
  // nothing to do
}

void FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::writeOutputData(TEventID) {
  // nothing to do
}

CIEC_ANY *FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::getDI(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_DI1;
  }
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::getDO(size_t) {
  return nullptr;
}

CEventConnection *FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::getEOConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection **FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::getDIConUnchecked(const TPortId paIndex) {
  switch(paIndex) {
    case 0: return &conn_DI1;
  }
  return nullptr;
}

CDataConnection *FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::getDOConUnchecked(TPortId) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__C_1Event_5States_NoConitions_Unreachable::getVarInternal(size_t) {
  return nullptr;
}

