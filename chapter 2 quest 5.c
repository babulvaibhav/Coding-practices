#include<stdio.h>
#include<math.h>
main()
{
   //Distance between the two places on the earth
   //enter the angles in degrees
    float L1,L2,G1,G2,D;
    printf("For 1st place.\n\nlatitude- ");
    scanf("%f",&L1);
    printf("\nlongitude-");
    scanf("%f",&G1);
    printf("For 2nd place.\n\nlatitude- ");
    scanf("%f",&L2);
    printf("Longitude- ");
    scanf("%f",&G2);
    D=3963*acos(sin(L1/57.3)*sin(L2/57.3)+cos(L1/57.3)*cos(L2/57.3)*cos(G2/57.3-G1/57.3));
    printf("Distance between the places in nautical miles is = %f with an error of 0.000059",D);
    printf("\n\nDistance in Km is = %f",D*1.852);
}
