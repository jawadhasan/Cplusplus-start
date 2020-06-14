#include<stdio.h>

int main(){
    
    float celsius, fahrenheit, kelvin;

    celsius = 21;
    fahrenheit = celsius * 9 / 5 + 32;
    kelvin = celsius + 273.15f;

    //%d, %f etc.: %.2 means two digits after the decimal
    printf("%.2f C = %.2f F = %.2f K\n",
    celsius,
    fahrenheit,
    kelvin
    );

}