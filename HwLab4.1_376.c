#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter number = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d",j);//head
		}
		printf("\n");
	}
	for(i=i-1;i>=0;i--){
		for(j=0;j<i;j++){ 
			printf("%d",j);//tail
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
