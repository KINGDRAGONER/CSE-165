#include <iostream>
#include <vector>
#include "Rect.h"
#include "Vec.h"

using namespace std;
int main()
{
	vector<Rect> rectangles;

	int count = 0;
	while (true)
	{
		if (count == 0){
				cout << "Type 4 floats to define a rectangle: ";
				count++;
		}
		else if (count>0){
			cout << "Type 4 floats to define next rectangle: ";
		}
		float x, y, width, height;
		cin >> x >> y >> width >> height;

		if (x < 0 && y < 0 && width < 0 && height < 0)
		{
			break;
		}

		Rect rect(x, y, width, height);
		rectangles.push_back(rect);
	}

	while (true)
	{
		cout << "Type 2 floats to define a point: ";
		float px, py;
		cin >> px >> py;

		if (px == -99.0f && py == -99.0f)
		{
			break;
		}

		for (size_t i = 0; i < rectangles.size(); i++)
		{
			if (rectangles[i].contains(Vec(px, py)))
			{
				cout << "The point is INSIDE of rectangle " << i << endl;
			}
			else
			{
				cout << "The point is OUTSIDE of rectangle " << i << endl;
			}
		}
	}

	cout << "Finished!" << endl;

	return 0;
}
