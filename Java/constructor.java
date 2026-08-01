class Info{
    public String name;
    public String surname;

    Info(String name, String surname){
        this.name = name;
        this.surname = surname;
    }
    public void display(){
        System.out.print("my name is "+name+" "+surname);
    }
}
public class constructor{
    public static void main(String[] args) {
        Info obj=new Info("firoz","pathan");
        obj.display();
    }
}
