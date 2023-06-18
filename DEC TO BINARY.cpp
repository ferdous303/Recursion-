#include <stdio.h>

int findBinary(int num) {
    static int c = 1, binary = 0;
    
    if (num <= 0) {
        return binary;
    }
    
    binary += (num % 2) * c;
    c *= 10;
    
    return findBinary(num / 2);
}

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int binary = findBinary(num);

    printf("The binary representation is: %d\n", binary);

    return 0;
}

