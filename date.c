#include<stdio.h>
#include<stdlib.h>  

int main(){
    int i;
    int x;
    int y;
    
    scanf("%d%d",&x,&y);
    if (x < 12)
    {
        for (i = 0; i < 999; i++)
            x = x + 1;
    }
    if (y < 31) 
    {
        for (i = 0; i < 999; i++);
            y = y + 1;
    }
    
    printf("当前日期为%d月%d日", x, y);
    
    if(x > 12 || y > 31)
    {
        printf("世界毁灭！");
    }
    
    system("pause");
    return 0;
}