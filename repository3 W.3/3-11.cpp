#include<stdio.h>

int main() {
	unsigned int num1, a, b;
	float num2, re;
	scanf_s("%u", &num1);
	if (num1 >= 1 && num1 <= 100000) {
		if (num1 % 3 != 0 && num1 % 11 != 0) {
			a = num1 % 3;
			b = num1 % 11;
			num2 = num1 / 10.0;
			re = num1 - num2;
			printf("%u %u %.2f", a, b, re);
		}
	}
	return 0;
}