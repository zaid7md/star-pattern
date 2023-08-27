#include<stdio.h>
int main()
{
int i , space , k , j = 0 ; 
int rows ; 
scanf("%d",&rows);
for( i =1 ; i<= rows ; i++)
{
    for(space = 1 ; space <= rows-i ; space++)
    {
        printf(" ");
    }
    for(k = 1 ; k<= 2*i -1 ; k++)
    {
        printf("%d",j);
        j++;
    }
    printf("\n");
}
}