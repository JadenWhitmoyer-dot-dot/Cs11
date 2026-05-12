#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Ch3 Lab3 part 1
    int popcorn, hotdogs, sodas, water;
    double p_total, h_total, s_total, w_total, g_total;
    cout << "User please enter the number of popcorns, the \# of hotdogs, the \# of sodas and the \# of water" << endl;
    cin >> popcorn;
    cin >> hotdogs;
    cin >> sodas;
    cin >> water; //250, 300, 500, 550
    p_total = popcorn * 1.50;
    h_total = hotdogs * 2.25;
    s_total = sodas * 2.75;
    w_total = water * 2.50;
    g_total = p_total + h_total + s_total + w_total;
    cout << endl << endl;
    //cout << setfill('.');
    cout << setw(45) << "CONCESSION STAND TOTALS" << endl;
    cout << fixed << showpoint << setprecision(2) << setfill('.');
    cout << "Total popcorn sold: " << setw(54) << "$" << p_total << endl;
    cout << "Total Hotdogs sold: " << setw(54) << "$" << h_total << endl;
    cout << "Total Soda's sold: " << setw(53) << "$" << s_total << endl;
    cout << "Total waters sold: " << setw(53) << "$" << w_total << endl;
    cout << "GRAND TOTAL: " << setw(59) << "$" << g_total << endl << endl;


    return 0;

}
