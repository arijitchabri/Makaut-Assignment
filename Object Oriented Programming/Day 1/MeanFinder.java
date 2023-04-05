import java.util.Scanner;

public class MeanFinder {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n;
        double sum = 0;
        double mean;

        System.out.print("Enter the number of elements: ");
        n = input.nextInt();

        double[] numbers = new double[n];

        System.out.print("Enter " + n + " numbers: ");
        for (int i = 0; i < n; i++) {
            numbers[i] = input.nextDouble();
            sum += numbers[i];
        }

        mean = sum / n;
        System.out.println("The mean of the numbers is: " + mean);
    }
}

