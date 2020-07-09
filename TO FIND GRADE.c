#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("enter percentage");
    scanf("%f",&a);

    if(a>80)
    {
        printf("\n A grade");
    }
    else if(a>=70)
    {
       printf("\n B grade");
    }
    else if(a>=60)
    {
        printf("\n C grade");
    }
    else if(a>=45)
    {
        printf("\n D grade");
    }
    else
    {
        printf("\n FAIL");
    }

    return 0;
}
