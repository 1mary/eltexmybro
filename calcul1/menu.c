#include<locale.h>
#include"Header.h"
void main(){
	setlocale(LC_CTYPE, "Russian");
	int p=-1;
	while (p != 5) {
		switch (p) {
			struct number n1, n2;
		case 1:
			printf("Enter the first item. First, the real part, then the imaginary\n");
			scanf("%f%f", &n1.a, &n1.b);
			printf("Enter the second term.First, the real part, then the imaginary\n");
			scanf("%f%f", &n2.a, &n2.b);
			plus(&n1, n2);
			printf("Answer:%f+i*(%f)\n", n1.a, n1.b);
			break;
		case 2: 
			printf("Enter decreasing. First, the valid part, then the imaginary space\n");
			scanf("%f%f", &n1.a, &n1.b);
			printf("Enter the deductible. First, the real part, then the imaginary\n");
			scanf("%f%f", &n2.a, &n2.b);
			minus(&n1, n2);
			printf("Answer:%f+i*(%f)\n", n1.a, n1.b);
			break;
		case 3:
			printf("Enter the first multiplier. First, the real part, then the imaginary\n");
			scanf("%f%f", &n1.a, &n1.b);
			printf("Enter the second multiplier. First, the real part, then the imaginary\n");
			scanf("%f%f", &n2.a, &n2.b);
			multiplication(&n1, n2);
			printf("Answer:%f+i*(%f)\n", n1.a, n1.b);
			break;
		case 4:
			printf("Enter the divisor. First, the real part, then the imaginary\n");
			scanf("%f%f", &n1.a, &n1.b);
			printf("Enter the dividend. First, the real part, then the imaginary\n");
			scanf("%f%f", &n2.a, &n2.b);
			if (n2.a*n2.a + (n2.b*n2.b) == 0) printf("ERROR.\n");
			else {
				division(&n1, n2);
				printf("Answer:%f+i*(%f)\n", n1.a, n1.b);
			}
			break;
		}
		printf("1.Plus\n2.Minus\n3.Multiplication\n4.Devision\n5.Exit\n");
		scanf("%d", &p);
	}
}