#include<stdio.h>
void main(){
	int n;
	scanf("%d", &n);
	const int N = 100;
	int m[N][N];
	int k = 1;
	for (int u = 0; u < n / 2; u++) { // кол-во внешних квадратов
		for (int vs = u; vs < n - u-1; vs++)// верхняя сторона
			m[u][vs] = k++;
		for (int vs = u; vs < n - u-1; vs++)// правая сторона
			m[vs][n-u-1] = k++;
		for (int vs = n-u-1; vs >u; vs--)//нижняя сторона
			m[n-u-1][vs] = k++;
		for (int vs = n - u-1; vs >u; vs--)//левая сторона
			m[vs][u] = k++;
	}
	m[n / 2][n / 2] = n * n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%4.d", m[i][j]);
		printf("\n");
	}
}