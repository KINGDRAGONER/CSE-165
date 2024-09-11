#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

void pairs()
{
    pair<char, int> pairsvar;
    while (pairsvar.second != -1)
    {

        cin >> pairsvar.first>>pairsvar.second;
        if (pairsvar.second == 0)
        {
            cout << "\n";
        }
        else
        {
            for (int i = 0; i < pairsvar.second; i++)
            {
                cout << pairsvar.first;
            }
            cout<<endl;
        }
    }
}
int main()
{
    pairs();
    return 0;
}
