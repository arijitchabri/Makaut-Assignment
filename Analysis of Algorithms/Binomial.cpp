#include <stdio.h>

int binomialCoefficient(int n, int k) {
    // Base cases
    if (k == 0 || k == n) {
        return 1;
    }
    
    // Recursive step
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int n, k;
    printf("Enter values for n and k (n choose k): ");
    scanf("%d %d", &n, &k);
    
    if (n < 0 || k < 0 || k > n) {
        printf("Invalid input. Please ensure that n >= 0, k >= 0, and k <= n.\n");
        return 1; // Exit with an error code
    }
    
    int result = binomialCoefficient(n, k);
    printf("C(%d, %d) = %d\n", n, k, result);
    
    return 0;
}
