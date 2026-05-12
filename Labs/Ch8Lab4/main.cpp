#include <iostream>

using namespace std;

int searchArray(int a[], int howmany, int findThis){
    int itsHere = 0;
    bool found = false;

    while (itsHere < howmany && !found){
        if (a[itsHere] == findThis)
            found = true;
        else
            itsHere++;
    } // end while loop
    if(found)
        return itsHere;
    else
        return -1;
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


int main()
{
    int nums[] = {49, 62, 21, 33, 91, 27, 70, 50};
    int number;
    cout << "Enter a number to search for: ";
    cin >> number;

    int index = searchArray(nums, 8, number);
    if (index == -1)
        cout << number << " was not found." << endl << endl;
    else
        cout << number << " was found at index " << index << " in the array " << endl << endl;

    selectionSort(nums, 8);
    cout << "After sorting: ";
    for(int x=0; x<8; x++){
        cout << nums[x] << " ";
    }
    cout << endl;
    return 0;
}
