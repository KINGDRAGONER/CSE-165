#include <iostream>
#include <string>
#include <bitset>
#include <iomanip>

using namespace std;

int sum(int &n1, int &n2)
{
    int sum=0;
    sum = n1+n2;
    return sum;
}
int difference(int &n1, int &n2)
{
    int sum=0;
    sum = n1-n2;
    return sum;
}
int Product(int &n1, int &n2)
{
    int sum=0;
    sum = n1 * n2;
    return sum;
}
double Divide(int &n1, int &n2)
{
    double sum=0.0;
    sum = (double)n1/n2;
    return sum;
}
int main()
{
    int number1, number2;
    cout << "Enter the first integer: ";
    cin >> number1;
    cout << "Enter the second integer: ";
    cin >> number2;

    int *ptr1 = &number1;
    int *ptr2 = &number2;

    cout <<"Sum: " <<sum(*ptr1, *ptr2)<<endl;
    cout <<"Difference: " <<difference(*ptr1, *ptr2)<<endl;
    cout <<"Product: " <<Product(*ptr1, *ptr2)<<endl;
    cout <<"Divide: " <<Divide(*ptr1, *ptr2)<<endl;

    return 0;
}
