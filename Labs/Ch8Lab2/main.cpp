#include <iostream>
#include <iomanip>

using namespace std;

enum games {GAME1,GAME2,GAME3,GAME4,GAME5,GAME6,GAME7,GAME8,GAME9,GAME10};

void sumAvg(int a[], int &sum, double &avg){
    for(int x = 0; x < 10; x++){
        sum = sum + a[x];
    }
    avg = sum/10.0;
}

void displayPoints(string name, int points[]){
    cout << "Scoring data for " << name << endl;
    for(games x = GAME1; x<= GAME10;x = static_cast<games>(x+1)){
        cout << points[x] << " ";
    }
}

int biggest(int a[]){
    int maxIndex = 0;
    for (int x = 0; x < 10; x++){
        if(a[x] > a[maxIndex])
            maxIndex = x;
    }
}
int smallest(int a[]){
    int minIndex = 0;
    for (int x = 0; x < 10; x++){
        if(a[x] < a[minIndex])
            minIndex = x;
    }
}

int main()
{
    //chapter 8 lab 2
    //part 1
    string name = "Steph Curry";
    int points[] = {44, 35, 52, 23, 34, 29, 38, 28, 30, 35};
    displayPoints(name, points);
    //part 3
    cout << fixed << showpoint << setprecision(1);
    int total = 0;
    double average = 0.0;
    sumAvg(points, total, average);
    cout << "Over 10 games, " << name << " scored " << total << " points (" << average << "PPG)." << endl;

    int big = biggest(points);
    int small = smallest(points);

    cout << "Highest scoring game was game #" << big << " with " << points[big] << endl;
    cout << "Lowest scoring game was game #" << small << " with " << points[small] << endl;
    return 0;
}
