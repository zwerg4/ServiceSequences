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

#pragma once

#include "basicfb.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class FORTE_servSeq__B_1Event_10States final : public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_servSeq__B_1Event_10States)

  private:
    static const TEventID scmEventEI1ID = 0;
    static const TForteInt16 scmEIWithIndexes[];
    static const CStringDictionary::TStringId scmEventInputNames[];

    static const SFBInterfaceSpec scmFBInterfaceSpec;

    CIEC_ANY *getVarInternal(size_t) override;

    static const TForteInt16 scmStateSTART = 0;
    static const TForteInt16 scmStateState_1 = 1;
    static const TForteInt16 scmStateState_2 = 2;
    static const TForteInt16 scmStateState_3 = 3;
    static const TForteInt16 scmStateState_4 = 4;
    static const TForteInt16 scmStateState_5 = 5;
    static const TForteInt16 scmStateState_6 = 6;
    static const TForteInt16 scmStateState_7 = 7;
    static const TForteInt16 scmStateState_8 = 8;
    static const TForteInt16 scmStateState_9 = 9;
    static const TForteInt16 scmStateState_10 = 10;

    void enterStateSTART(CEventChainExecutionThread *const paECET);
    void enterStateState_1(CEventChainExecutionThread *const paECET);
    void enterStateState_2(CEventChainExecutionThread *const paECET);
    void enterStateState_3(CEventChainExecutionThread *const paECET);
    void enterStateState_4(CEventChainExecutionThread *const paECET);
    void enterStateState_5(CEventChainExecutionThread *const paECET);
    void enterStateState_6(CEventChainExecutionThread *const paECET);
    void enterStateState_7(CEventChainExecutionThread *const paECET);
    void enterStateState_8(CEventChainExecutionThread *const paECET);
    void enterStateState_9(CEventChainExecutionThread *const paECET);
    void enterStateState_10(CEventChainExecutionThread *const paECET);

    void executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) override;

    void readInputData(TEventID paEIID) override;
    void writeOutputData(TEventID paEIID) override;

  public:
    FORTE_servSeq__B_1Event_10States(CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer);

    CIEC_ANY *getDI(size_t) override;
    CIEC_ANY *getDO(size_t) override;
    CEventConnection *getEOConUnchecked(TPortId) override;
    CDataConnection **getDIConUnchecked(TPortId) override;
    CDataConnection *getDOConUnchecked(TPortId) override;

    void evt_EI1() {
      executeEvent(scmEventEI1ID, nullptr);
    }

    void operator()() {
      evt_EI1();
    }
};


