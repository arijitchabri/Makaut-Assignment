public class Factorial {
    // Method to calculate factorial using a loop
    public static int factorial(int n) {
        int fact = 1;

        for (int i = 1; i <= n; i++) {
            fact *= i;
        }

        return fact;
    }

    // Method to calculate factorial using recursion
    public static int factorialRecursive(int n) {
        if (n == 0) {
            return 1;
        } else {
            return n * factorialRecursive(n-1);
        }
    }

    public static void main(String[] args) {
        int n = 7;

        System.out.println("Factorial of " + n + " using loop: " + factorial(n));
        System.out.println("Factorial of " + n + " using recursion: " + factorialRecursive(n));
    }
}

