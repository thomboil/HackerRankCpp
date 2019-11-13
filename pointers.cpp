#include <stdio.h>
#include <math.h>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int sum = *a + *b;
    *b = abs(*a - *b);
    *a = sum;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

