#include <stdio.h>

int main(){
    int first, second, *p, *q, sum;
    printf("Enter two numbers: ");
    scanf("%d\n %d", &first, &second);

    p = &first;
    q = &second;

    sum = *p + *q;

    printf("The sum of %d and %d is %d\n", first, second, sum);
    return 0;
}