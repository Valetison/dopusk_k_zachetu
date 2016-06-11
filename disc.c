#include <math.h>
#include <stdlib.h>
#include <stdio.h>

double urav(int a, int b, int c, double *x1, double *x2)
{
	double D = (b*b - 4*a*c);
		printf ("D= %lf \n", D);
		printf ("a= %d \n", a);
		printf ("b= %d \n", b);
		printf ("c= %d \n", c);
    if(D > 0)
    {
        *x1 = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a); 
        *x2 = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        if (*x1 > *x2){
			double r = *x1;
			*x1 = *x2;
			*x2 = r;
		}
			
		return 2;
    }
    printf ("x1= %lf \n", *x1);
	if(D == 0)
    {
        *x1 =  -(b / (2 * a));
        printf ("x1= %lf \n", *x1);
		return 1;
    }

    return 0;
}
