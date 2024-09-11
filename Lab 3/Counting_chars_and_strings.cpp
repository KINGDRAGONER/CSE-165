#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool hasDuplicate(const vector<string> &vec, const string &input) {
    for (int i = 0; i < vec.size(); ++i) { //o(n)
        if (vec[i] == input) {
            return true;
        }
    }
    return false;
}


void addString(vector<vector<string> > &V, const string &input) { //o(1)
    int N = input.length();
    if (N >= 1 && N <= 10) {
        if (!hasDuplicate(V[N - 1], input)) {
            V[N - 1].push_back(input);
        }
    }
}
//printing
void printVectors(const vector<vector<string> > &V) { ////o(n^2)
    for (int i = 0; i < V.size(); ++i) {
        if (!V[i].empty()) {
            for (int j = 0; j < V[i].size(); ++j) {
                cout << V[i][j] << " ";
            }
            cout << endl;
        } else {
            cout << "(empty line)" << endl;
        }
    }
}


void calculateAndPrintStats(const vector<vector<string> > &V) { //o(n^2)
    for (int i = 0; i < V.size(); ++i) {
        if (!V[i].empty()) {
            int totalLetters = 0;
            int numStrings = V[i].size();

            for (int j = 0; j < numStrings; ++j) {
                totalLetters += V[i][j].length();
            }

            cout << totalLetters << " " << numStrings << endl;
        }
    }
}

int main() {
    vector<vector<string> > Vectoredvecstirgs(10); 

    string input;
    cout << "Enter the input: ";
    cin >> input;

    while (input != "quit") { //condition // time while = o(n)
        addString(Vectoredvecstirgs, input);

        cout << "Enter the input: ";
        cin >> input;
    }


    printVectors(Vectoredvecstirgs);

    calculateAndPrintStats(Vectoredvecstirgs);

    return 0;
}
