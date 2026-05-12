#include <iostream>
#include <iomanip>
#include <fstream>
//**********************************************
// Name: Jaden Whitmoyer
// Course: CS 11
// Instructor: Kyle Muldrow
// Assignment:Ch8Hw1
// Date: May the 4th be with you (5/4/26)
//**********************************************
using namespace std;

int main()
{
    double alpha[50]{0};


    for(int x = 0; x < 50; x++){
        if(x < 25){
            alpha[x] = x*x;
        }
        else{
            alpha[x] = x*3;
        }

    }

    for(int x = 0; x < 5; x++){
            for(int y = 0; y<10; y++){
                cout << alpha[y+(x*10)] << " ";
            }
            cout << endl;
            }
    //Part 2
    int grades[8]{0};
    ifstream inData;
    int grad = 0;
    inData.open("testscores.txt");
    while(!inData.eof()&& inData >> grad){
        //cout << endl << grad;
        if(grad > 0&&grad <=24)
            grades[0]++;
        else if(grad >= 25&&grad <= 49)
            grades[1]++;
        else if(grad >= 50&&grad <= 74)
            grades[2]++;
        else if(grad >= 75&&grad <= 99)
            grades[3]++;
        else if(grad >= 100&&grad <= 124)
            grades[4]++;
        else if(grad >= 125&&grad <= 149)
            grades[5]++;
        else if(grad >= 150&&grad <= 174)
            grades[6]++;
        else if(grad >= 175&&grad <= 200)
            grades[7]++;
        }

    cout << "0-24: " << grades[0] << endl; cout << "25-49: " << grades[1]<< endl; cout << "50-74: " << grades[2]<< endl; cout << "75-99: " << grades[3]<< endl; cout << "100-124: " << grades[4]<< endl; cout << "125-149: " << grades[5]<< endl; cout << "150-174: " << grades[6]<< endl; cout << "175-200: " << grades[7]<< endl;









    return 0;
}
