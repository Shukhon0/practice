#include <stdio.h>
int n;
int factorial (int x) {
    if (x==0) return 1;
    return factorial(x-1)*x;
};
int ncr(int a,int b) {
    return factorial(a)/(factorial(b)*factorial(a-b));
};
void main () {
    scanf("%d",&n);
    for (int i=0;i<=n;i++) {
        for (int k=i;k<=(n/2);k++) {
            printf(" ");
        }
        for (int j=0;j<=i;j++) {
            printf("%d ",ncr(i,j));
        }
        printf("\n");
    }
}