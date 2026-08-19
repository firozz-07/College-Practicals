class A {
    void show() {
        System.out.println("this is parent class ");

    }
}

class B extends A {
    void display(){
        System.out.println("this is from the child class");
    }
}
public class inheritance{
    public static void main(String[] args) {
        B obj=new B();
        obj.show();
        obj.display();
    }
}