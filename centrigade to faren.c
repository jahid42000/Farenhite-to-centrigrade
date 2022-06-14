#include <stdio.h>
#define pr printf
int main ()
{
    float C,F;
    pr("Enter the value of centrigrade :");
    scanf("%f",&C);

    F=(C*1.08) +32 ;
    pr("Farenhite = %.2f",F);

}
