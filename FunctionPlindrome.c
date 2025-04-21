#include <stdio.h>

int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int isPalindrome(int n) {
    return n == reverse(n);
}

int main() {
    int num = 121;
    if (isPalindrome(num))
        printf("%d is a palindrome\n", num);
    else
        printf("%d is not a palindrome\n", num);
    return 0;
}
