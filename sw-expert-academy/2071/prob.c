#include<stdio.h>
#include<stdlib.h>
void memory_allocation(int n, int **nums){
	for(int i = 0 ; i < n ; i++){
		*(nums+i) = (int*)malloc(sizeof(int)*10);
	}
}
void input_numbers(int n, int **nums){
	int **p,*q;
	for(p = nums ; p < nums + n ; p++){
		for(q = *p ; q < *p + 10 ; q++){
			scanf("%d",q);
		}
	}
}
void print_calculated_avg(int n, int **nums){
	int **p,*q;
	int cnt = 1;
	float sum = 0;
	float avg = 0;	
	for(p = nums ; p < nums + n ; p++){
		for(q = *p ; q < *p + 10 ; q++){
			sum += *q;	
		}
		avg = sum/10;
		avg = (int)(avg+0.5);
		printf("#%d %.f\n",cnt++, avg);
		sum = 0;
		avg = 0;
	}
}
void free_allocation(int n, int **nums){
	for(int i = 0 ; i < n ; i++){
		free(*(nums+i));
	}
	free(nums);
}
int main(){
	int n;
	scanf("%d",&n);
	int **nums;
	
	nums = (int**)malloc(sizeof(int*)*n);
	memory_allocation(n,nums);
	input_numbers(n,nums);
	print_calculated_avg(n,nums);

	return 0;
}
