#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void Normal()
{
	vector<string> v;
	ifstream in("code.cpp");
	string line;
	while (getline(in, line)) // getline returns true if read successfully
		v.push_back(line);	  // add the line to the end of v

	for (int i = 0; i <v.size(); i++)
		cout << i << ": " << v[i] << endl;
}

void reverse()
{
	vector<string> v;
	ifstream in("code.cpp");
	string line;
	while (getline(in, line)) // getline returns true if read successfully
		v.push_back(line);	  // add the line to the end of v

	for (int i = v.size() - 1; i >= 0; i--)
		cout << i << ": " << v[i] << endl;
}
// void concatation()
// {
// 	vector<string> v;
// 	ifstream in("code.cpp");
// 	string line;
// 	while (getline(in, line)) //grabbing here
// 		v.push_back(line);

// 	string concatenatedText; 
// 	for (const string &line : v) // go through each string element in the list made.
// 		concatenatedText += line; //add current line to the string to be conecated

// 	cout << concatenatedText << endl;
// }
int main()
{
	// vector<string> v;
	// ifstream in("code.cpp");
	// string line;
	// while (getline(in, line)) // getline returns true if read successfully
	// 	v.push_back(line);	  // add the line to the end of v

	// // add line numbers:
	// for (int i = 0; i < v.size(); i++)
	// 	cout << i << ": " << v[i] << endl;

	// cout << "\nreversed" << endl;

	// for (int i = v.size() - 1; i >= 0; i--)
	// 	cout << i << ": " << v[i] << endl;
	cout << "normal\n"<<endl;
	Normal();
	cout << "reverse\n"<<endl;
	reverse();
	// cout << "Concatation\n"<<endl;
	//concatation();
	return 0;
}