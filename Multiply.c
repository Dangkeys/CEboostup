#include<stdio.h>
int num;
int answer[];
int main()
{
    scanf("%d", &num);
    for(int i = 1; i <= 12; i++)
    {
        answer[i] = num * i;
        printf("%d * %d = %d\n",num, i,  answer[i]);
    }
}