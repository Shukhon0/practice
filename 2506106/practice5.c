#include <stdio.h>
void main () {
    int n;
    char c;
    scanf("%d",&n);
    for (int i=n;i>=0;i--) {
        for (int j=0;j<i;j++) {
            c='A'+n-i;
            printf("%c",c);
        };
        printf("\n");
    };
}