#include <iostream>
#include <string>
#include <bitset>
#include <iomanip>

using namespace std;

void hexbin_that(int number)
{

    cout << "Binary: " << bitset<32>(number) << "\nHexadecimal: " << setw(8) << setfill('0') << hex << number << endl;
}
int main()
{
    int numbers;

    while (numbers >= 0)
    {
        cout << "Enter a Number or negative to stop: "<< endl;
        cin >> numbers;
        if(numbers<0){
            break;
        }
        else if(numbers==0){
            cout << "Enter a Number or negative to stop: "<< endl;
            cin >> numbers;
        }
        if (numbers>0)
        {
            hexbin_that(numbers);
        }
        
    }
    return 0;
}
// #include <iostream>
// #include <string>
// #include <bitset>
// #include <iomanip>

// using namespace std;

// void hexbin_that(int number)
// {
//     cout << "Binary: " << bitset<32>(number) << endl;
// }

// int main()
// {
//     int number, index;

//     cout << "Enter a decimal number: ";
//     cin >> number;

//     cout << "Enter the position (index): ";
//     cin >> index;

//     if (index < 0 || index >= 32)
//     {
//         cout << "Invalid index. The index should be between 0 and 31." << endl;
//         return 1; // Exit with an error code
//     }

//     // Check if the bit at the specified index is 1 or 0
//     bool bitValue = (number >> index) & 1;

//     cout << "Binary representation of " << number << ":\n";
//     hexbin_that(number);

//     cout << "Bit at index " << index << " is " << bitValue << endl;

//     return 0;
// }
