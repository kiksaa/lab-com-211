#include<stdio.h>
int main(){
	int score;
	char grade;
	printf("Enter your score : ");
	scanf("%d",&score);
	if(score>=90&&score<=100){
		grade='A';
	}else if(score>=81&&score<=89){
		grade='B';
	}else if(score>=71&&score<=80){
		grade='C';
	}else if(score>=61&&score<=70){
		grade='D';
	}else if(score>=51&&score<=60){
		grade='E';
	}else if(score<50){
		grade='F';
	}else{
		grade='Z';
	}
	printf("Score = ,%d",score);
	printf("You Grade : %c\n",grade);
	system("pause");
	return 0;
}
