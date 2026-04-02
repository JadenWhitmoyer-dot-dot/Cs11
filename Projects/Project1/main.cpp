//**********************************************
// Name: Jaden Whitmoyer
// Course: CS 11
// Instructor: Kyle Muldrow
// Assignment: Project 1
// Date:3/18/26 18:26
//**********************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
	// Code implementation
	int periods, principle;
	double rate, total, years;
	ifstream inFile;
	cout << setfill('.') << fixed << showpoint << setprecision(2);
	inFile.open("invest1.txt");
	inFile >> principle >> years >> rate;
    cout << "Please enter the number of interest compounding periods for $" << principle << ": "; cin >> periods; cout << endl;
	cout << "Principle Amount:" << setw(55) << "$" << principle << endl;
	cout << "Interest Rate:" << setw(61) << rate << "%" << endl << "Years Invested:" << setw(60) << years << endl;
	cout << "Compounding Periods:" << setw(52) << periods << endl;
	rate = rate/100;
	total = principle * pow((1 + rate / periods), periods * years);
	cout << "FINAL TOTAL:" << setw(60) << "$" << total << endl;
	inFile.close();
	//File 2
	inFile.open("invest2.txt");
	inFile >> principle >> years >> rate;
    cout << "Please enter the number of interest compounding periods for $" << principle << ": "; cin >> periods; cout << endl;
	cout << "Principle Amount:" << setw(55) << "$" << principle << endl;
	cout << "Interest Rate:" << setw(61) << rate << "%" << endl << "Years Invested:" << setw(60) << years << endl;
	cout << "Compounding Periods:" << setw(52) << periods << endl;
	rate = rate/100;
	total = principle * pow((1 + rate / periods), periods * years);
	cout << "FINAL TOTAL:" << setw(60) << "$" << total << endl;
	inFile.close();
	//File 3
	inFile.open("invest3.txt");
	inFile >> principle >> years >> rate;
    cout << "Please enter the number of interest compounding periods for $" << principle << ": "; cin >> periods; cout << endl;
	cout << "Principle Amount:" << setw(55) << "$" << principle << endl;
	cout << "Interest Rate:" << setw(61) << rate << "%" << endl << "Years Invested:" << setw(60) << years << endl;
	cout << "Compounding Periods:" << setw(52) << periods << endl;
	rate = rate/100;
	total = principle * pow((1 + rate / periods), periods * years);
	cout << fixed << showpoint << setprecision(2);
	cout << "FINAL TOTAL:" << setw(60) << "$" << total << endl;
	inFile.close();

	return 0;
}
