#include <stdio.h>

int parz(int x){
	int num1 = 0, num2 = 0, res = 0;
	for(int i = 0; i < x / 2; ++i){
	       num1 = i;
       	       num2 = x - i;
		       
	for(int i = 2; i <= (num1 / 2); ++i){      
		if(num1 % i == 0){
			for(int i = 2; i <= (num2 / 2); ++i){
				if(num2 % i == 0){
			res = 1;
			break;}
			break;}
			break;}	
	}
	}
	printf("%d = %d + %d\n",x, num1, num2);

	return res;
	}
