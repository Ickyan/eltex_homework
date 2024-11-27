#include <stdio.h>
#include <math.h>
#define dva 2

int main(){
	int N;
	if(scanf("%d", &N) == 1){
		if(N >= 0)
			printf("%.0f\n", pow(dva, N));	
		else
			printf("incorrect input\n");	
	}
	else
		printf("incorrect input\n");
	return 0;
}
