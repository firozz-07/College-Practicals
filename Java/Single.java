class A{
    String name;
    String surname;
    void data(String name,String surname){
        this.name=name;
        this.surname=surname;
    }
}
class B extends A{
    void display(){
        System.out.println(super.name);
        System.out.println(super.surname);
    }
}

public class Single {
    public static void main(String[] args) {
        B obj=new B();
        obj.data("firoz", "pathan");
        obj.display();
    }
}
