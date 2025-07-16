//beecrows 1002 - Area of a Circle
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A, R;

    //Input
    cin >> R;

    //Calculation circle area
    A = 3.14159 * (R * R);

    //Print area
    cout << fixed << setprecision(4);
    cout << "A=" << A << endl;


    return 0;
}
