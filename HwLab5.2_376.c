#include<stdio.h>
int main(){
	int n,i,j;
	char space=' ';
	printf("Enter number = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n){
				printf("*");
			}else{
				printf("%c",space);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
