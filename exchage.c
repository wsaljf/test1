#include<stdio.h>
int main(){
    int a=100;
    int b=50;
    int c=300;

    int temp=a;
    a=b;b=c;c=temp;

    printf(" %d\n %d\n %d\n",a,b,c);
    system("pause");
    return 0;
}