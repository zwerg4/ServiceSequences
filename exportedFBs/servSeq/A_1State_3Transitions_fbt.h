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

#pragma once

#include "basicfb.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class FORTE_servSeq__A_1State_3Transitions final : public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_servSeq__A_1State_3Transitions)

  private:
    static const TEventID scmEventEI1ID = 0;
    static const TEventID scmEventEI2ID = 1;
    static const TEventID scmEventEI3ID = 2;
    static const TForteInt16 scmEIWithIndexes[];
    static const CStringDictionary::TStringId scmEventInputNames[];

    static const SFBInterfaceSpec scmFBInterfaceSpec;

    CIEC_ANY *getVarInternal(size_t) override;

    static const TForteInt16 scmStateSTART = 0;

    void enterStateSTART(CEventChainExecutionThread *const paECET);

    void executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) override;

    void readInputData(TEventID paEIID) override;
    void writeOutputData(TEventID paEIID) override;

  public:
    FORTE_servSeq__A_1State_3Transitions(CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer);

    CIEC_ANY *getDI(size_t) override;
    CIEC_ANY *getDO(size_t) override;
    CEventConnection *getEOConUnchecked(TPortId) override;
    CDataConnection **getDIConUnchecked(TPortId) override;
    CDataConnection *getDOConUnchecked(TPortId) override;

    void evt_EI1() {
      executeEvent(scmEventEI1ID, nullptr);
    }

    void evt_EI2() {
      executeEvent(scmEventEI2ID, nullptr);
    }

    void evt_EI3() {
      executeEvent(scmEventEI3ID, nullptr);
    }

    void operator()() {
      evt_EI1();
    }
};


