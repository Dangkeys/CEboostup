#include<stdio.h>
#include<math.h>
int num;
int main()
{
    //get the number
    //test git
    printf("Your number is ");
    scanf("%d", &num);
    int colSize = num*2 - 1;
    int wingSize = num - 1;
    int halfWingSize = round(colSize / 2);
    if (num > 2)
    {
        //create top wing
        for(int i = 0;i < wingSize; i++)
        {
            for(int j = 0; j < colSize; j++)
            {
                if(j <= i || j >= colSize - i - 1)
                {
                    printf("#");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        //create body wing
        for(int i = 0; i < colSize; i++)
        {
            printf("#");
        }
        printf("\n");
        //create bottom wing
         for(int i = wingSize -1;i >= 0; i--)
        {
            for(int j = 0; j < colSize; j++)
            {
                if(j <= i || j >= colSize - i - 1)
                {
                    printf("#");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else {
            printf("Please type again (Number has to be more than 2)");
            printf("Your number is ");
            scanf("%d", &num);
            }
}