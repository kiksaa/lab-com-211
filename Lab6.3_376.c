#include<stdio.h>
int main(){
	int i,n[5],s=0;
	float avg;
	for(i=1;i<=5;i++){//i=0,i<=4
		printf("Student No. %d = ",i);
	    scanf("%d",&n[i]);
	}
	s = n[1]+n[2]+n[3]+n[4]+n[5];//n[0]+.+.+.+n[4]
	printf("Total = %d\n",s);
	avg = s/5;
	printf("Average = %f\n",avg);
	system("pause");
	return 0;
}
