#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

//
//Name: Jaden Whitmoyer
//Course: CS 11
//Instructor: Kyle Muldrow
//Assignment: Ch7Hw1
//Date: April 27 26
//

using namespace std;

string nameChanger(string unAltName){
    string altName;

    altName = unAltName.substr(0, unAltName.find(','));
    altName = altName.insert(0, " ");
    altName = altName.insert(0 ,unAltName.substr(unAltName.find(',')+2, unAltName.length()+1));
    return(altName);
}

int main()
{
    ifstream inNames;
    ofstream outNames;
    string firstName, lastName, fullName;
    inNames.open("names.txt");
    if(!inNames)
        cout << "File did not open" << endl;
    else{
        while(!inNames.eof()){
          getline(inNames, fullName);
          cout << nameChanger(fullName) << endl;
        }
    }


    inNames.close();
    //Part 2
    string input;
    int sumASCII = 0;
    cout << "Please input a sentence or phrase." << endl;
    cin >> input;
    for(int x = 0; x < input.length(); ++x){
        sumASCII = sumASCII + static_cast<int>(input[x]);
    }
    cout << sumASCII << endl;
    return 0;
}
