#include <stdio.h>

int main()
{
    float n, m, p;
    printf("Input 1st num:");
    scanf("%f", &n);
    printf("Input 2nd num:");
    scanf("%f", &m);
    printf("Input 3rd num:");
    scanf("%f", &p);
    if (n>m && n>p){
        printf("%.1f", n);
    }
    else if (m>n && m>p){
        printf("%.1f", m);
    }
    else {
        printf("%.1f", p);
    }
    return 0;
}
