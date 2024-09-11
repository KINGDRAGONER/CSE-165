#include <iostream>
#include <bitset>
#include <sstream>
#include <string>
#include <bitset>

using namespace std;
// bitStatus = (num >> n) & 1;
int getBit(int number, int index)
{
    int mask = 1 << index;
    int bit = (number / mask) % 2;
    return bit;
}

int setBit(int number, int index)
{
    int hold = 1 << index;      // Create a bitmask with a 1 at the specified index
    int result = number + hold; // Set the bit at the specified index to 1 by adding the bitmask
    return result;              // Return the modified number with the bit set
}

int clearBit(int number, int index)
{
    return (number & (~(1 << index)));
}

int main()
{
    string input;
    cout << "Enter a decimal number and index: ";
    getline(cin, input);
    cout << "\n";

    int number, index;
    istringstream iss(input);
    string word;

    if (iss >> number && iss >> word && word == "and" && iss >> index)
    {
        // part1)
        cout << "Binary representation of " << number << " is " << bitset<32>(number).to_string() << endl;
        cout << "\n";
        int bitAtIdx = getBit(number, index);
        cout << "Get bit at index " << index << ": " << bitAtIdx << endl;
        cout << "\n";
        // part2
        int nWithBitSet = setBit(number, index);
        cout << "Binary number after setting bit at index " << index << ": " << bitset<32>(nWithBitSet).to_string() << endl;
        cout << "\n";
        // part3
        // Why use 8 bit? on numbers such as 52242 and 3 it will print 0 only
        int nWithBitCleared = clearBit(number, index);
        cout << "Binary number after clearing bit at index " << index << ": " << bitset<32>(nWithBitCleared).to_string() << endl;
        cout << "\n";
    }
    else
    {
        cout << "Use [decimal and number]" << endl;
    }
    // output should have leading zeroes. This was told to be fine.
    return 0;
}
