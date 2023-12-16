#include "Calc.h"
#include <iostream>
#include <iomanip>

using namespace std;
//function for no deposit
void Calc::NoDeposit(double investment, double interest, int years ) {
    //set function values
    double initialInvestment = investment;
    double interestRate = interest;
    int numYears = years;
    int i;

    //Header
    cout << "     Balance and Interest Without Additional Monthly Deposits     " << endl;
    cout << "==================================================================" << endl;
    cout << "Year        Year End Balalnce             Year End Earned Interest" << endl;
    cout << "------------------------------------------------------------------" << endl;

//start the calculation and then print out
    double endAmount = initialInvestment;//will be used during loop so that the intiial amount gets calculated and rolls over into next iteration of loop
    double endInterest;
    for(i=0; i < numYears; i++) {// loop that iterates by amount of years
        endInterest = initialInvestment * (interestRate / 100); // calc for year to end rate
        endAmount += endInterest;//calculate year to end balance
//print out information for customer
        cout << setw(2) << (i+1) << fixed << setprecision(2) << setw(10) << endAmount << setw(20) << endInterest << endl ;
        cout << endl;
    }

 }

void Calc::WithDeposit(double investment, double deposit, double interest, int years ) {
    //set function values
    double initialInvestment = investment;
    double monthlyDeposit = deposit;
    double interestRate = interest;
    int numYears = years;
    int i;

    //Header
    cout << "      Balance and Interest With Additional Monthly Deposits       " << endl;
    cout << "==================================================================" << endl;
    cout << "Year        Year End Balalnce             Year End Earned Interest" << endl;
    cout << "------------------------------------------------------------------" << endl;

//start the calculation and then print out
    double endAmount = initialInvestment;//will be used during loop so that the intiial amount gets calculated and rolls over into next iteration of loop
    double endInterest;
    for(i=0; i < numYears; i++) {// loop that iterates by amount of years
        endInterest = 0;
        endInterest = (initialInvestment + monthlyDeposit) * (interestRate / 100); // calc for year to end rate
        endAmount = endAmount + endInterest + monthlyDeposit;//calculate year to end balance
//print out information for customer
        cout << setw(2) << (i+1) << fixed << setprecision(2) << setw(10) << endAmount << setw(20) << endInterest << endl ;
        cout << endl;
        
    }

}