
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int com,kon;
int rc,rk;
int ran1,ran2;
srand(time(0));
printf("Enter your number of High-Low (2-12) =");
scanf("%d",&kon);
if(kon<=6){
rk=0;
}else if(kon==7||kon==8||kon==9||kon==10||kon==12){
rk=2;
}else if(kon==11){
rk=1;
}
ran1=rand()%10;
while(ran1<=0||ran1>=7){
ran1=rand()%10;
}
ran2=rand()%10;
while(ran2<=0||ran2>=7){
ran2=rand()%10;
}
printf("dise1 = %d\n",ran1);
printf("dise2 = %d\n",ran2);
com=ran1+ran2;
if(com<=6){
printf("result = %d (Low)\n",com);
rc=0;
}else if(com==7||com==8||com==9||com==10||com==12){
printf("result = %d (High)\n",com);
rc=2;
}else if(com==11){
printf("result = %d (mediam)\n",com);
rc=1;
}
printf("\n-----Com VS Kon------\n");
if(rc==rk){
printf("You are winner\n\n");
if(kon==com){
printf("---->Double bonus7\n\n"); 
}
}else{
printf("You are lose\n\n");
}
system("pause");
return 0;
}
