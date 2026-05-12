#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int howmany = 0, count = 0, val = 0, sum = 0;
    double average;
    cout << fixed << showpoint<< setprecision(2);
    cout << "how many numbers would you like? ";
    cin >> howmany;
    while(howmany <= 0) {
        cout << "must be positive. try again." << endl;
        cout << "How many numbers you want? ";
        cin >> howmany;
    }
    while (count < howmany) {
        cout << "Enter a number: ";
        cin >> val;
        sum += val;
        count ++;
    }
    if (howmany > 0){
        average = static_cast<double>(sum) / howmany;
        cout << "Average = " << average << endl << endl;
    }
    else
        cout << "no data" << endl << endl;

    count = 0;
    val = 0;
    sum = 0;
    average = 0.0;
    cout << "Enter a number or -1 to quit: ";
    cin >> val;
    while (val != -1){
        sum = sum + val;
        count++;
        cout << "Enter a number or -1 to quit: ";
        cin >> val;
    }
    if (count > 0){
        cout << "Average is " << static_cast<double>(sum)/count << endl;
    }
    else
        cout << "No Data" << endl;

    return 0;
}
