//beecrowd 1008 - Salary
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int employeeNumber, hours;
    double rate , salary;

    //Input
    cin >> employeeNumber;
    cin >> hours;
    cin >> rate;

    //Salary calculation
    salary = hours * rate;

    //Print
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << employeeNumber << endl;
    cout << "SALARY = U$ " << salary << endl;


    return 0;
}
