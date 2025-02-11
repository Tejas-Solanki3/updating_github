public class AbsoluteValue {
    static int absolute(int number) {
        if (number < 0) {
            return -number;
        } else {
            return number;
        }
    }
    static double absolute(double number) {
        if (number < 0) {
            return -number;
        } else {
            return number;
        }
    }

    public static void main(String[] args) {
        int intNumber = -10;
        double doubleNumber = -10.5;
        System.out.println("Absolute value of " + intNumber + " is: " + absolute(intNumber));
        System.out.println("Absolute value of " + doubleNumber + " is: " + absolute(doubleNumber));
    }
}