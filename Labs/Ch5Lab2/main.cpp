#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>


using namespace std;
//chapter 5 Lab
//Jaden Whitoyer
int main()
{
    int howMany, num;
    bool isInRange = false;
    srand(time(0));
    num = (rand() % 1000) + 1;
    while(!isInRange){
        howMany ++;
        cout << "Current number is " << num << endl;
        if(num >= 500 && num <= 600)
            isInRange = true;
        else
            num = rand() % 1000 +1;
    }
    cout << "It took you " << howMany << " tries to get in range [500,600]." << endl << endl;
    //Part 2
    howMany = 0;
    num = 0;
    double sum = 0.0;
    ifstream inFile;
    inFile.open("numbers.txt");
    if(!inFile)
        cout << "File did not open" << endl << endl;
    else{
        while(!inFile.eof()){
            inFile >> num;
            sum += num;
            howMany++;
        }
        cout << "You have: " << howMany << " numbers." << endl;
        cout << fixed << showpoint << setprecision(2);
        cout << "The average of these numbers is " << sum/howMany << endl;
    }
    //Part 3
    sum = 0.0;
    for (int x = 1; x <= 6; x++)
        sum = sum + (rand() % 20 + 1);
    cout << "After for loop, average = " << sum / 6 << endl;
    for (char ch = 'a'; ch <= 'z'; ch++)
        cout << ch << " ";
    cout << endl;
    return 0;
}
