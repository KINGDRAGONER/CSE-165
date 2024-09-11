#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;

string capatalize(string word)
{
    return " ";
}

int count_word_occurences(string word_file,string input_wordoccur)
{
    ifstream inputFile(word_file);
    int words_occured_Count = 0;
    string word;
    transform(input_wordoccur.begin(), input_wordoccur.end(), input_wordoccur.begin(), ::tolower); // Convert input word to lowercase
    while (inputFile >> word) {
        transform(word.begin(), word.end(), word.begin(), ::tolower); //std::transform function to convert all
        //https://cplusplus.com/reference/algorithm/transform/
        int pos = 0;                           //std::size_t can store the maximum size of a theoretically possible object of any type (including array).                     
        //characters in the word to lowercase.
        if((pos = word.find(input_wordoccur, pos)) != string::npos) //for the puncuation
        { //find returns a valid position (!= to string::npos)
        //it means that the target word was found in the word. In this 
        //case, you increment the words_occured_Count 
            words_occured_Count++;
        }
    }
    return words_occured_Count;
    }

int main()
{
string word_tobe_occured;
cin >> word_tobe_occured;
string words_file ="words.txt";

cout<<"Occured Count: "<<count_word_occurences(words_file,word_tobe_occured)<<endl;
	return 0;
}