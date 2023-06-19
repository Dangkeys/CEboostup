#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float num;
int colAmount;
int halfRowAmount;
int main()
{
    printf("Your number is ");
    scanf("%f", &num);
    colAmount = num;//check
    halfRowAmount =round(num / 2 - 1);//check
    //chage colAmount to odd number        
    if(colAmount % 2 == 0)
    {
        colAmount--;
    }// check
    //create the top half
    if(num >= 3)
    {
        for(int i = 0; i < halfRowAmount; i++)
        {
            for(int j = 0; j < colAmount; j++)
            {
                if(abs(i - j) == halfRowAmount || i + j == halfRowAmount)
                {
                    printf("#");
                } else {
                    printf("_");
                }
            }
            printf("\n");
        }
        //create the body
        //need to check the odd or even 
        if((int)num % 2 == 0)
        {
            for(int i = 0; i < colAmount; i++)
            {
                if(i == 0 || i == colAmount - 1)
                {
                    printf("#");
                } else {
                    printf("_");
                }
            }
            printf("\n");
            for(int i = 0; i < colAmount; i++)
            {
                if(i == 0 || i == colAmount - 1)
                {
                    printf("#");
                } else {
                    printf("_");
                }
            }
        } else {
            for(int i = 0; i < colAmount; i++)
            {
                if(i == 0 || i == colAmount - 1)
                {
                    printf("#");
                } else {
                    printf("_");
                }

            }
        }
        //create the bottom half
        printf("\n");
        for(int i = halfRowAmount - 1; i >= 0; i--)
        {
            for(int j = 0; j < colAmount; j++)
            {
                if(abs(i - j) == halfRowAmount || i + j == halfRowAmount)
                {
                    printf("#");
                } else {
                    printf("_");
                }
            }
            printf("\n");
        }
    }
    else {
        printf("Please type again (Number has to be more than 4)");
        printf("Your number is ");
        scanf("%d", &num);
    }
    
}