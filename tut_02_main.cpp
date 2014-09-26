#include "Triangle.h"
#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
	
	
	Triangle t(Point(), Point(1), Point(2, 3));
	t.display();

	cout << endl;
	return 0;
}

