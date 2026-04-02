//**********************************************
// Name: Jaden Whitmoyer
// Course: CS 11
// Instructor: Kyle Muldrow
// Assignment: Ch5Hw1
// Date: 3/23/26
//**********************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {
	// Code implementation part 1
	int num1, num2, count1 = 0, count2 = 0, sum = 0;
	int counter;
	const int THREE = 3, FIVE = 5, TWO = 2;
    cout << "Please input 2 numbers: "; cin >> num1 >> num2;
    counter = num1;
    //Question 5
    while(counter <= num2){
        if(counter%THREE == 0){
           //cout << counter << endl; //Testing
           count1++;
           }
        if(counter%FIVE == 0){
            //cout << counter << endl; //Testing
            count2++;
            }
        counter++;
    }
	cout << "Your number range contains: " << count1 << " numbers divisible by 3 & " << count2 << " numbers divisible by five." << endl;

    //Question 8
    int firstnum = 0, secondnum = 0;
    counter = 0;
    cout << "Please input two numbers (the first must be lower than the second): " << endl;
    cin >> firstnum >> secondnum;
    counter = firstnum + 1;
    //cout << counter << endl;
    while(counter <= secondnum){
        if(counter%TWO == 0){
            counter++;
            //cout << "Added one to even number to get odd number" << endl;
            continue;
        }
        else{
            cout << counter << endl;
        }
        counter++;
    }
    counter = firstnum;
    while(counter <= secondnum){
        if(counter%TWO == 0){
            sum = sum + counter;
        }
        counter++;
    }
    cout << fixed << showpoint << setprecision(2);
    cout << "The sum of all the even numbers in the given range is: " << sum << endl;
    counter = firstnum;
    cout << firstnum << " " << secondnum << endl;
    while(counter <= secondnum){
        if(sqrt(counter) < 10 && sqrt(counter) > 0){
            cout << sqrt(counter) << " ";
        }
        counter++;
    }
    counter = firstnum;
    double sum2 = 0;
    while(counter <= secondnum){
        if(counter%TWO == 0){
            counter++;
            continue;
        }
        else{
            sum2 = sum2 + sqrt(counter);
            cout << sqrt(counter) << " ";
        }
        counter++;
    }
    cout << endl << "The sum of the square roots of the odd numbers in the given range is: " << sum2 << endl;
    char c = 'A';
    while(c <= 'Z'){
        cout << c << " ";
        c++;
    }
	return 0;
}

