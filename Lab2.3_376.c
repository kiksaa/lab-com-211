#include<stdio.h>
int main()
{
	int game;
	printf("\tMenu\n");
	printf("Press a = Dot A\n");
	printf("Press b = Pang Ya\n");
	printf("Press c = Audition\n");
	printf("Any press = No play game\n");
	printf("Enter chatcter = ");
	scanf("%c",&game);
	if(game=='a'||game=='A'){
		printf("Dot A\n");
	}else if(game=='b'||game=='B'){
		printf("Pangya\n");
	}else if(game=='c'||game=='C'){
		printf("Audition\n");
	}else{
		printf("No play game\n");
	}
	system("pause");
	return 0;
}
