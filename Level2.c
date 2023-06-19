#include<stdio.h>
int num;
int main()
{
    //test git on level 2
    //get the number
    printf("Your number is ");
    scanf("%d", &num);
    //make the horizontal line base on num
    if(num > 0)
    {
        for(int i = 0; i < num; i++)
        {
            if(i % 2 == 0){
                for(int j = 0; j < num; j++)
                {
                    if(j % 2 == 0 )
                    {
                        printf("a");
                    }   else {
                        printf("z");
                    }
                }
            } else {
                for(int j = 0; j < num; j++)
                {
                    if(j % 2 == 0 )
                    {
                        printf("z");
                    }   else {
                        printf("a");
                    }
                }
            }
            printf("\n");
        }
    } else {
        printf("Please type again (Number has to be more than 0)");
        printf("Your number is ");
        scanf("%d", &num);
    }

}