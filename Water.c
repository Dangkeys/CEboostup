#include<stdio.h>
int num;
int ceilNum;
int main()
{

    scanf("%d", &num);
    ceilNum = num;
    while(ceilNum % 5 != 0)
    {
        ceilNum--;
    }
    while(ceilNum != 1)
    {
        ceilNum /= 5;
        num += ceilNum;
    }
    printf("%d",num);
}