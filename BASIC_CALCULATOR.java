
import java.util.Scanner;

public class BASIC_CALCULATOR {
    public static void main(String[]args){
        do {

        System.out.println("\t\nBASIC CALCULATOR\n");

        System.out.println("Enter a first number: ");

        Scanner num1 = new Scanner(System.in);
        int Num1 = num1.nextInt();

        System.out.println("Enter a second number: ");

        Scanner num2 = new Scanner(System.in);
        int Num2 = num2.nextInt();

        System.out.println("Enter Operation ( + , - , * , / ): ");
        
        Scanner operator = new Scanner(System.in);
        String operators = operator.nextLine();

        
        if(operators.equals("+")){
            System.out.println("\nAnswer is " + (Num1 + Num2));
        }else if(operators.equals("-")){
            System.out.println("\nAnswer is " + (Num1 - Num2));
        }else if(operators.equals("*")){
            System.out.println("\nAnswer is " + (Num1 * Num2));
        }else if(operators.equals("/")){
            System.out.println("\nAnswer is " + (Num1 / Num2));
        }else{
            System.out.println("\nInvalid Input!!");
        }

        System.out.println("\nDo you want to perform another operation? (y/n): ");

        Scanner loop = new Scanner(System.in);
        String operation = loop.nextLine();

        } while(true||false);
        
    }
}
