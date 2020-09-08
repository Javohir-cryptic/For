#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)

int main()
{
    float S = 0, z = 1, c = 1, d = 2;
    int i;
    setlocale(LC_ALL, "Rus");     
    for (i = 1; i <= 20; i++)
    {
        S = S + z * c / d;
        z = -z;
        c++;
        d = 2 * d;
    }
    printf("Сумма S = %f", S);
    getchar();
}
