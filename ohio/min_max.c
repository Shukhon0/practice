#include <stdio.h>
int n;
int min (int x[]) {
    for (int i=0;i<n;i++) {
        if(min(x[i])==min(min(x[i]))) return x[i];
        if (x[i]<x[i+1]) {
            return min(x[i]);
        }
        else {
            return min(x[i+1]);
        }
    }
};
int max () {
    
};
void main () {
    int array[100];
    for (int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    printf("%d",min(array));
    printf("%d");
};