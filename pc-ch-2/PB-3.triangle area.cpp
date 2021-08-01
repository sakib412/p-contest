#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s, area;
    printf("Input triangle's 3 side length: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle is: %.2f", area);
    return 0;
}