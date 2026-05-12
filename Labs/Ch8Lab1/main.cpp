#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    int points[10];
    for(int x = 0; x < 10; x++)
        points[x] = 0;
    cout << "Please enter the name of a basketball player: ";
    getline(cin, name);
    for(int x = 0; x < 10; x++){
        cout << "Enter points gained in game #" << x+1 << ": ";
        cin >> points[x];
    }
    cout << endl;
    cout << "Scoring data for " << name << ":" << endl;
    for(int x = 0; x < 10; x++)
        cout << points[x] << " ";
    cout << endl;

    //Part 2
    int sum = 0, maxIndex = 0, minIndex = 0;
    double average = 0.0;
    cout << fixed << showpoint << setprecision(1);

    for(int x = 0; x < 10; x++)
        sum = sum + points[x];
    average = sum / 10;
    cout << "The total points scored = " << sum << ", The average is: " << average << endl;
    for(int x = 0; x < 10; x++){
        if(points[x]>points[maxIndex])
            maxIndex = x;
        if(points[x] < points[minIndex])
            minIndex = x;

    }
    cout << "Largest value was: " << points[maxIndex] << " for game #" << maxIndex+1 << endl;
    cout << "Smallest value was: " << points[minIndex] << " for game #" << minIndex+1 << endl;


    return 0;
}
