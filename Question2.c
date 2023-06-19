#include<stdio.h>
#include<math.h>
int main()
{
    float input;
    scanf("%f", &input);
    float areaTriangle = sqrt(3)/4 * pow((double)input, 2);
    float areaCircle = M_PI * pow((double)input, 2); 
    float areaSquare = pow((double)input, 2);
    printf("%.2f\n", areaTriangle);
    printf("%.2f\n", areaCircle);
    printf("%.2f\n", areaSquare);
}
