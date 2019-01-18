#include<stdio.h>
void movie();//prototype
int main(){
	char ch;
	printf("Do you want to see the movie(y/n)=");
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y'){
		movie();
	}else{
		printf("Thank you and good bye\n");
	}
	system("pause");
	return 0;
}
void movie(){
	printf("Now Showing\n");
	printf("1.Spuder man\n2.Harry Potter\n3.Resident Evil\n");
}

