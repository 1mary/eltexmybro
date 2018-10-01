#include <stdio.h>
void main() {
	int m[6][6];
	int k = 1;
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			m[i][j] = k++;
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++) {
			k = m[i][j];
			m[i][j] = m[i][j + 1];
			m[i][j + 1] = k;
			j++;
		}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++)
			printf("%4.d", m[i][j]);
		printf("\n");
	}
}