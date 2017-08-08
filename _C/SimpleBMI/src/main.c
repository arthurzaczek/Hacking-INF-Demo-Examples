#include <stdio.h>
#include <stdlib.h>


int main()

{
    double weight=0., height=0., bmi=0.;
    int bmi_class=-1;
    printf("Koerpergewicht [kg]: ");
    scanf("%lf", &weight);
    printf("Koerpergroesse [m]: ");
    scanf("%lf", &height);


    if (height<=0.)
        bmi= -1;
    else if (height<1.60)
        bmi=  -1;
    else if (weight<=0.)
        bmi=  -1;
    else if (weight<40.)
        bmi=  -1;
    else
        bmi=  (weight)/(height*height);


    if(bmi<=0 ){
        bmi_class =  -1;
    }
    else if(bmi<=16. ) {
        bmi_class =  10;
    } else if( bmi <17.) {
        bmi_class =   11;
    } else if (bmi <18.5) {
        bmi_class =   12;
    } else if (bmi<25) {
        bmi_class =   20;
    } else if(bmi<30) {
        bmi_class =   30;
    } else if (bmi<35) {
        bmi_class =   40;
    } else if (bmi<40) {
        bmi_class =   41;
    } else if(bmi>=40) {
        bmi_class =   42;
    }



    printf("m=%.2fkg l=%.2fm -> BMI=%.2f (", weight, height, bmi);
    printf("Kategorie %d \"", bmi_class);

     switch(bmi_class) {
    case -1:
        printf("ungueltig");
        break;
    case 10:
        printf("stark untergewichtig");
        break;
    case 11:
        printf("maessig untergewichtig");
        break;
    case 12:
        printf("leicht untergewichtig");
        break;

    case 20:
        printf("normalgewichtig");
        break;

    case 30:
        printf("praeadipoes");
        break;

    case 40:
        printf("adipoes Grad I");
        break;
    case 41:
        printf("adipoes Grad II");
        break;
    case 42:
        printf("adipoes Grad III");
        break;

    default:
        printf("Fehler");
        break;

    }

    printf("\")\n");
    return 0;

}
