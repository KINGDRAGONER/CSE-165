#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// int vector_sum(vector<int> values){
//     int sum = 0;
//         for (int val : values)
//     {
//         sum += val;
//     }
//     return sum;
// }

int main()
{
    vector<int> values;
    int input;
    bool conditional = true;
    while (conditional)
    {
        cin >> input;

        if (input > 0)
        {
            values.push_back(input);
        }
        else if (input < 0)
        {
            input = -input;                                                          // add neg
            values.erase(remove(values.begin(), values.end(), input), values.end()); // clear
        }
        else if (input == 0)
        {
            break;
        }
    }

    int numEntries = values.size();
    int sum = 0;

    for (int i = 0; i < values.size(); ++i)
    {
        sum += values[i];
    }

    cout << numEntries << " " << sum << endl;

    return 0;
}
