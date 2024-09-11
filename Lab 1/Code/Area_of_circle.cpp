#include <iostream>
#include <math.h>
using namespace std;

    double area_of_circle(double radius_of_circle){
        double area_of_circle=0;
        double r = radius_of_circle;
        return (M_PI*pow(r,2));
    }
int main()
{
    double radius_of_circle;
    cout<<"Input: ";
	cin >> radius_of_circle;
	
    cout << "Area: "<<area_of_circle(radius_of_circle) << endl;
	return 0;
}