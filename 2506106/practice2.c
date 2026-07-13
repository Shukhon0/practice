#include <stdio.h>
int n;
void pattern () {
    printf("Enter the required value for the desired pattern.\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            if (j%2==0) printf("0"); else printf("1") ;
        };
        printf("\n");
    };
}
int main () {
    pattern();
    return 0;
}