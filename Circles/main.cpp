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

	bool xDIR1 = false;
	bool yDIR1 = false;

	int xLOC1 = 0;
	int yLOC1 = 0;
	int scale = 20;
	int xspeed = 5;
	int yspeed = 5;

	while(UpdateFramework())
	{
		// Updates location based on direction variable
		if (xDIR1 == true){xLOC1-= xspeed;}
		else {xLOC1+= xspeed;}

		if (yDIR1 == true){yLOC1-= yspeed;}
		else { yLOC1+= yspeed; }

		// Checks for boundaries and reverses direction variable
		if (xLOC1 == gScreenWidth-(scale * 2)) { xDIR1 = true; }
		else if (xLOC1 == 0) { xDIR1 = false; }

		if (yLOC1 == gScreenHeight-(scale * 2)) { yDIR1 = true; }
		else if (yLOC1 == 0) { yDIR1 = false; }

		// Draws a circle at 100,200 with radius 20
		DrawCircle(xLOC1,yLOC1,scale);
	}

	cout << "Bye bye" << endl;

	return 0;
}
