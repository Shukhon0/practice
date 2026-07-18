#include <stdio.h>
void main () {
    int a,b;
    scanf("%d %d",a,b);
    a=a+b; /*a to a+b*/
    b=a-b; //b to a
    a=a-b; //a to b
    printf("%d %d",a,b);
}