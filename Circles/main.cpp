/*
    Start shape drawing file
*/

#include <iostream>
#include "Framework.h"

// Variables with global scope - do not rename them, feel free to change values though

// Screen dimensions
int gScreenWidth{800};
int gScreenHeight{600};

// Delay to slow things down
int gTimeDelayMS{10};

using namespace std;

int main()
{
	cout << "Hello circles" << endl;

	int xDIR1 = 5;
	int yDIR1 = 10;

	while(UpdateFramework())
	{
		// Draws a circle at 100,200 with radius 20
		DrawCircle(xDIR1,yDIR1,20);	

		if (xDIR1 == gScreenWidth)
		{
			xDIR1 = 0;
		}
		if (yDIR1 == gScreenHeight)
		{
			yDIR1 = 0;
		}
	}

	cout << "Bye bye" << endl;

	return 0;
}
