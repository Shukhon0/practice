#include <stdio.h>
int n;
int min (int x[]) {
    for (int i=0;i<n;i++) {
        if (x[i]<x[i+1]) {
            return min(x[i]);
        }
    }
};
int max () {
    
};
void main () {

};