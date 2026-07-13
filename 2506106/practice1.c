#include <stdio.h>
    unsigned int n,i;
unsigned int pattern (unsigned int x) {
    unsigned int val;
    if (x==1) {val=1;}
    else {
    if (x%2==0) {
        val=pattern(x-1)*10;
    } 
    else {
        val=pattern(x-1)*10+1;
        };
    };
    return val;
};
int main(void) {
    printf("Enter the required value for the desired pattern.\n");
    scanf("%u",&n);
    for(i=1;i<=n;i++) {
        printf("%u\n",pattern(i));
    };
    return 0;
}
