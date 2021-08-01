#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, A, B, C;
    printf("Input triangle's 3 side length: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    A = acos((b * b + c * c - a * a) / (2 * b * c));
    B = acos((c * c + a * a - b * b) / (2 * c * a));
    C = acos((a * a + b * b - c * c) / (2 * a * b));
    printf("Angles are in degrees: %.2f %.2f %.2f", A * 180 / acos(-1.0), B * 180 / acos(-1.0), C * 180 / acos(-1.0));
    return 0;
}