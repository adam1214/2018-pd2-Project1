#include<iostream>
#include<unistd.h> //for sleep
#include<cstdio>
#include<cstdlib>
using namespace std;
int attack(char p1,char p2,char p3,char p4,int mana) {
	int x,y;
	if(mana<8)
	{
		
    	if((p1=='9'||p2=='9'||p3=='9'||p4=='9')&&mana>=3) {
			x=(rand()%4)+15;
			y=(rand()%6)+1;
        	printf("1 9 x y\n0\n");
        	return 1;
    	}
    	if((p1=='5'||p2=='5'||p3=='5'||p4=='5')&&mana>=1) {
			x=(rand()%4)+15;
			y=(rand()%6)+1;
        	printf("1 5 x y\n0\n");
        	return 1;
    	}
	}
    if((p1=='7'||p2=='7'||p3=='7'||p4=='7')&&mana>=8) {
        printf("1 7 17 24\n0\n");
        return 1;
    }
    if((p1=='C'||p2=='C'||p3=='C'||p4=='C')&&mana>=7) {
        printf("1 C 17 24\n0\n");
        return 1;
    }
    if((p1=='4'||p2=='4'||p3=='4'||p4=='4')&&mana>=6) {
        printf("1 4 17 11\n0\n");
        return 1;
    }
    if((p1=='8'||p2=='8'||p3=='8'||p4=='8')&&mana>=5) {
        printf("1 8 4 11\n0\n");
        return 1;
    }
    if((p1=='6'||p2=='6'||p3=='6'||p4=='6')&&mana>=4) {
        printf("1 6 4 11\n0\n");
        return 1;
    }
    if((p1=='3'||p2=='3'||p3=='3'||p4=='3')&&mana>=2) {
        printf("1 3 17 11\n0\n");
        return 1;
    }
}
int main() {
    int con=0;
    int mana;
    string str;
    int cnt=1;
    char p1,p2,p3,p4;
    cout<<"9 5 6 3 7 4 C 8\n";
    getline(cin,str);
    getline(cin,str);
    scanf("MANA %d\n",&mana);
    //找出DECK C 1 3 4的C 1 3 4
    scanf("DECK %c %c %c %c\n",&p1,&p2,&p3,&p4);
    attack(p1,p2,p3,p4,mana);
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
        attack(p1,p2,p3,p4,mana);
        while(str!="END") { //讀取到END為止
            getline(cin,str);
        }
    }
    return 0;
}
