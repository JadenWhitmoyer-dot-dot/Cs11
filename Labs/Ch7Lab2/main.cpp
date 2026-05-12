#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

namespace globalType{
    const int N = 10;
    const double RATE = 7.5;
    int count = 0;
    void printResult();
}

using namespace globalType;

int main()
{
    printResult();
    string boxer1 = "Ali", boxer2 = "Frazier", rant = "Who goofed? I've got to know!";
    if(boxer1.compare(boxer2) > 0)
        cout << boxer1 << " > " << boxer2 << endl;
    else if(boxer1.compare(boxer2) < 0)
        cout << boxer1 << " < " << boxer2 << endl;
    else
        cout << boxer1 << " = " << boxer2 << endl;
    boxer1.swap(boxer2);
    string thrilla = boxer1+"-"+boxer2+" 3 was known the 'Thrilla in Manilla'.";
    cout << thrilla << endl << endl;
    cout << "The rant string has " << rant.length() << " characters." << endl;
    cout << "The word 'know' begins at index " << rant.find("know") << " in rant." << endl;
    cout << "Characters 5-12 in rant: " << rant.substr(5,8) << endl;
    cout << "After replace: " << rant.replace(4, 99, "messed up? Must know now!") << endl;
    cout << "After append: " << rant.append(" I said now! ") << endl;
    cout << "After Insert: " << rant.insert(15, "Tell me! ") << endl;

    return 0;
}

void globalType::printResult(){
    cout << fixed << showpoint << setprecision(2);
    count = N - 5;
    cout << "The result is: " << count*RATE << endl << endl;

}

