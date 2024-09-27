import java.util.Scanner;

public class Calculator {
        class MathUtils{
            static int multiply(int a, int b){
                return a * b;
            }
        }
    public static int myInt(int a, int b){
        return  a + b;
    }
    public static double myDouble(double a, double b){
        return a + b;
    }
    public static void main(String[] args) {
        int a, b;
        Scanner Num = new Scanner(System.in);

        System.out.print("Enter a first number: ");
        a = Num.nextInt();
        System.out.print("Enter a second number: ");
        b = Num.nextInt();

        int sum = myInt(a,b);
        double Double_sum = myDouble(a,b);
        Calculator calculator = new Calculator();
        Calculator.MathUtils Multi = calculator.new MathUtils();

        System.out.println(a + " + " + b + " = " + sum);
        System.out.println(a + " + " + b + " = " + Double_sum);
        System.out.println(a + " * " + b + " = " + Multi.multiply(a, b));
        
    }
}
