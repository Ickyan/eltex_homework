#include <stdio.h>
#include <math.h>
#define BASE 2

int main(){
    int N;
    int *ptr_N = &N;

	if(scanf("%d", &N) == 1){
		if(*ptr_N >= 0)
			printf("%.0f\n", pow(BASE, *ptr_N));	
		else
			printf("incorrect input\n");	
	}
	else
		printf("incorrect input\n");


    return 0;
}