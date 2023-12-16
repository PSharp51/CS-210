#include <iostream> 
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Calc.h"

using namespace std;

    //Stating Variables used in file
    Calc userInvestment;
    void displayScreen();
    double initialInvestment;
    double monthlyDeposit;
    double interestRate;
    int years;
    char anyKey;

int main() {
    system("cls");
    displayScreen();

    system("cls");

    userInvestment.NoDeposit(initialInvestment, interestRate, years);
    userInvestment.WithDeposit(initialInvestment, monthlyDeposit, interestRate, years);

    return 0;


}
void displayScreen() { // print display screen to user
    cout << "*****************************" << endl;
    cout << "******** Data Input *********" << endl;
    cout << "Initial Investment Amount: " << endl;
    //get and veryify user initial investment
    cin >> initialInvestment;
    while (initialInvestment < 1) {
        cout << "Invalid number" << endl;
    }
//get and veryify monthly deposit
    cout << "Monthly Deposit: " << endl;
    cin >> monthlyDeposit;
    while (monthlyDeposit < 0) {
    cout << "Invalid number" << endl;
    }
//get and verify annual interest
    cout << "Annual Interest: " << endl;
    cin >> interestRate;
    while (interestRate < 0) {
    cout << "Invalid number" << endl;
    }

    //get and verify amount of years
    cout << "Number of years: " << endl;
    cin >> years;
    while (years < 1) {
    cout << "Invalid number" << endl;
    }

    cout << "Press any key to continue . . . " << endl;
    cin >> anyKey;
        
}