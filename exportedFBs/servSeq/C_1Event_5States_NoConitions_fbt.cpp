/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: C_1Event_5States_NoConitions
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-09-22/AK124910 -  -
 *************************************************************************/

#include "C_1Event_5States_NoConitions_fbt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "servSeq/C_1Event_5States_NoConitions_fbt_gen.cpp"
#endif

#include "criticalregion.h"
#include "resource.h"
#include "forte_bool.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_FB(FORTE_servSeq__C_1Event_5States_NoConitions, g_nStringIdservSeq__C_1Event_5States_NoConitions)

const TForteInt16 FORTE_servSeq__C_1Event_5States_NoConitions::scmEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_servSeq__C_1Event_5States_NoConitions::scmEventInputNames[] = {g_nStringIdEI1};
const SFBInterfaceSpec FORTE_servSeq__C_1Event_5States_NoConitions::scmFBInterfaceSpec = {
  1, scmEventInputNames, nullptr, scmEIWithIndexes,
  0, nullptr, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr,
  0, nullptr
};

FORTE_servSeq__C_1Event_5States_NoConitions::FORTE_servSeq__C_1Event_5States_NoConitions(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer) :
    CBasicFB(paContainer, &scmFBInterfaceSpec, paInstanceNameId, nullptr) {
}

void FORTE_servSeq__C_1Event_5States_NoConitions::executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) {
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

void FORTE_servSeq__C_1Event_5States_NoConitions::enterStateSTART(CEventChainExecutionThread *const) {
  mECCState = scmStateSTART;
}

void FORTE_servSeq__C_1Event_5States_NoConitions::enterStateState_1(CEventChainExecutionThread *const) {
  mECCState = scmStateState_1;
}

void FORTE_servSeq__C_1Event_5States_NoConitions::enterStateState_2(CEventChainExecutionThread *const) {
  mECCState = scmStateState_2;
}

void FORTE_servSeq__C_1Event_5States_NoConitions::enterStateState_3(CEventChainExecutionThread *const) {
  mECCState = scmStateState_3;
}

void FORTE_servSeq__C_1Event_5States_NoConitions::enterStateState_4(CEventChainExecutionThread *const) {
  mECCState = scmStateState_4;
}

void FORTE_servSeq__C_1Event_5States_NoConitions::enterStateState_5(CEventChainExecutionThread *const) {
  mECCState = scmStateState_5;
}

void FORTE_servSeq__C_1Event_5States_NoConitions::readInputData(TEventID) {
  // nothing to do
}

void FORTE_servSeq__C_1Event_5States_NoConitions::writeOutputData(TEventID) {
  // nothing to do
}

CIEC_ANY *FORTE_servSeq__C_1Event_5States_NoConitions::getDI(size_t) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__C_1Event_5States_NoConitions::getDO(size_t) {
  return nullptr;
}

CEventConnection *FORTE_servSeq__C_1Event_5States_NoConitions::getEOConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection **FORTE_servSeq__C_1Event_5States_NoConitions::getDIConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection *FORTE_servSeq__C_1Event_5States_NoConitions::getDOConUnchecked(TPortId) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__C_1Event_5States_NoConitions::getVarInternal(size_t) {
  return nullptr;
}

