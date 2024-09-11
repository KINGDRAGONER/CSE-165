#include <iostream>
#include <string>
#include <vector>

using namespace std;

void char_match()
{
    string input = "";
    vector<string> words;

    while (input != "quit")
    {
        getline(cin, input);

        if (input.length() == 1)
        {
            for (int i = 0; i < words.size(); i++)
            {
                if (input[0] == words[i][0])
                {
                    cout << words[i] << " ";
                }
            }
            cout << "\n";
        }
        else
        {
            words.push_back(input); // Add the input to the vector.
        }
    }
}
int main()
{
    char_match();
    return 0;
}
