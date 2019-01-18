/*#include<stdio.h>
#include<conio.h>
#include<string.h>
	char user[20],user1[]="admin",pass[10],pass1[]="admintest";
	int u,p;
	char Alluser(){
		return strcmp(user,user1);
	}
	char Allpass(){
		return strcmp(pass,pass1);
	}
	char main(){
	puts("User : ");
	gets(user);
	puts("Pass : ");
	gets(pass);
	u=Alluser;
	p=Allpass;
	printf("==================\n");
	if(u==0&&p==0){
		puts("Hello Mr.ComSci\n");	
	}else{
		puts("Your not Mr.ComSci!!!\n");
	}
	getch();
	}*/
#include<stdio.h>
#include<string.h>

int main(){
	char m[10];
	char p[10];
	char m1[6] = "admin";
	char p1[10] = "admintest";
	int user,pass;
	
	printf("User : ");
	scanf("%s",m);
	printf("Pass : ");
	scanf("%s",p);
	printf("==============================\n");
	user=strcmp(m,m1);
	pass=strcmp(p,p1);
	if(user==0 && pass==0){
	  printf("Hello Mr.Comsci\n");	
    }
	system("pause");
	return 0;
}

