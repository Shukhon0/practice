#include <stdio.h>
int n;
int factorial (int x) {
    return factorial(x-1)*x;
};
int ncr(int a,int b) {
    return factorial(a)/(factorial(b)*factorial(a-b));
};
void main () {
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        for (int j;j<i;j++) {
            printf("%d ",ncr);
        }
        printf("\n");
    }
}