#include<iostream>
#include<unistd.h> //for sleep
#include<cstdio>
#include<cstdlib>
using namespace std;
int main() {
    string str;
    int cnt=1;
    char p1,p2,p3,p4;
    cout<<"1 2 4 5 3 7 8 6\n";
    getline(cin,str);
    getline(cin,str);
    getline(cin,str);
    //找出DECK C 1 3 4的C 1 3 4
    scanf("DECK %c %c %c %c\n",&p1,&p2,&p3,&p4);
    printf("1 %c 2 5\n",p1); //test
    while(str!="END") {
        getline(cin,str);
    }
    while(cnt<=1800) {
        sleep(0.1);
        cnt++;
        getline(cin,str);
        getline(cin,str);
        getline(cin,str);
        //找出DECK 後面的小兵種類
        scanf("DECK %c %c %c %c\n",&p1,&p2,&p3,&p4);
        printf("1 %c 2 5\n",p1); //test
        while(str!="END") { //讀取到END為止
            getline(cin,str);
        }
    }
    return 0;
}
