#include <stdio.h>

// Function to calculate Fibonacci series up to n terms
void fibonacci(int n) {
    int a = 0, b = 1, nextTerm;
    char series[1000] = ""; // Assuming a sufficiently large buffer

    // Generate Fibonacci series up to n terms
    for (int i = 1; i <= n; ++i) {
        sprintf(series + strlen(series), "%d, ", a); // Append current Fibonacci number to series string
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    // Remove the last ", " from the series string
    series[strlen(series) - 2] = '\0';

    // Print the Fibonacci series
    printf("Fibonacci Series up to %d terms:\n%s\n", n, series);
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
