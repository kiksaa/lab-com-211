#include<stdio.h>
void add(int *pt_array);
int main(){
	int array[10]={2,4,6,8,10,12,14,16,18,20};
	int i;
	for(i=0;i<=9;i++){
		printf("%5d",array[i]);
	}
	printf("\n");
	add(&array);
		for(i=0;i<=9;i++){
		printf("%25d\n",*(array+i));
	}
	system("pause");
	return 0;
}
void add(int *pt_array){
	int j;
	for(j=0;j<=9;j++){
		*(pt_array+j)=*(pt_array+j)+20; //new=old+20
	}
} 
