#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;
//Ch6L1 Jaden Whitmoyer
const double PI = 3.14149;
//Function protos
double cylinderSA(double, double);
double coneSA(double, double);

void displayAreas(double r, double h, double cylSA, double coneSA){
    cout << "radius = " << r << ", height = " << h << endl;
    cout << "surface area of cylinder = " << cylSA << endl;
    cout << "surface area of cone = " << coneSA << endl;
}

int main()
{
    int x = 8, y = -5;
    double d1 = 15.8, d2 = 4.3, d3 = -57.87;
    char ch1 = 'K', ch2 = 'm';
    cout << "|y| = " << abs(y) << ", |d3| = " << fabs(d3) << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "D1^D2 = " << pow(d1,d2) << endl;
    cout << "sqrt(D1,D2) = " << sqrt(d1+d2) << endl;
    cout << "D2^X = " << pow(d2,x) << endl;
    cout << "Ch1 lowercase = " << static_cast<char>(tolower(ch1)) << endl;
    cout << "Ch2 uppercase = " << static_cast<char>(toupper(ch2)) << endl;
    //Part 2
    double radius, height;
    cout << "Please enter the radius and height: "; cin >> radius >> height;
    //Part 3
    displayAreas(radius, height, cylinderSA(radius, height), coneSA(radius, height));




    return 0;
}

double cylinderSA(double r, double h){
    double area = 2*PI*r*h + 2*PI*pow(r,2);
    return area;
}
double coneSA(double r, double h){
    return PI*r*sqrt(pow(r,2)+pow(h,2)) + PI*pow(r,2);
}


