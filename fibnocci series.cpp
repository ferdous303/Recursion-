#include<stdio.h>
int fibonacci(int num)
 {
    if (num == 0 || num == 1)
	 {
        return num;
    } 
	else
	 {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
 {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int fib = fibonacci(i);
        printf("%d ", fib);
    }
    
    return 0;
}

