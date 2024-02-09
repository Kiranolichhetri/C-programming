/*
pattern3
    *
   **
  ***
 ****
*****

*/

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++) //row
    {
        for(j=i;j<5;j++) //space
        {
            printf(" "); 
        }
        for(k=1;k<=i;k++) //column
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}