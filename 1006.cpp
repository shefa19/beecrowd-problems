//beecrowd 1006 - Average 2
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A, B, C, Average;

    //Input
    cin >> A;
    cin >> B;
    cin >> C;

    //Average calculation
    Average = ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5);

    //Print
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << Average << endl;



    return 0;
}
