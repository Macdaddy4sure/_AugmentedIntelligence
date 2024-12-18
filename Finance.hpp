#pragma once

/*
    Copyright(C) 2024 Tyler Crockett | Macdaddy4sure.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissionsand
    limitations under the License.
*/

#include "AugmentedIntelligence.hpp"

using namespace std;

class _Finance
{
public:

    class Terms
    {
    public:
        static bool BankerAcceptance(string text);
        static bool BearMarket(string text);
        static bool BillOfExchange(string text);
        static bool BullMarket(string text);
        static bool Bond(string text);
        static bool CashInstrument(string text);
        static bool CapitalMarket(string text);
        static bool CertificateOfDeposit(string text);
        static bool CommercialPaper(string text);
        static bool Coupon(string text);
        static bool CreditDefaultSwap(string text);
        static bool CreditEvent(string text);
        static bool CreditRisk(string text);
        static bool DebtInstrument(string text);
        static bool DerivativeInstrument(string text);
        static bool Draft(string text);
        static bool ExchangeRate(string text);
        static bool FaceValue(string text);
        static bool FinancialInstrument(string text);
        static bool Fungible(string text);
        static bool Interest(string text);
        static bool MarketRisk(string text);
        static bool MoneyMarket(string text);
        static bool NegotiableInstrument(string text);
        static bool PromissoryNote(string text);
        static bool Security(string text);
        static bool Share(string text);
        static bool Stock(string text);
        static bool TimeDeposit(string text);
        static bool TreasuryBill(string text);
        static bool ZeroCouponBond(string text);
    };
};