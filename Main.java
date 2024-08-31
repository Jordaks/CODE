
import java.util.Scanner;


public class Main{
    public static void main(String [] args){
        System.out.println("What is your name?");
        
        Scanner scan = new Scanner(System.in);
        String name = scan.nextLine();

        System.out.println("Hello " + name);

        System.out.println("How old are you?");

        Scanner age = new Scanner(System.in);
        String Age = age.nextLine();

        System.out.println("ow you're teenager");

        
        
    }
}