#include<stdio.h>

int main()
{
    int a,b,c,num;
    for(num =100; num<1000;num++)
    {
        a = num / 100;
        b = (num - a*100) /10;
        c = num - a*100 - b*10;
        a = a*a*a;
        b = b*b*b;
        c = c*c*c;
        if(num == (a+b+c)) printf("%d ", num);
    }
    return 0;


}
