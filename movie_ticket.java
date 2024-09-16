
import java.util.Scanner;

public class movie_ticket {
    public static void main(String[] args) {

        String Ticket;
        
        do { 
            System.out.println("\n\t\t\tMovie Ticketing System\n");
        System.out.print("Enter your name: ");

        Scanner name = new Scanner(System.in);
        String Name = name.nextLine();

        System.out.print("Enter your age: ");

        Scanner age = new Scanner(System.in);
        int Age = age.nextInt();

        System.out.print("Enter the time of the show (in 24-hour format, e.g., 14 for 2 PM): ");

        Scanner time = new Scanner(System.in);
        int Time = time.nextInt();

        if(Age < 12){
            if(Time <= 17){
                System.out.println("Hello " + Name + "!" + " The ticket price for you is: $5. Thank you!");
            }else{
                System.out.println("Hello " + Name + "!" + " The ticket price for you is: $7. Thank you!");               
            }
        }else if(Age <= 60){
            if(Time <= 17 ){
                System.out.println("Hello " + Name + "!" + " The ticket price for you is: $10. Thank you!");
            }else{
                System.out.println("Hello " + Name + "!" + " The ticket price for you is: $12. Thank you!");
            }
        }else if(Age > 60){
            if(Time <= 17){
                System.out.println("Hello " + Name + "!" + " The ticket price for you is: $6. Thank you!");
            }else
            {
                System.out.println("Hello " + Name + "!" + " The ticket price for you is: $8. Thank you!");
            }
        }else{
            System.out.print("Invalid Age!");
        }

        System.out.print("Order Another Ticket? y/n: ");

        Scanner ticket = new Scanner(System.in);
        Ticket = ticket.nextLine();

        } while (Ticket.equals("y")||Ticket.equals("Y"));

        if (Ticket.equals("n")||Ticket.equals("N")) {
            System.out.println("THANK YOU!! ENJOY WATCHING!!");
        }
        
    }
}
