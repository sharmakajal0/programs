#include<stdio.h>

float sq_rt(int n){
	float temp, sqrt;
	sqrt = n/2;
	temp = 0;
	while(sqrt != temp){
		temp = sqrt;
		sqrt = (n/temp + temp) / 2;
	}
	return sqrt;
}

int check_prime(int n, int root){
	int flag=0;
	int original_number = n;
	int i;
	i=2;
	while(i <= root){
		if((original_number % i) == 0){
			flag = 1;
			break;
		}
		i++;
	}

	return flag;
}

int main(){
	int n;
	int T;
	scanf("%d", &T);
	while(T > 0){
		scanf("%d", &n);
		int root = sq_rt(n);
		int result = check_prime(n, root);

		if (result == 0){
			printf("Yes\n");
		} else {
			printf("No\n");
		}
		T--;
	}

	return 0;
}
