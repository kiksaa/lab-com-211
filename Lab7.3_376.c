#include<stdio.h>
int main(){
	int num[10],i;
	
	for(i=0;i<=9;i++){
		printf("Enter number# %d = ",i+1);
		scanf("%d",&num[i]);
	}
	printf("-----------Result >= 50--------------\n");
		for(i=0;i<=9;i++){
			if(num[i]>=50){
				printf("Number#%d and Index[%d] = %d\n",i+1,i,num[i]);
			}
		}
	
	system("pause");
	return 0;
}
