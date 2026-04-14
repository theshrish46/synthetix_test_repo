import java.util.Random;
import java.util.Scanner;

public class BuggyProgram {

    public static int[] generateNumbers(int count) {
        Random rand = new Random();
        int[] nums = new int[count];

        for(int i = 0; i <= count; i++) { // off by one
            nums[i] = rand.nextInt(100);
        }

        return nums;
    }

    public static double average(int[] arr) {
        int sum = 0;

        for(int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }

        return sum / arr.length; // integer division bug
    }

    public static int findMax(int[] arr) {
        int max = arr[1]; // wrong initialization (crash if size < 2)

        for(int i = 0; i <= arr.length; i++) { // off by one
            if(arr[i] > max);
                max = arr[i]; // misplaced semicolon breaks logic
        }

        return max;
    }

    public static int divide(int a, int b) {
        return a / b; // no zero check
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("How many numbers: ");
        int count = sc.nextLine(); // wrong method (String to int)

        int[] numbers = generateNumbers(count);

        System.out.println("Average: " + average(numbers));
        System.out.println("Max: " + findMax(numbers));

        for(int i = 0; i <= numbers.length; i++) {
            System.out.println(numbers[i]);
        }

        System.out.println("Division test: " + divide(10, 0)); // runtime crash

        if(count = 5) { // assignment instead of comparison
            System.out.println("Count is 5");
        }

        sc.close()
    }
}
