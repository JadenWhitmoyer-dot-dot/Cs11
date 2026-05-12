#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int nums[]{49, 62, 21, 33, 91, 27, 70, 50};
    char player1[50], player2[50], player3[50];
    char extra;
    cout << "Enter the name of a basketball player: ";
    cin.get(player1, 50);
    cout << endl;
    cin.get(extra);
    cout << "Enter the name of another basketball player: ";
    cin.get(player2, 50);
    cout << endl;
    strcpy(player3,"Chris Paul");
    cout << player1 << " has " << strlen(player1) << " characters." << endl;
    cout << player2 << " has " << strlen(player2) << " characters." << endl;
    cout << player3 << " has " << strlen(player3) << " characters." << endl;
    if(strcmp(player1,player2) < 0)
        cout << player1 << " is less than" << player2 << endl;
    else if(strcmp(player1,player2) > 0)
        cout << player1 << " is greater than" << player2 << endl;
    else
        cout << player1 << " is equal to " << player2 << endl;

    if(strcmp(player2,player3) < 0)
        cout << player2 << " is less than " << player3 << endl;
    else if(strcmp(player2,player3) > 0)
        cout << player2 << " is greater than " << player3 << endl;
    else
        cout << player2 << " is equal to " << player3 << endl;



    cout << "nums array: ";
    for(auto x : nums)
        cout << x << " ";
    cout << endl;
    return 0;
}
