#include <stdio.h>

int main()
{
	float radius = 6371.00;
	float volume;
	float Pi = 3.14159265359;
        volume = 4.0 * (Pi * radius * radius * radius) / 3;	
	printf("Volume is %f km^3", volume);
	
}
