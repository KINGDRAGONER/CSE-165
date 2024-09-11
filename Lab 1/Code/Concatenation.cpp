#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// void Normal()
// {
// 	vector<string> v;
// 	ifstream in("code.cpp");
// 	string line;
// 	while (getline(in, line)) // getline returns true if read successfully
// 		v.push_back(line);	  // add the line to the end of v

// 	for (int i = 0; i <v.size(); i++)
// 		cout << i << ": " << v[i] << endl;
// }

// void reverse()
// {
// 	vector<string> v;
// 	ifstream in("code.cpp");
// 	string line;
// 	while (getline(in, line)) // getline returns true if read successfully
// 		v.push_back(line);	  // add the line to the end of v

// 	for (int i = v.size() - 1; i >= 0; i--)
// 		cout << i << ": " << v[i] << endl;
// }
void concatation()
{
	vector<string> v;
	ifstream in("code.cpp");
	string line;
	string all_the_strings="";
	while (getline(in, line)) // getline returns true if read successfully
		v.push_back(line);	  // add the line to the end of v
// Hoping this is the output???
	for (int i = 0; i <v.size(); i++)
		all_the_strings +=v[i]+"\n"; // the +""\n" is to make it so the output isnt 1 line jambeled like }nt maincout << (-b - (sqrt((b*b) - (4 * a * c)))) / (2 * a) << endl;l;

	cout << all_the_strings << endl;
}
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
	// cout << "normal\n"<<endl;
	// Normal();
	// cout << "reverse\n"<<endl;
	// reverse();
	cout << "Concatation\n"<<endl;
	concatation();
	return 0;
}