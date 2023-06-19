#include<stdio.h>
int num;
int main()
{
    printf("Your number is ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        printf("*");
    }
}