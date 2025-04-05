#include <stdio.h>

int main() {
	int x = 0, exp = 0;
	printf("enter a number and exp\n");
	scanf("%d %d", &x, &exp);
	int power(int, int);
	printf("%d power of %d is %d\n", exp, x, power(x, exp));
			return 0;
			}
