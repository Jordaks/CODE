//Generics
import java.util.ArrayList;

public class Gen {
    public static void main(String[] args) {
        ArrayList<User> users = new ArrayList<User>();
        users.add(new User("Jordan"));
        users.add(new User("Mark"));
        users.add(new User("jordi"));

        for (int i = 0; i < users.size(); i++) {
            System.out.println(users.get(i).getName());
        }
    }
    
}
