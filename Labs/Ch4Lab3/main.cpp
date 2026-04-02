#include <iostream>

using namespace std;

int main()
{
    //Ch4 Lab3
    //Part1

    int num;
    string evenodd;
    cout << "Please enter a number: ";
    cin >> num;

    evenodd = (num % 2 == 0) ? "even" : "odd";
    cout << "\nYour number " << num << ", " << "is " << evenodd << endl;



    //part2

    string name;
    char pos;
    cout << "Enter name of the hockey player: ";
    cin.ignore(100,'\n');
    cin.clear();
    getline(cin, name);
    cout << "\nPlease enter a character assigned to the players position: ";
    cin >> pos;
    switch (pos)
    {
    case 'F': case 'f':
        cout<<name<<" is a forward"<<endl;
        break;
    case 'D': case 'd':
        cout<<name<<" is a defenseman"<<endl;
        break;
    case 'G': case 'g':
        cout<<name<<" is a goaltender"<<endl;
        break;
    default:
        cout<<"Invalid Position Entered"<<endl;
    }
    return 0;
}
