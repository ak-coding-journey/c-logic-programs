#include <stdio.h>

int main() {
    int n, i, rev = 0, sum = 0, fact = 1, prime = 1;

    // 1. Even or Odd
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);

    // 2. Reverse Digits
    int temp = n;
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    printf("Reverse = %d\n", rev);

    // 3. Prime Check
    prime = 1; // reset flag
    if(n <= 1) prime = 0;
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            prime = 0;
            break;
        }
    }
    if(prime)
        printf("%d is Prime\n", n);
    else
        printf("%d is Not Prime\n", n);

    // 4. Sum of Digits
    temp = n;
    while(temp > 0) {
        sum += temp % 10;
        temp = temp / 10;
    }
    printf("Sum of digits = %d\n", sum);

    // 5. Factorial
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial = %d\n", fact);

    return 0;
}
