#include <stdio.h>
#include <stdlib.h>
#include <disc.h>
int main(int argc, char *argv[])
{
	double e;
    long d = 0;
    int a, b, c;
    double x1 = 0, x2 = 0;
    while(d != 2){
        printf("\n1) Решение квадратного уравнения\n2) Выход \n\n");
        scanf ("%ld", &d);
        
        switch(d){
            case 1:
                printf ("Введите значение a: ");
				scanf ("%d", &a);
				printf ("Введите значение b: ");
				scanf  ("%d", &b);
				printf ("Введите значение c: ");
				scanf ("%d", &c);
			e = urav(a, b, c, &x1, &x2);
			if(e == 2){
				printf ("Первый корень: %lf \n", x1);
				printf ("Второй корень: %lf \n", x2);
				system ("PAUSE");
			}
			if(e == 1){
				printf ("Корень x1=x2: %lf \n", x1);
				system ("PAUSE");
			}
			if(e == 0){
				printf ("Нет вещественных корней");
				system ("PAUSE");
			}
            break;
            case 2:
            break;
            default:
               printf ( "\nОшибка! \n" );
               system ("PAUSE");
            break;
        }
    }
}
