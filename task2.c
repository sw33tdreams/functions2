#include <stdio.h>
void axyusak() { 
for(int i = 1; i <= 10; ++i){
	for(int x = 1; x <= 9; ++x){
	int res = i * x;
	printf("%d * %d = %d\n", x, i, res);
}
printf("\n");
}
}
