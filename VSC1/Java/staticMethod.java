class Direct{
    static String name="Static";
    static void display(){
        System.out.println("I am  "+name);
    }
}
public class staticMethod {
    public static void main(String[] args) {
        Direct.display();
    }
}
