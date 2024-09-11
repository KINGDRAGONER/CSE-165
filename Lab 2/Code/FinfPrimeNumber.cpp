#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int find_prime(int number){
    int n = number;
    for(int i = n; i > 1; i--)
    {
        if((i%2)!=0 || i==2){
            cout << "Prime: "<< i<<endl;
        }
    }
return n;
}
int main()
{
    int numbers;
    cin >> numbers;

    find_prime(numbers);
}
