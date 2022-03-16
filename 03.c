#include <stdio.h>

float sum(float a, float b)
{
    printf("The sum of the two numbers is %.2f\n", a + b);

    return a + b;
}

int main()
{float x, y ,g;
    
printf("Enter the two numbers you want the sum of \n");
scanf("%f %f",&x,&y);

printf("%d",sum(x,y));

    return 0;
}
