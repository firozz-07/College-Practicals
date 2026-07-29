 class cat{
    public void sound(){
        System.out.println("A cat meowwwws");
    }
}
 class dog extends cat {
    @Override
    public void sound(){
        System.out.println("A dog barksss");
    }
}
public class MethodOverriding{
    public static void main(String[] args) {
        cat cats=new cat();
        dog dogs=new dog();
        cat both =new dog();
        
        cats.sound();
        dogs.sound();
        both.sound();
    }
}
