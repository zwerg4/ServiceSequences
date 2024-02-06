/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: B_1Event_5States_Unreachable
 *** Description: Basic FB with empty ECC
 *** Version:
 ***     1.0: 2023-09-22/AK124910 -  -
 *************************************************************************/

#pragma once

#include "basicfb.h"
#include "forte_bool.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class FORTE_servSeq__B_1Event_5States_Unreachable final : public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_servSeq__B_1Event_5States_Unreachable)

  private:
    static const CStringDictionary::TStringId scmDataInputNames[];
    static const CStringDictionary::TStringId scmDataInputTypeIds[];
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
    static const TForteInt16 scmStateState_Unreachable = 6;

    void enterStateSTART(CEventChainExecutionThread *const paECET);
    void enterStateState_1(CEventChainExecutionThread *const paECET);
    void enterStateState_2(CEventChainExecutionThread *const paECET);
    void enterStateState_3(CEventChainExecutionThread *const paECET);
    void enterStateState_4(CEventChainExecutionThread *const paECET);
    void enterStateState_5(CEventChainExecutionThread *const paECET);
    void enterStateState_Unreachable(CEventChainExecutionThread *const paECET);

    void executeEvent(TEventID paEIID, CEventChainExecutionThread *const paECET) override;

    void readInputData(TEventID paEIID) override;
    void writeOutputData(TEventID paEIID) override;
    void setInitialValues() override;

  public:
    FORTE_servSeq__B_1Event_5States_Unreachable(CStringDictionary::TStringId paInstanceNameId, forte::core::CFBContainer &paContainer);

    CIEC_BOOL var_DI1;

    CDataConnection *conn_DI1;

    CIEC_ANY *getDI(size_t) override;
    CIEC_ANY *getDO(size_t) override;
    CEventConnection *getEOConUnchecked(TPortId) override;
    CDataConnection **getDIConUnchecked(TPortId) override;
    CDataConnection *getDOConUnchecked(TPortId) override;

    void evt_EI1(const CIEC_BOOL &paDI1) {
      var_DI1 = paDI1;
      executeEvent(scmEventEI1ID, nullptr);
    }

    void operator()(const CIEC_BOOL &paDI1) {
      evt_EI1(paDI1);
    }
};


