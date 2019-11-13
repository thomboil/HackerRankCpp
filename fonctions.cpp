#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{
    int table [4] = {a,b,c,d};
    int sum = table[0];
    for(int i =0;i<4;i++)
    {
        if(sum<table[i])
        {
            sum = table[i];
        }else
        sum =sum;
    }
    return sum;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

