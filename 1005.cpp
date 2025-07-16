//beecrowd 1005 - Average 1
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A, B, Average;

    //Input the value of A and B
    cin >> A;
    cin >> B;

    //Average calculation
    Average = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5);
    //Print average
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << Average << endl;


    return 0;
}
