class A{
int age=20;
}
class B extends A{
  B(int age){
    System.out.println(super.age);
    System.out.println(this.age);
  }
}
public class superrr {
  public static void main(String[] args) {
    B obj=new B(300);
    System.out.println(obj.age);
  }
}
