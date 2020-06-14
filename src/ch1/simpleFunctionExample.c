#include <stdio.h>

float celsius_to_fohrenheit(float celsius){
    //here we are putting knowledge of conversion
    return celsius * 9 / 5 + 32;
}

float celsius_to_kelvin(float celsius){
    //similarly knowledge about kelvin conversion
    return celsius + 273.15f;
}

int main()
{
    //This example is step forward from whileLoopExample.
    //This shows use of functions and how we can reduce number of variables
    //Notice: interim variables fahrenheit and kelvin are replaced with direct function calls.

    float celsius = 0;

    while (celsius < 100)
    {
        celsius = celsius + 10;
     
        //%d, %f etc.: %.2 means two digits after the decimal
        printf("%.2f C = %.2f F = %.2f K\n",
               celsius,
               celsius_to_fohrenheit(celsius),
               celsius_to_kelvin(celsius)
               );
    }
}