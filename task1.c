#include <stdio.h>
int axyusak(int x) { 
for(int i = 0; i <= 9; ++i){
	int res = i * x;
	printf("%d * %d = %d\n", x, i, res);
}
return 0;
}
