#pragma once
#ifndef Calc.h
#define Calc.h

class Calc {
    public:
        void NoDeposit(double investment, double interest, int years );
        void WithDeposit(double investment, double deposit, double interest, int years );

    protected:
        double initialInvestment;
        double monthlyDeposit;
        double interestRate;
        int numYears;
        int i;
        double endAmount;
        double endInterest;
};
#endif