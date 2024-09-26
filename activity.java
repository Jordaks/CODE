
import java.util.Scanner;

public class activity {
    public static int myInt(int a, int b){
        return  a + b;
    }
    public static double myDouble(double a, double b){
        return a + b;
    }
    public static int MyMultiply(int a, int b){
        return a * b;
    }
    public static void main(String[] args) {
        int a, b;
        System.out.print("Enter a first number: ");
        Scanner first_Num = new Scanner(System.in);
        a = first_Num.nextInt();
        System.out.print("Enter a second number: ");
        b = first_Num.nextInt();


        int sum = myInt(a,b);
        double Double_sum = myDouble(a, b);
        int multiply = MyMultiply(a, b);

        System.out.println(a + " + " + b + " = " + sum);
        System.out.println(a + " + " + b + " = " + Double_sum);
        System.out.println(a + " * "  + b + " = " + multiply);
    }
}
