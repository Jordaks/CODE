
import java.util.Scanner;

public class input {
    public static void main(String[] args){
        System.out.println("Hey bro!");

        Scanner greetings = new Scanner(System.in);
        String greet = greetings.nextLine();

        System.out.println("WHat is your name?");

        Scanner input = new Scanner(System.in);
        String name = input.nextLine();

        System.out.println(name + " nice to meet you!");

        Scanner reply = new Scanner(System.in);
        String replyy = reply.nextLine();

        System.out.println("Where you from?");

        Scanner country = new Scanner(System.in);
        String countryy = country.nextLine();

        System.out.println("oww " + countryy + " nicee country!!");

        Scanner scanner = new Scanner(System.in);
        String replyyy = scanner.nextLine();

        System.out.println("How old are you?");

        Scanner age = new Scanner(System.in);
        int agee = age.nextInt();

        System.out.println("What is your middle name?");

        Scanner middleName = new Scanner(System.in);
        String middle = middleName.nextLine();
    
    }
}
