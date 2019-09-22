#include <stdio.h>

int main()

{
        double Kelvin = 777.00;
	double Fahrenheit;
	Fahrenheit = (Kelvin - 273.15) * 1.80 + 32.00;
	printf("%f Degrees Fahrenheit", Fahrenheit);
}
