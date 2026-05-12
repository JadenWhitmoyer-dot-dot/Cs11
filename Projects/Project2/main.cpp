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

double getTotal(int periods, int principle, double rate, double years){
    double total;
    rate = rate/100;
	total = principle * pow((1 + rate / periods), periods * years);
    return(total);
}

void displayData(int periods, int principle, double rate, double years, int temp){
    cout << setw(40) << setfill(' ') << "Investment #" << temp << endl;
    cout << setfill('.') << fixed << showpoint << setprecision(2);
    cout << "Principle Amount:" << setw(55) << "$" << principle << endl;
	cout << "Interest Rate:" << setw(61) << rate << "%" << endl << "Years Invested:" << setw(60) << years << endl;
	cout << "Compounding Periods:" << setw(52) << periods << endl;
    cout << "Final Total:" << getTotal(periods, principle, rate, years) << endl;

}

int main() {
	// Code implementation
	int periods, principle, temp;
	double rate, total, years;
	ifstream inFile;
	inFile.open("investAll.txt");

	if(!inFile){
        cout << "File failed to open" << endl;
	}
	else{
        while(!inFile.eof()){
            inFile >> principle >> years >> periods >> rate;
            displayData(periods, principle, rate, years, temp);
            temp++;
        }
	}


	inFile.close();

	return 0;
}
