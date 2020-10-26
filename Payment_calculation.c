#include <stdio.h>
int main()
{
    double Hours, Rate, Gross, Net, Tax;
    printf("Enter value of hours & rate ");
    scanf("%lf%lf", &Hours, &Rate);

    Gross = Hours*Rate;
    printf("The gross pay is %2lf\n",Gross);

    if(Gross>=5000){
        Tax= 5000*0.05;
        Net= Gross-Tax;
        printf("The net gross of pay is %2lf", Net);}
return 0;
}
