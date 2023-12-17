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
    // ������ ���������
    double summand = 1.0;
    // ������� ���������
    double addend = 1.0;
    // ������� X
    double degree = 1.0;

    int i = 1;
    while (addend >= epsilon) {
        degree *= x; // ����������� ������� x
        addend = degree / i; // ��������� ������� ���������

        summand += addend; // ��������� ������� ��������� � ���������

        i++; // ����������� �������
    }

    return summand;
}