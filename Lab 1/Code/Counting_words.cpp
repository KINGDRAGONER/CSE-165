#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;

int count_of_white_spaces(string word_file){
    ifstream inputFile(word_file);
    int blank_space_Count = 0;
    string words;

    while (inputFile >> words) {
        blank_space_Count++;
    }
    return blank_space_Count;
    }
int main()
{
string words_file ="words.txt";

cout<<"White Space Count: "<<count_of_white_spaces(words_file)<<endl;
	return 0;
}