#include <stdio.h>
int main () {
    long long int n,m,a;
if (scanf("%lld %lld %lld", &n, &m, &a) != 3 && n>=1 && m >=1 && a>=1 && a<= 1000000000) {
    return 1;
}   
    else {
    printf("%lld",((n+a-1)/a)*((m+a-1)/a));
    return 0;
    }
}