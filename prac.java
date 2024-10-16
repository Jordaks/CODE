
import java.util.Scanner;

public class prac{
    public static void main(String[] args) {
        String name,favF;
        int favN;

        Scanner scan = new Scanner(System.in);
        System.out.print("Enter your fullname: ");
        name = scan.nextLine();
        System.out.print("Enter your fav Food: ");
        favF = scan.nextLine();
        System.out.print("Enter your fav Number: ");
        favN = scan.nextInt();
        
        //encapsulation
        encap en = new encap();
        en.set_name(name);
        en.set_favFood(favF);
        en.set_favNum(favN);

        System.out.println("\n\nThis is your short personal info");
        System.out.println(en.get_name());
        System.out.println(en.get_favFood());
        System.out.println(en.get_favNum());

        //inheritance
        inherit pr = new inherit();
        pr.setschool("Batangas State University TNEU");
        System.out.println(pr.getschool());
        

    }
}
