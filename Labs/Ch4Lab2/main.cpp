#include <iostream>

using namespace std;

int main()
{
    string str1 = "spam";
    string str2 = "Spam";
    string str3 = "SPAM";

    if (str1 < str2)
        cout << str1 << " < " << str2 << endl;
    else
        cout << str1 << " >= " << str2 << endl;

    if (str3 >= str1)
        cout << str3 << " >= " << str1 << endl;
    else
        cout << str3 << " < " << str1 << endl;

    if (str2 <= str3)
        cout << str2 << " <= " << str3 << endl;
    else
        cout << str2 << " > " << str3 << endl;

    //Part 2

    double wdSpd;
    cout << "Enter a windspeed: ";
    cin >> wdSpd;

    if (wdSpd < 23){
        cout << "Wind speed of " << wdSpd << " Mph is invalid." << endl;

    }
    else {
        if (wdSpd < 39)
                cout << "The wind speed of " << wdSpd << " indicates a tropical depression" << endl;
        else if (wdSpd >= 39 && wdSpd < 74)
                cout << "The wind speed of " << wdSpd << " indicates a tropical storm" << endl;
        else
            cout << "The wind speed of " << wdSpd << " indicates a hurricane" << endl;
    }

    return 0;
}

