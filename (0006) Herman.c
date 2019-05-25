#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)
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