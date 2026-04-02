#include <iostream>

using namespace std;

int main()
{
    // Cout statements
    cout << "9 / 5" << " = " << 9 / 5 << endl;
    cout << "7 + 6 * 5" << " = " << 7 + 6 * 5 << endl;
    cout << "248 % 100 / 5" << " = " << 248 % 100 / 5 << endl;
    cout << "(5-7) * 4" << " = " << (5-7) * 4 << endl;
    cout << "6 + (18 % (17-12))" << " = "<< 6 + (18 % (17-12)) << endl;
    //Static_cast statements
    cout << "static_cast<int>(25.4/5.2)" << " = " << static_cast<int>(25.4/5.2) << endl;
    cout << "static_cast<int>(25.4) / static_cast<int>(5.2)" << " = " << static_cast<int>(25.4) / static_cast<int>(5.2) << endl;
    cout << "static_cast<double>(25/6)" << " = " << static_cast<double>(25/6) << endl;
    cout << "static_cast<double>(25) / 6" << " = " << static_cast<double>(25) / 6 << endl;
    cout << "static_cast<int>(12.6 + static_cast<double>(27 / 5))" << " = " << static_cast<int>(12.6 + static_cast<double>(27 / 5)) << endl;
    return 0;
}
