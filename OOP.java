

public class OOP {
    public static void main(String[] args) {

        inheritance inherit = new inheritance();
        polymorph poly = new polymorph();

        inherit.set_verified("Bosnii");
        poly.setColor("White");
        System.out.println(poly.getColor());
        System.out.println(inherit.get_verified());
            
        User user = new User();
        user.setName("Mark Jordan");
        user.setAge(12);
        user.setMemebership(User.Membership.Gold);

        System.out.println(user.getName());
        System.out.println(user.getAge());
        System.out.println(user.getMemebership());

        
    }
}
