public class customException{
  static void checkAge(int age){
    if(age<18){
      throw new InvalidArgumentException("hatttt");
    }
  }
  public static void main(String[]args){
    checkAge(12);
  }
}