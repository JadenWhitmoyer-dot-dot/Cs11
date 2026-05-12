#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
const double PI = 3.14159;
void cylinderSA(double r, double h, double &a){
    a = 2*PI*r*h + 2*PI*pow(r,2);
}

void coneSA(double r, double h, double &a){
    a = PI*r*sqrt(pow(r,2)+pow(h,2)) + PI*pow(r,2);
}

void displayAreas(double r, double h, double cylSA, double cnSA){
    cout << "Radius = " << r << ", height = " << h << endl;
    cout << "Surface area of cylinder = " << cylSA << endl;
    cout << "Surface area of cone = " << cnSA << endl << endl;
}

double avg(int x, int y = 15, int z = 31){
    return (x+y+z)/3.0;
}

double avg(double x, double y = 45.2, int z = 65.7){
    return (x+y+z)/3;
}

int main()
{
    //Part 1
    double radius, height, cyl_area, cone_area;
    cout << "Enter radius and height: ";
    cout << fixed << showpoint << setprecision(2);
    cin >> radius >> height;
    cylinderSA(radius, height, cyl_area);
    coneSA(radius, height, cone_area);
    displayAreas(radius, height, cyl_area, cone_area);
    //part2
    cout << "Interger average = " << avg(10) << endl;
    cout << "Double average = " << avg(25.5) << endl;

    return 0;
}
