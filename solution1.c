    #include <stdio.h>
    #include <math.h>

    int main()
      {
    double w, a1, a2, a3, m;
    double angle1, angle2, angle3;
    int k = 0;


    printf("Enter wavelength in nm: ");
    scanf("%lf", &w);

    if (w < 380 || w > 750)
    {

        printf ("Out of the range.Please enter a valid number between 380 and 750.\n");
        return 0;
    }


    printf("Enter diffraction order m: ");
    scanf("%lf", &m);

    printf(" Type the value for slit 1's width (in micrometers): ");
    scanf("%lf", &a1);
    printf("Type the value for Slit 2's width (in micrometers): ");
    scanf("%lf", &a2);
    printf("Type the value for Slit 3's width (in micrometers): ");
    scanf("%lf", &a3);

    angle1 = asin((m * w * 1e-9)
                  / (a1 * 1e-6)) * 180 / 3.1416;
    angle2 = asin((m * w * 1e-9)
                  / (a2 * 1e-6)) * 180 / 3.1416;
    angle3 = asin((m * w * 1e-9)
                  / (a3 * 1e-6)) * 180 / 3.1416;


    if (angle2 > angle1)
    k = 1;
    else
    k = 0;


    if (k == 0)
    if (angle3 > angle1)
        k = 2;

    else
    if (angle3 > angle2)
        k = 2;

    if (k == 0)
    printf("Maximum bending occurred through slit 1 at angle %.2f degrees\n", angle1);

    else if (k == 1)
    printf("Maximum bending occurred through slit 2 at angle %.2f degrees\n", angle2);
     else
    printf("Maximum bending occurred through slit 3 at angle %.2f degrees\n", angle3);


    return 0;
}
