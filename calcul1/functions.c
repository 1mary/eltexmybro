#include"Header.h"
void plus(struct number *n1, struct number n2) {
	n1->a = n1->a + n2.a;
	n1->b = n1->b + n2.b;
}
void minus(struct number *n1, struct number n2) {
	n1->a = n1->a - n2.a;
	n1->b = n1->b - n2.b;
}
void multiplication(struct number *n1, struct number n2) {
	float a1 = (n1->a *n2.a) - (n1->b*n2.b);
	n1->b = (n1->a* n2.b)+(n1->b*n2.a);
	n1->a = a1;
}
void division(struct number *n1, struct number n2) {
	float a1;
		a1 = ((n1->a *n2.a) + (n1->b*n2.b)) / (n2.a*n2.a + (n2.b*n2.b));
		n1->b = ((n1->b* n2.a) - (n1->a*n2.b)) / (n2.a*n2.a + (n2.b*n2.b));
		n1->a = a1;
	}
