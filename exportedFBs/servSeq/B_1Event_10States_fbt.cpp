/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: B_1Event_10States
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-09-22/AK124910 -  -
 *************************************************************************/

#include "B_1Event_10States_fbt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "servSeq/B_1Event_10States_fbt_gen.cpp"
#endif

#include "criticalregion.h"
#include "resource.h"
#include "forte_bool.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_FB(FORTE_servSeq__B_1Event_10States, g_nStringIdservSeq__B_1Event_10States)

const TForteInt16 FORTE_servSeq__B_1Event_10States::scmEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_servSeq__B_1Event_10States::scmEventInputNames[] = {g_nStringIdEI1};
const SFBInterfaceSpec FORTE_servSeq__B_1Event_10States::scmFBInterfaceSpec = {
  1, scmEventInputNames, nullptr, scmEIWithIndexes,
  0, nullptr, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr,
  0, nullptr
};

FORTE_servSeq__B_1Event_10States::FORTE_servSeq__B_1Event_10States(const CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer) :
    CBasicFB(paContainer, &scmFBInterfaceSpec, paInstanceNameId, nullptr) {
}

void FORTE_servSeq__B_1Event_10States::executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) {
  do {
    switch(mECCState) {
      case scmStateSTART:
        if(scmEventEI1ID == paEIID) enterStateState_1(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_1:
        if(scmEventEI1ID == paEIID) enterStateState_2(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_2:
        if(scmEventEI1ID == paEIID) enterStateState_3(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_3:
        if(scmEventEI1ID == paEIID) enterStateState_4(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_4:
        if(scmEventEI1ID == paEIID) enterStateState_5(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_5:
        if(scmEventEI1ID == paEIID) enterStateState_6(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_6:
        if(scmEventEI1ID == paEIID) enterStateState_7(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_7:
        if(scmEventEI1ID == paEIID) enterStateState_8(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_8:
        if(scmEventEI1ID == paEIID) enterStateState_9(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_9:
        if(scmEventEI1ID == paEIID) enterStateState_10(paECET);
        else return; //no transition cleared
        break;
      case scmStateState_10:
        if(1) enterStateSTART(paECET);
        else return; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 11.", mECCState.operator TForteUInt16 ());
        mECCState = 0; // 0 is always the initial state
        return;
    }
    paEIID = cgInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(true);
}

void FORTE_servSeq__B_1Event_10States::enterStateSTART(CEventChainExecutionThread *const) {
  mECCState = scmStateSTART;
}

void FORTE_servSeq__B_1Event_10States::enterStateState_1(CEventChainExecutionThread *const) {
  mECCState = scmStateState_1;
}

void FORTE_servSeq__B_1Event_10States::enterStateState_2(CEventChainExecutionThread *const) {
  mECCState = scmStateState_2;
}

void FORTE_servSeq__B_1Event_10States::enterStateState_3(CEventChainExecutionThread *const) {
  mECCState = scmStateState_3;
}

void FORTE_servSeq__B_1Event_10States::enterStateState_4(CEventChainExecutionThread *const) {
  mECCState = scmStateState_4;
}

void FORTE_servSeq__B_1Event_10States::enterStateState_5(CEventChainExecutionThread *const) {
  mECCState = scmStateState_5;
}

void FORTE_servSeq__B_1Event_10States::enterStateState_6(CEventChainExecutionThread *const) {
  mECCState = scmStateState_6;
}

void FORTE_servSeq__B_1Event_10States::enterStateState_7(CEventChainExecutionThread *const) {
  mECCState = scmStateState_7;
}

void FORTE_servSeq__B_1Event_10States::enterStateState_8(CEventChainExecutionThread *const) {
  mECCState = scmStateState_8;
}

void FORTE_servSeq__B_1Event_10States::enterStateState_9(CEventChainExecutionThread *const) {
  mECCState = scmStateState_9;
}

void FORTE_servSeq__B_1Event_10States::enterStateState_10(CEventChainExecutionThread *const) {
  mECCState = scmStateState_10;
}

void FORTE_servSeq__B_1Event_10States::readInputData(TEventID) {
  // nothing to do
}

void FORTE_servSeq__B_1Event_10States::writeOutputData(TEventID) {
  // nothing to do
}

CIEC_ANY *FORTE_servSeq__B_1Event_10States::getDI(size_t) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__B_1Event_10States::getDO(size_t) {
  return nullptr;
}

CEventConnection *FORTE_servSeq__B_1Event_10States::getEOConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection **FORTE_servSeq__B_1Event_10States::getDIConUnchecked(TPortId) {
  return nullptr;
}

CDataConnection *FORTE_servSeq__B_1Event_10States::getDOConUnchecked(TPortId) {
  return nullptr;
}

CIEC_ANY *FORTE_servSeq__B_1Event_10States::getVarInternal(size_t) {
  return nullptr;
}

