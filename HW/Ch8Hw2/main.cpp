#include <iostream>

//**********************************************
// Name: Jaden Whitmoyer
// Course: CS 11
// Instructor: Kyle Muldrow
// Assignment:Ch8Hw2
// Date: 5/11/26
//**********************************************

using namespace std;

void printArray(int a[], int length){
    for(int x=0;x<length;x++){
        cout << a[x] << " ";
    }
    cout << endl;
}

int findSmallest(int a[], int length){
    int smallest = 0;
    for(int x = 0; x < length-1; x++){
        smallest = x;
        for(int y = x+1; y<length; y++){
            if(a[y]<a[smallest])
                smallest=y;
        }
        return smallest;
    }
}

void selectionSort(int a[], int howmany){
    int temp = 0;
    int smallest = 0;
    for(int x = 0; x < howmany-1; x++){
        smallest = x;
        for(int y = x+1; y<howmany; y++){
            if(a[y]<a[smallest])
                smallest=y;
        }
        temp = a[x];
        a[x] = a[smallest];
        a[smallest] = temp;
        temp = 0;
    }
}

int lastLargestIndex(int a[], int length){
    int location = length;
    bool found = false;
    int largestLoc = 0;
    while (location > 1){
        if(a[location]>a[largestLoc]){
            largestLoc = location;
            found = true;
        }
        else
            location--;
    }
    if(found)
        return largestLoc;
    else
        return -1;
}

int main()
{
    int a[]{31, 71, 42, 71, 29, 60, 29};
    cout << "the first occurance of the smallest value is at index " << findSmallest(a, 7) << endl;
    cout << "the last occurance of the largest value is at index " << lastLargestIndex(a, 7) << endl;
    //selectionSort(a, 7);
    printArray(a, 7);
    return 0;
}
