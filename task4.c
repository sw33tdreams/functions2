#include <stdio.h>

int tv_gumar(int x){
int res = 0;
	for(int i = 10, j = 1; i <= 1000000000; i *= 10, j *= 10){
	int tvanshan = (x % i) / j;
	res += tvanshan;
	}
	return res;
}
