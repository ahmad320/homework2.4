#include <stdio.h>
#include <math.h>
int main()
{
	int x1 = -1;
	int x2 = 10;
	int y1 = 5;
	int y2 = -3;
	float distance;
	distance = sqrt( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - y1) * ( y2 - y1 ) );
	printf("distance between the two points is %f", distance);

}
