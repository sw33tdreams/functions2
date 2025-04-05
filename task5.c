#include <stdio.h>
void parztiv(int x){
int print = 0;
	for(int i = 2; i <= (x / 2); ++i){
		if(x % i == 0){
			print = printf("your number is not parz\n");
			break;}
	}
if (print <= 0)
	printf("your number is parz!!!");
	}
