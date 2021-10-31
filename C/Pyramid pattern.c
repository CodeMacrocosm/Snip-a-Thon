/* Program to print the following pattern: 

          1
        1 2 3
      1 2 3 4 5
    1 2 3 4 5 6 7
  1 2 3 4 5 6 7 8 9 
              
*/     


#include <stdio.h>
int main()
{
    int n,x,y,k;
    printf("Enter the number of rows to show the number pattern:- \n");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        for(y=x;y<=n;y++)
        {
            printf(" ");
        }
        for(k=1;k<(x*2);k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    for(x=4;x>=1;x--)
    {
        for(y=n;y>x;y--)
        {
            printf("\n");
        }
        for(k=1;k<(x*2);k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
