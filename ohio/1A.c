#include <stdio.h>
int main () {
    long long int n,m,a;
    scanf("%lld %lld %lld",n,m,a);
    printf("%lld",(-n/a)*(-m/a));
    return 0;
}