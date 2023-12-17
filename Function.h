#include <string.h>
#include <stdio.h>
#pragma once
/*
* @breaf  Функция для нахождения наибольшего общего делителя двух чисел.
* @param a: 1-ое число
* @param b: 2-ое число
*/
int GCD(int a, int b);
/*
* @breaf Перебираем числа от < 1 до n > и с помощью GCD проверяем, является ли число взаимно простым с < n >.
* @param numder_: Число
*/
int eulerFun(int numder_);
/*
* @breaf Функция рассчитывает ряд Тейлора для функции экспоненты с < n > членами.
* @param x: Значение x.
* @param epsilon: Заданная точность.
*/
double Taylor(double x, double epsilon);