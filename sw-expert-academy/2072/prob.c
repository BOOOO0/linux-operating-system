#include<stdio.h>
#include<stdlib.h>
int odd_sum(int *nums){
	int sum = 0;
	int *p;
	for(p = nums ; *p ; p++){
		if(*p % 2 != 0){
			sum += *p;
		}
	}
	return sum;
}
int main(){
	int n;
	int **nums;
	int answer;
	scanf("%d",&n);
	nums = (int**)malloc(sizeof(int*)*n);
	for(int i = 0 ; i < n ; i++){
		*(nums+i) = (int*)malloc(sizeof(int)*10);
	}
	for(int i = 0 ; i < n ; i++){
		int *q = *(nums+i);
		for(int j = 0 ; j < 10 ; j++){
			scanf("%d", q+j);
		}
	}
	for(int i = 0 ; i < n ; i++){
		int *q = *(nums+i);
		for(int j = 0 ; j < 10 ; j++){
			printf("%d ",*(q+j));
		}
		printf("\n");
	}
	for(int i = 0 ; i < n ; i++){
		answer = odd_sum(*(nums+i));
		printf("#%d %d\n", i+1, answer);
	}

	for(int i = 0 ; i < n ; i++){
		free(*(nums+i));
	}
	free(nums);

	return 0;
}
