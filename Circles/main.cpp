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

	int x = 100;
	int y = 100;

	while(UpdateFramework())
	{
		// Draws a circle at 100,200 with radius 20
		DrawCircle(x+=5,y+=10,20);	

		if (x == gScreenWidth)
		{
			x = 0;
		}
		if (y == gScreenHeight)
		{
			y = 0;
		}
	}

	cout << "Bye bye" << endl;

	return 0;
}
