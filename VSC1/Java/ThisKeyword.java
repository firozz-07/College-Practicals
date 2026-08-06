class about {
    public String name;
    public String surname;

    about(String name, String surname) {
        this.name = name;
        this.surname = surname;
    }

    public void displayName() {
        System.out.println("my name is "+ this.name);
    }

    public void displaySurname() {
        System.out.println( "my surname is "+ this.surname);
    }
}
public class ThisKeyword{
    public static void main(String[] args) {
        about obj=new about("Firoz", "Pathan");
        obj.displayName();
        obj.displaySurname();
    }
}
