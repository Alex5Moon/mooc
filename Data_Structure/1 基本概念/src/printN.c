#include<stdio.h>
void printN(int N);
int main(void){
	int n;
	scanf("%d",&n);
	printN(n);
	return 0;	
}
void printN(int N){
	int i;
	for(i=1;i<=N;i++){
		printf("%d\n",i);
	}
}
