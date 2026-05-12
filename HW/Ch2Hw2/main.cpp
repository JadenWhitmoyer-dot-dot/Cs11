//**********************************************
// Name: Jaden Whitmoyer
// Course: CS 11
// Instructor: Kyle Muldrow
// Assignment:CH2HW2
// Date:02/19/26
//**********************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Part 1
    double num1 = 125, num2 = 28, num3 = -25;
    double average = (num1+num2+num3)/3;
    cout << average << endl << endl;
    //Part 2
    num1 = 0, num2 = 0;
    const int secret = 11;
    const double Rate = 12.50;
    int newnum;
    string name;
    double hoursWorked, wages;
    cout << "Please input two numbers: " << endl;
    cin >> num1 >> num2; //1 5
    cout << "Num1: " << num1 << ", Num2: " << num2 << endl << endl;
    newnum = num1 * 2 + num2;
    cout << newnum << endl;
    newnum = newnum + secret;
    cout << "Your new number is: " << newnum << endl;
    cout << endl << "User what is your last name? " << endl << endl;
    cin >> name; //name
    cout << endl << "User please enter a decimal number less than 70: " << endl << endl;
    cin >> hoursWorked;
    wages = Rate * hoursWorked;
    cout << endl << "Name: " << name << endl << "Pay Rate: $" << Rate << endl << "Hours Worked: " << hoursWorked << endl << "Salary: $" << wages << endl << endl;
    return 0;
}
