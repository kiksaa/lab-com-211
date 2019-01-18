#include<stdio.h>
int main(){
	int num[20],i,min;
	for(i=1;i<=20;i++){
		printf("Enter number %d = ",i);
		scanf("%d",&num[i]);
		
		if(num[i]<min){
			min=num[i];
		}
	}
	for(i=1;i<=20;i++){
		if(min==num[i]){
			printf("Minposition = %d\n",i);
		}
	}
	printf("Min Value = %d\n",min);
	system("pause");
	return 0;
}
