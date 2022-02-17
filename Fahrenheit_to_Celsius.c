#include <stdio.h>
 
int main()
{
    float celsius, fahrenheit;
 
    
    scanf("%f", &fahrenheit);
 
    // Convert the temperature from f to c formula
    celsius = (fahrenheit - 32) * 5 / 9;
    //celsius = 5 * (fahrenheit - 32) / 9;
    //celsius = (fahrenheit - 32) * 0.55556; 

    printf("%.2f",celsius);
 
    return 0;
}