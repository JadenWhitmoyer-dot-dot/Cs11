//**********************************************
// Name: Jaden Whitmoyer
// Course: CS 11
// Instructor: Kyle Muldrow
// Assignment:Ch6HW
// Date:4/20/26
//**********************************************
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.1416;

double cirDistance(double x1, double x2, double y1, double y2){
    double distance;

    distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

    return(distance);
}

double cirDiam(double x1, double x2, double y1, double y2){
    double Diam = cirDistance(x1, x2, y1, y2)*2;

    return(Diam);
}

double cirCircum(double radius){
    double circum = 2*PI*radius;
    return(circum);
}

double cirArea(double radius){
    double area = pow(radius,2)*PI;
    return(area);
}

double payCheck(double hours, double rate){
    double pay, oT;
    if(hours < 40.1)
        pay = hours*rate;
    else
    {
        oT = hours - 40;
        pay = 40*rate + oT*(rate*1.5);
    }
    return(pay);
}

void printCheck(double hours, double rate, double pay){
    cout << setfill('.') << "Hours worked:"  << setw(20) << hours << endl;
    cout << "Pay rate:" << setw(23) <<rate << endl;
    cout << "Total Pay:"  << setw(24) << pay << endl;
}

int main()
{
    double x1, x2, y1, y2;
    double hours, rate;
    cout << fixed << showpoint << setprecision(2);
    cout << "Please enter the center point in x y format:" << endl; cin >> x1 >> y1;
    cout << "Please enter a second point in x y format:" << endl; cin >> x2 >> y2;
    cout << "\nRadius = " << cirDistance(x1,x2,y1,y2) << endl << "Diameter = " << cirDiam(x1,x2,y1,y2) << endl << "Curcumference = " << cirCircum(cirDistance(x1,x2,y1,y2)) << endl << "Area = " << cirArea(cirDistance(x1,x2,y1,y2)) << endl;
    //Part 2
    cout << "Please enter your hours worked and your payrate: " << endl; cin >> hours >> rate;
    cout << "Here is your paycheck:" << endl; printCheck(hours, rate, payCheck(hours,rate));
    return 0;
}
