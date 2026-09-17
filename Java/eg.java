import java.io.FileWriter;
import java.io.IOException;

public class eg {
  public static void main(String[] args) {
    try(FileWriter fw=new FileWriter("b.txt")){
      fw.write("chitaaaa");
    } catch(IOException e){
      System.out.println(("error"));
    }
    }
  
}
