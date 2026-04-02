//**********************************************
// Name: Jaden Whitmoyer
// Course: CS 11
// Instructor: Kyle Muldrow
// Assignment: Ch5Hw2
// Date: 3/30/26
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
	double sum2 = 0;
	int firstnum = 0, secondnum = 0, sum = 0;
    cout << "Please input two numbers (the first must be lower than the second): " << endl;
    cin >> firstnum >> secondnum;
    for(int x = firstnum; x < secondnum; x++){
        if(x%2 == 0){
            x++;
            cout << x << endl;
        }
        else{
            cout << x << endl;
        }
    }
    for(int y = firstnum; y <= secondnum; y++){
        if(y%2 == 0){
            sum = sum + y;
        }
    }
    cout << endl << "The sum of all the even numbers in the given range is: " << sum << endl;
    cout << fixed << showpoint << setprecision(2);
    for(int z = firstnum; z <= secondnum; z++){
        if(z%2 != 0 && sqrt(z) < 10 && sqrt(z) > 0){
            cout << sqrt(z) << " ";
        }
    }
    for(int a = firstnum; a <= secondnum; a++){
        if(a%2 != 0){
            sum2 = sum2 + sqrt(a);
        }
    }
    cout << endl << "The sum of the square roots of the odd numbers in the given range is: " << sum2 << endl;
    for(char b = 'A'; b <= 'Z'; b++){
        cout << b << " ";
    }
    cout << endl << endl; //creates a break between sections.
    //Code implementation Part 2
    int counter = 0;
    sum = 0; sum2 = 0;
    counter = firstnum;
    do{
        // << "hello" << endl;

        if(counter%2 == 0){ //Even
            sum = sum+counter;
            counter++;
            continue;
        }
        else{ //Odd
            cout << counter << endl;
        }

        counter++;

    } while(counter <= secondnum);
    cout << endl << "The sum of all the even numbers in the given range is: " << sum << endl;
    sum = 0; sum2 = 0;
    counter = firstnum;
    do{
        if(counter%2 == 0){ //Even
            counter++;
            continue;
        }
        else{ //Odd
            sum2 = sum2 + sqrt(counter);
        }
        if(sqrt(counter) < 10 && sqrt(counter) > 0){
            cout << sqrt(counter) << " ";
        }

        counter++;

    } while(counter <= secondnum);
    cout << endl << "The sum of the square roots of the odd numbers in the given range is: " << sum2 << endl;
    char ch = 'A';
    do{
        cout << ch << " ";
        ch++;
    } while(ch <= 'Z');
	return 0;
}
