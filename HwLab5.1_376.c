#include<stdio.h>
#include<conio.h>
int main(){
	int i,v=0,a=0;
	char l;
	for(i=1;i<11;i++){
		printf("enter your letter = ");
		l=getche();
		printf("\n");
		if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'){
			v++;
		}else{
			a++;
		}
	}
	printf("Result\n");
	printf("Vowel = %d\n",v);
	printf("Alphabet = %d\n",a);
	system("pause");
	return 0;
}
