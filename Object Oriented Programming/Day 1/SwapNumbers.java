public class SwapNumbers {
    public static void main(String[] args) {
        int a = 5, b = 10;
        System.out.println("Before swapping: a = " + a + ", b = " + b);

        // Swap using a temporary variable
        int temp = a;
        a = b;
        b = temp;

        System.out.println("After swapping using temporary variable: a = " + a + ", b = " + b);

        // Swap without using a temporary variable
        a = a + b;
        b = a - b;
        a = a - b;

        System.out.println("After swapping without temporary variable: a = " + a + ", b = " + b);
    }
}
