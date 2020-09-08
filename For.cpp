#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)

int main()
{
    int i, N;
    setlocale(LC_ALL, "Rus");
    printf("Введите число N: ");  
    scanf("%d", &N);      
    for (i = 1; i <= N; i++)
    {
        printf("Квадрат числа %d равен %d\n", i, i * i);
    }
    getchar();
}
