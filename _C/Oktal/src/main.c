#include <stdio.h>
#include <stdlib.h>

int main(){

    int octal, decimal;
    printf("Oktalzahl eingeben: ");
    scanf("%d", &octal);

    decimal= octal/100 * 8*8 + octal/10%10 * 8 + octal%10;
    printf("dezimal: %d\n", decimal);
    printf("Ziffernsumme: %d\n", decimal/100 + decimal/10%10 + decimal%10);




}
