    #include<stdio.h>
    #include<math.h>

    int main()
     {
    int m1 = 3;
    double wl1 = 530e-9;
    double angle1 = 65;

    int m2 = 2;
     double wl2 = 700e-9;
    double d, s_tg2, tr2;

    d = (m1 * wl1) / sin(angle1*3.1416/ 180);
    s_tg2 = (m2 * wl2) / d;

     if(s_tg2 > 1.0)
    {
        printf("No visible second-order diffraction spot for red ligh\n");
    }
    else {
        tr2 = asin(s_tg2)* 180/3.1416;

        printf("Red light's second-order bright spot appears at an angle of: %.2lf degrees \n",tr2);

    }
    return 0;
    }

