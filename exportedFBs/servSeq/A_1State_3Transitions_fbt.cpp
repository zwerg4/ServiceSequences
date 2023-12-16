/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: A_1State_3Transitions
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-11-14/AK124910 -  -
 *************************************************************************/

#include "A_1State_3Transitions_fbt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "servSeq/A_1State_3Transitions_fbt_gen.cpp"
#endif

#include "criticalregion.h"
#include "resource.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_FB(FORTE_servSeq__A_1State_3Transitions, g_nStringIdservSeq__A_1State_3Transitions)

const TForteInt16 FORTE_servSeq__A_1State_3Transitions::scmEIWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_servSeq__A_1State_3Transitions::scmEventInputNames[] = {g_nStringIdEI1, g_nStringIdEI2, g_nStringIdEI3};
const SFBInterfaceSpec FORTE_servSeq__A_1State_3Transitions::scmFBInterfaceSpec = {
  3, scmEventInputNames, nullptr, scmEIWithIndexes,
  0, nullptr, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr,
  0, nullptr
};

FORTE_servSeq__A_1State_3Transitions::FORTE_servSeq__A_1State_3Transitions(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer) :
    CBasicFB(paContainer, &scmFBInterfaceSpec, paInstanceNameId, nullptr) {
}

void FORTE_servSeq__A_1State_3Transitions::executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) {
  do {
    switch(mECCState) {
      case scmStateSTART:
        if(scmEventEI1ID == paEIID) enterStateSTART(paECET);
        else
        if(scmEventEI2ID == paEIID) enterStateSTART(paECET);
        else
        if(scmEventEI3ID == paEIID) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 1.", mECCState.operator TForteUInt16 ());
        mECCState = 0; // 0 is always the initial state
        return;
    }
    paEIID = cgInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(true);
}

void FORTE_servSeq__A_1State_3Transitions::enterStateSTART(CEventChainExecutionThread *const) {
  mECCState = scmStateSTART;
}

void FORTE_servSeq__A_1State_3Transitions::readInputData(TEventID) {
  // nothing to do
}

void FORTE_servSeq__A_1State_3Transitions::writeOutputData(TEventID) {
  // nothing to do
}

CIEC_ANY *FORTE_servSeq__A_1State_3Transitions::getDI(size_t) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__A_1State_3Transitions::getDO(size_t) {
  return nullptr;
}

CEventConnection *FORTE_servSeq__A_1State_3Transitions::getEOConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection **FORTE_servSeq__A_1State_3Transitions::getDIConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection *FORTE_servSeq__A_1State_3Transitions::getDOConUnchecked(TPortId) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__A_1State_3Transitions::getVarInternal(size_t) {
  return nullptr;
}

