#pragma once
#include<stdio.h>
struct number { //комплексное число a+b*i
	float a;
	float b;
};
void plus(struct number *n1, struct number n2);
void minus(struct number *n1, struct number n2);
void multiplication(struct number *n1, struct number n2);
void division(struct number *n1, struct number n2);