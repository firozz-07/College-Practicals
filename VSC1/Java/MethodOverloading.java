class Calculator{
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    double add(double a,double b){
        return a+b;
    }
    
}
public class MethodOverloading{
    public static void main(String[] args) {
        Calculator obj=new Calculator();
        System.out.println(obj.add(10, 30));
        System.out.println(obj.add(10, 30,90));
        System.out.println(obj.add(10.5, 30.9));
    }
}
