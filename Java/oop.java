class Info{
    public String name;
    public String surname;

    public void me(String name, String surname){
        this.name = name;
        this.surname = surname;
    }
    public void display(){
        System.out.print("my name is "+name+" "+surname);
    }
}
public class oop{
    public static void main(String[] args) {
        Info obj=new Info();
        obj.me("firoz","pathan");
        obj.display();
    }
}