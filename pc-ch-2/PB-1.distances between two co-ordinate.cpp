#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distance;
    printf("Input first co-ordinate (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Input second co-ordinate (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    distance = sqrt(pow(fabs(x2 - x1), 2) + pow(fabs(y2 - y1), 2));
    printf("Distance between two co-ordinate is %.2f\n", distance);
    return 0;
}
