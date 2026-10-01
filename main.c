#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
   double x, y;

     // Введення значення аргументу x
     printf("Enter x:");
     scanf("%lf", &x);

     // Обчислення значення функції відповідно до заданого діапазону x
     if (x >= -20 && x < -1)
        y = 2 * pow(x, 3) - 4 * pow(x, 2);
     else if (x >= -1 && x < 1)
        y = 5;
     else if (x >= 5 && x < 15)
        y = sqrt(2 * pow(x, 2) - 5 * x);
     else
        y = 1 - x / 2;

     // Виведення результату обчислення
     system("cls");

     printf("x = %lf", x);
     printf("\ny = %lf", y);

      return 0;
}

