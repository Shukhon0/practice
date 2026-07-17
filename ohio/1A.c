#include <stdio.h>
int main () {
    long long int n,m,a;
    if(scanf("%lld %lld %lld",n,m,a)!=3) return 1; else {
    printf("%lld",(-n/a)*(-m/a));
    return 0;
    };
}