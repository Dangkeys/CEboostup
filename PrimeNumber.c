#include<stdio.h>
#include<math.h>
int num;

int main()
{
    printf("Your number is ");
    scanf("%d", &num);
    //if numer is 1 or 0 return not prime

    while(num != -99)
    {
         if(num == 1 || num == 0)
        {
            printf("Your number is not prime number\n"); 
            printf("Your number is ");
            scanf("%d", &num);
        }else {
            //declare isPrime and set it to 1 
            int isPrime = 1;
            //check num == prime
            for(int i = 2; i <= sqrt((double)num); i++)
            {
                if(num % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            //if mod is equal to zero then break and change isPrime = 0
            }
            //if num is prime return prime
            if(isPrime != 0)
            {
                printf("Your number is prime number\n");
            } else {
             //else return not prime
                printf("Your number is not prime number\n");
            }
            //else return not prime

            //ask again
            printf("Your number is ");
            scanf("%d", &num);
        
        
    }
    }
   printf("You enter -99 which is the number that I hate the most. So, I will just end this program");
}