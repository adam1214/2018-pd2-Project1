#include<iostream>
#include<unistd.h> //for sleep
#include<cstdio>
#include<cstdlib>
using namespace std;
int fun(char p1,char p2,char p3,char p4,int mana)
{
	if((p1=='7'||p2=='7'||p3=='7'||p4=='7')&&mana>=8)
	{
		printf("1 7 20 4\n");
		return 1;
	}
	if((p1=='4'||p2=='4'||p3=='4'||p4=='4')&&mana>=6)
	{
		 printf("1 4 20 4\n");
		 return 1;
	}
	if((p1=='C'||p2=='C'||p3=='C'||p4=='C')&&mana>=7)
	{
		printf("1 C 2 5\n");
		return 1;
	}
	if((p1=='2'||p2=='2'||p3=='2'||p4=='2')&&mana>=3)
	{
		printf("1 2 2 5\n");
		return 1;
	}
	if((p1=='1'||p2=='1'||p3=='1'||p4=='1')&&mana>=5)
	{
		printf("1 1 20 4\n");
		return 1;
	}
	if((p1=='6'||p2=='6'||p3=='6'||p4=='6')&&mana>=4)
	{
		printf("1 6 2 5");
		return 1;
	}
	if((p1=='5'||p2=='5'||p3=='5'||p4=='5')&&mana>=1)
	{
		printf("1 5 2 5\n");
		return 1;
	}
	else
	{
		return 0;
	}
}
int main() {
	int mana;
    string str;
    int cnt=1;
    char p1,p2,p3,p4;
    cout<<"1 2 9 C 4 5 6 3\n";
    getline(cin,str);
    getline(cin,str);
    scanf("MANA %d\n",&mana);
    //找出DECK C 1 3 4的C 1 3 4
    scanf("DECK %c %c %c %c\n",&p1,&p2,&p3,&p4);
	printf("1 9 10 2\n");
    while(str!="END") {
        getline(cin,str);
    }
    while(cnt<=1800) {
        sleep(0.1);
        cnt++;
        getline(cin,str);
        getline(cin,str);
        scanf("MANA %d\n",&mana);
        //找出DECK 後面的小兵種類
        scanf("DECK %c %c %c %c\n",&p1,&p2,&p3,&p4);
		fun(p1,p2,p3,p4,mana);
        while(str!="END") { //讀取到END為止
            getline(cin,str);
        }
    }
    return 0;
}
