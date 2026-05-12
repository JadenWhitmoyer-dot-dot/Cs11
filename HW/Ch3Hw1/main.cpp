
//**********************************************
// Name: Jaden Whitmoyer
// Course: CS 11
// Instructor: Kyle Muldrow
// Assignment: Ch3Hw1
// Date: 2/23/26
//**********************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Part 1
    double weightInKg;
    const double conversion = 2.2;

    cout << "Please input your weight in Kg: ";
    cin >> weightInKg; //weight in kg
    cout << fixed << showpoint << setprecision(2) << "\n Your weight in Lbs is: " << weightInKg * conversion << fixed << showpoint << setprecision(2);
    //Part 2
    double averageDailyBalance;
    double netBalance;
    double payment;
    double d1;
    double d2;
    double interestRate;


    cout << "\nPlease input in this order your: the number of days in the billing cycle, ";
    cout << "the number of days payment was made before the billing cycle, ";
    cout << "the net balance, payment made, and the interest rate" << endl;
    cin >> d1 >> d2 >> netBalance >> payment >> interestRate;
    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
    cout << "Your average daily balance is: " << averageDailyBalance << endl;
    double interest = averageDailyBalance * interestRate;
    cout << fixed << showpoint << setprecision(2) << "Your total interest accrued is: " << interest << endl;
    return 0;
}
