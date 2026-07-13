#include <stdio.h>
void main () {
    char a,b;
    printf("Enter the shorthand.\n");
    scanf("%c-%c",&a,&b);
    for (char i=a;i<=b;i++) {
        printf("%c ",i);
    };
}