
import java.util.Scanner;

public class BASIC_CALCULATOR {
    public static void main(String[]args){

        String operation;
        do {
        System.out.println("\t\nBASIC CALCULATOR\n");

        System.out.println("Enter a first number: ");

        Scanner num1 = new Scanner(System.in);
        double Num1 = num1.nextInt();

        System.out.println("Enter a second number: ");

        Scanner num2 = new Scanner(System.in);
        double Num2 = num2.nextInt();

        System.out.println("Enter Operation ( + , - , * , / , %): ");
        
        Scanner operator = new Scanner(System.in);
        String operators = operator.nextLine();

        
        if(operators.equals("+")){
            System.out.println("\nAnswer is " + (int)(Num1 + Num2));
        }else if(operators.equals("-")){
            System.out.println("\nAnswer is " + (int)(Num1 - Num2));
        }else if(operators.equals("*")){
            System.out.println("\nAnswer is " + (int)(Num1 * Num2));
        }else if(operators.equals("/")){
            if (Num2 == 0) {
                System.out.println("\nUndefined!");
            }else{
                System.out.println("\nAnswer is " + (Num1 / Num2));
            }
        }else{
            System.out.println("\nInvalid Input!!");
        }

        System.out.println("\nDo you want to perform another operation? (y/n): ");

        Scanner loop = new Scanner(System.in);
        operation = loop.nextLine();

        } while(operation.equals("y")||operation.equals("Y"));
        
    }
}
