#include <iostream>
#include <iomanip>


using namespace std;

enum seasons {WINTER, SPRING, SUMMER, FALL};

string getFav(seasons s){
    string fav;
    switch (s){
    case WINTER:
        fav = "WINTER!!";
        break;
    case SPRING:
        fav = "SPRING!!";
        break;
    case SUMMER:
        fav = "SUMMER!!";
        break;
    case FALL:
        fav = "FALL!!";
        break;
    }
    return fav;
}

int main()
{

    int fav;
    cout << "Enter 1 for winter, 2 for spring, etc: ";
    cin >> fav;
    while (fav < 1 || fav > 4){
        cout << "Must be betwixt 1 and 4. Try again";
        cout << "Enter 1 for winter, 2 for spring, etc: ";
        cin >> fav;
    }
    seasons myFav = static_cast<seasons>(fav-1);

    cout << "Your favorite season is: " << getFav(myFav) << endl;
    return 0;
}
