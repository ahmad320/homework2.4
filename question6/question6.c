#include <stdio.h>

int main()
{
	float Pi = 3.1415;
	float h = 4.0;
	float r = 2.0;
	float Surface_area;
	Surface_area = ( 2.0 * r * r *Pi) + ( 2.0 * r * Pi * h);
	printf("Surface area is %f", Surface_area);

}
