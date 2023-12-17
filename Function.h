#include <string.h>
#include <stdio.h>
#pragma once
/*
* @breaf  ������� ��� ���������� ����������� ������ �������� ���� �����.
* @param a: 1-�� �����
* @param b: 2-�� �����
*/
int GCD(int a, int b);
/*
* @breaf ���������� ����� �� < 1 �� n > � � ������� GCD ���������, �������� �� ����� ������� ������� � < n >.
* @param numder_: �����
*/
int eulerFun(int numder_);
/*
* @breaf ������� ������������ ��� ������� ��� ������� ���������� � < n > �������.
* @param x: �������� x.
* @param epsilon: �������� ��������.
*/
double Taylor(double x, double epsilon);