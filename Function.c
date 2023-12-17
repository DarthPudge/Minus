#include <string.h>
#include <stdio.h>
#include "Function.h"

int GCD(int a, int b) {
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int eulerFun(int numder_)
{
    int n = numder_;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (GCD(i, n) == 1) {
            count++;
        }
    }

    return count;
}

double Taylor(double x, double epsilon)
{
    // Первое слагаемое
    double summand = 1.0;
    // Текущее слагаемое
    double addend = 1.0;
    // Степень X
    double degree = 1.0;

    int i = 1;
    while (addend >= epsilon) {
        degree *= x; // Увеличиваем степень x
        addend = degree / i; // Вычисляем текущее слагаемое

        summand += addend; // Добавляем текущее слагаемое в результат

        i++; // Увеличиваем счетчик
    }

    return summand;
}