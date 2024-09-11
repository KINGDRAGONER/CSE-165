#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<vector<string> > Vectorofvecstring(10); // Initialize vector of vectors of strings
    // not sure of a better way to do this. Basically hardcoded
    string input;
    cout << "Enter the input: ";
    cin >> input;

    while (input != "quit")
    {
        int N = input.length();

        if (N >= 1 && N <= 10)
        { 
            bool isDuplicate = false;

            for (int i = 0; i < V[N - 1].size(); ++i)
            {
                if (Vectorofvecstring[N - 1][i] == input)
                {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate)
            {
                Vectorofvecstring[N - 1].push_back(input);
            }
        }

        cout << "Enter the input: ";
        cin >> input;
    }

    // printing done here.
    for (int i = 0; i < Vectorofvecstring.size(); ++i)
    {
        if (!V[i].empty())
        {
            for (int j = 0; j < Vectorofvecstring[i].size(); ++j)
            {
                cout << Vectorofvecstring[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "\n" << endl;
        }
    }

    return 0;
}
