#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int const BOXCAP = 24;
    int const CASECAP = 75;
    int cookiesTotal;
    int boxesTotal;
    int caseTotal;

    cout << "Please enter the Total number of cookies: "; cin >> cookiesTotal; cout << endl;

    boxesTotal = cookiesTotal/BOXCAP;
    caseTotal = boxesTotal/CASECAP;

    cout << "You will need: " << boxesTotal << " Boxes!" << endl;
    if(caseTotal > 0) cout << "You will also need: " << caseTotal << " Cases to ship the cookies" << endl;
    else cout << "You will also need: 1 case to ship the cookies." << endl;
    if(caseTotal <= 0) cout << "You will be left with 1 partial case that contains: " << boxesTotal << " boxes and: " << cookiesTotal << " cookies." << endl;
    else cout << "And you will be left with: " << cookiesTotal%BOXCAP << " cookies and " << boxesTotal%CASECAP << " Boxes" << endl;
    //Part 2
    cout << "Please input a number, the operational symbol, and finally another number: " << endl;
    int num1, num2, num3; char maths;
    cin >> num1;
    cin >> maths;
    cin >> num2;
    cout << endl;

    switch (maths)
    {
    case '+':
        num3 = num1 + num2;
        cout << num1 << " + " << num2 << " = " << num3;
        break;
    case '-':
        num3 = num1 - num2;
        cout << num1 << " - " << num2 << " = " << num3;
        break;
    case '*':
        num3 = num1 * num2;
        cout << num1 << " * " << num2 << " = " << num3;
        break;
    case '/':
        if(num1 < 1){
            cout << "You cannot divide by zero..."; break;
        }
        else{
            num3 = num1 / num2;
            cout << num1 << " / " << num2 << " = " << num3; break;
        }
    }
    return 0;
}
