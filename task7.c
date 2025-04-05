int power(int x, int exp){
	int res = 1;
	if(exp == 0){
		res = 1;
	}else{
	for(int i = 1; i <= exp; ++i){
		res *= x;
	}
	}
	return res;
}
