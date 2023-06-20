#include <stdio.h>
int main() {
    int n,i;
    float marks[100];
    float sum;
    float avg;
    printf(" enter no of elements in array ");
    scanf(" %d", &n);
    for (i=0;i<n;i++) {
        printf(" enter array elements ");
        scanf(" %f", &marks[i]);
        sum += marks[i];

    }
    avg = sum/n ;
    printf("  the average is %.2f", avg);
    return 0;
}