#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int COLUMNS = 5;

void initialize(int a[][COLUMNS], int rows){
    srand(time(0));
    for(int x = 0; x < rows; x++){
        for (int y = 0; y<COLUMNS;y++){
            a[x][y] = rand()%20+1;
        }
    }
}

void display(int a[][COLUMNS], int rows){
    for(int x=0; x<rows;x++){
        for(int y =0; x<COLUMNS;y++){
            cout << setw(4) << a[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    ifstream file1, file2;
    file1.open("capital.txt");
    file2.open("states.txt");
    string capitals[10];
    string states[10];
    int index = 0;
    if(!file1 || !file2)
        cout << "Failed to open one of the files.";
    else{
        while(!file1.eof()){
            getline(file1, capitals[index]);
            getline(file2, states[index]);
            index++;
        }
        for(int x = 0; x<10; x++){
            cout << capitals[x] << ", " << states[x] << endl;
        }

    }

    file1.close();
    file2.close();

    cout << endl;
    int nums[4][5];
    initialize(nums, 4);
    display (nums, 4);
    cout << endl;
    cout << "sum of 3rd row (row index 2) = ";
    int sum = 0;
    for(int y = 0; y < COLUMNS; y++)
        sum = sum + nums[2][y];
    cout << sum << endl;
    sum = 0;
    cout << "Sum of 4th column (column index 3) = ";
    for (int x = 0; x < 4; x++)
        sum = sum + nums[x][3];
    cout << sum << endl;

    return 0;
}
