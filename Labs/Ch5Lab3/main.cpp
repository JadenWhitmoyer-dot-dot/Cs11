#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Chapter 5 Lab 3
    int columns;
    do{
        cout << "Please input the number of columns: "; cin >> columns;
        if(columns < 10)
            cout << "Must be more than 10, Try again." << endl;
    } while (columns < 10);
    //Part 2
    cout << setfill('-');
    for(int x = 1;x <= 5; x++){
        for(int y =1;y<=columns;y++){
            cout << setw(5) << x*y;
        }
    }cout << endl;
    //Part 3
    int sum = 0, num;
    while(true){
        cout << "Please enter a number: "; cin >> num;
        if(num < 0)
            break;
        else
            sum += num;
    }
    cout << "After break, sum = " << sum << endl;
    sum = 0;
    cout << "Please enter a number: "; cin >> num;
    while(cin){
        if(num < 0){
            cout << "You entered a negative number, please try again." << endl;
            cout << "Please enter a number: "; cin >> num;
            continue;
        }
        sum += num;
        cout << "Please enter a number: "; cin >> num;
    }
    cout << "After continue, sum = " << sum << endl;



    return 0;
}
