#include<stdio.h>
int openBracketAmount = 0;
int closeBracketAmount = 0;
int isFirstBracketOpenBracket = 0;
int isLastBracketCloseBracket = 0;
char input[200];
int main()
{
    scanf("%s", input);
    //check the first and the last blacket
    for(int i = 0; input[i] != '\0'; i++)
    {
        if(input[i] == '(')
        {
            openBracketAmount++;
            isFirstBracketOpenBracket = 1;
        }
        if(input[i] == ')')
        {
            if(isFirstBracketOpenBracket != 1)
            {
                printf("Invalid");
                return 1;
            } else {
                closeBracketAmount++;
            }

        }
    }
    //check is last bracket close bracket
    for(int i = 200; i >= 0; i--)
    {
        if(input[i] == '(')
        {
            if(isLastBracketCloseBracket != 1)
            {
                printf("Invalid");
                return 1;
            }
        }
        if(input[i] == ')')
        {
            isLastBracketCloseBracket = 1;
        }
    }
    printf("%d, %d",openBracketAmount, closeBracketAmount);
    if(openBracketAmount == closeBracketAmount)
    {
        printf("Valid");
    } else {
        printf("Invalid");
    }
}