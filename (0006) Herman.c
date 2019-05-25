#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)
// #define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170
// #define PI 4 * atan(1)
int main()
{
    double radius, circle_area, taxi_area;
    scanf("%lf", &radius);
    circle_area = PI * radius * radius;
    taxi_area = radius * radius * 2;
    printf("%.6lf\n", circle_area);
    printf("%.6lf\n", taxi_area);

    return 0;
}