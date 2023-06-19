#include<stdio.h>
#include<math.h>
float weight;
float height;
float bmi;
int main()
{
    printf("Weight(Kg): ");
    scanf("%f", &weight);
    printf("Height(cm): ");
    scanf("%f", &height);
    height /= 100;
    bmi = weight / pow((double)height, 2);
    printf("%f\n", bmi);
    if(bmi > 30)
    {
        printf("too fat");
    } else if (bmi > 25){
        printf("above average");
    } else if (bmi > 18.5){
        printf("average");
    } else {
        printf("too skinny");
    }
}