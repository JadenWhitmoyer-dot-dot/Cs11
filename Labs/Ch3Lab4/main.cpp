//**********************************************
// Name: Jaden Whitmoyer
// Course: CS 11
// Instructor: Kyle Muldrow
// Assignment:
// Date:
//**********************************************

#include <iostream>
#include <fstream>
using namespace std;



int main() {
	//Part 1
	ifstream inData;
	ofstream outData;
	string firstname, lastname, country;
	inData.open("worldcup.txt");
	inData >> firstname >> lastname >> country;
	cout << firstname << " " << lastname << " plays for " << country << "." << endl;
	inData >> firstname >> lastname >> country;
	cout << firstname << " " << lastname << " plays for " << country << "." << endl;
	inData >> firstname >> lastname >> country;
	cout << firstname << " " << lastname << " plays for " << country << "." << endl;
	inData >> firstname >> lastname >> country;
	cout << firstname << " " << lastname << " plays for " << country << "." << endl;
	inData.close();

;    outData.open("stars.txt");
	inData.open("worldcup.txt");
	inData >> firstname >> lastname >> country;
	outData << firstname << " " << lastname << " plays for " << country << "." << endl;
	inData >> firstname >> lastname >> country;
	outData << firstname << " " << lastname << " plays for " << country << "." << endl;
	inData >> firstname >> lastname >> country;
	outData<< firstname << " " << lastname << " plays for " << country << "." << endl;
	inData >> firstname >> lastname >> country;
	outData << firstname << " " << lastname << " plays for " << country << "." << endl;
	inData.close();
	return 0;
}
