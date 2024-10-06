
public class User{
    private String firstName;
    private int Age;
    private String _membership;

    public User(){

    }
    public User(String name) {
        setName(name);
    }
    // Encapsulation
    void setName(String name){
        firstName = name;
    }
    String getName(){
        return firstName;
    }
    void setAge(int age){
        Age  = age;
    }
    int getAge(){
        return Age;
    }
    //Overloading
    void setMemebership(String membership){
        _membership = membership;
    }
    void setMemebership(Membership membership){
        _membership = membership.name();
    } 
    public enum Membership{
        Bronze, Silver , Gold;
    }

    String getMemebership(){
        return _membership;
    }
    
}