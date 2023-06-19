#include<stdio.h>
int size;
int max = 0;
int main()
{
    printf("How many number? ");
    scanf("%d", &size);
    int num[size];
    for(int i = 0; i < size; i++)
    {
        printf("Number %d is ",i + 1);
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < size; i++)
    {
        //if max less than numi max = numi
        if(max < num[i])
        {
            max = num[i];
        }
        //else do nothing
    }
    printf("%d", max);
}