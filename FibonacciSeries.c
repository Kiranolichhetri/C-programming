#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("Enter the number of term:");  /* let n=5 */
    scanf("%d",&n);
    for(i=1;i<=n;i++) /* (1<=5 2<=5 3<=5 4<=5 5<=5) true (6<=5) false */
    {
        printf("%d",a); /* 0 */
        c = a+b; /* c=1 */
        a=b; /* a=1 */
        b=c; /*b=1 */
    }
    return 0;
      
}

