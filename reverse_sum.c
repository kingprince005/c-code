#include <stdio.h>

int main() {
    int n, reversed = 0, sum = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        sum += remainder;
        n /= 10;
    }
    
    printf("Reversed number: %d\n", reversed);
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}