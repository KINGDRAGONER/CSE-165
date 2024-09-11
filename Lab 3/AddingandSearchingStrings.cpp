#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> strings;
    vector<string> holder;
    string input = "";

    while (true)
    {
        cin >> input;

        if (input == "quit")
        {
            break; // Exit the loop when "quit" is entered
        }

        if (input.size() >= 4)
        {
            strings.push_back(input); // Store the string in the vector
        }
        else if (input.size() <= 3 && input.size() > 0)
        {
            // Find and output the strings that start with 'input'
            for (int i = 0; i < strings.size(); i++)
            {
                if (strings[i].find(input) == 0)
                {
                    holder.push_back(strings[i]);
                }
            }
        }
    }
    cout <<endl;
    cout <<endl;
    for(int i = 0; i < holder.size(); i++)
    {
        cout << holder[i]<<endl;
    }
    return 0;
}
