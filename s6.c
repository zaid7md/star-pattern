#include<stdio.h>
int main()
{
int rows ; 
printf("rows:");
scanf("%d",&rows);
int i , k , space ; 
for( i = rows ; i>= 1 ; i--)
{
    
    for(space = 1 ; space <= rows-i ; space++)
    {
        printf(" ");
    }
    for(k = (2*i- 1) ; k >= 1 ; k--)
    {
        printf("*");
    }
    printf("\n");
}

return 0;
}