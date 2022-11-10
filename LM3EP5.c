#include<stdio.h>
#define PI 3.141592654

void main()

{
    float s, r, seg_angle, seg_angle_degree;

    printf("Insert the Arc Length: ");
    scanf("%f", &s);

    printf("Insert the Radius: ");
    scanf("%f", &r);

    seg_angle= s/r;

    seg_angle_degree= (seg_angle*180)/PI;
    printf("Segment Angle in RADIAN: %.2f \nSegment Angle in DEGREE: %.2f", seg_angle, seg_angle_degree);









}
