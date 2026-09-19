import java.io.FileWriter;
import java.io.IOException;

public class createFile {
  public static void main(String[] args) {
    try(FileWriter fw=new FileWriter("new.txt");){
      fw.write("chitaaaa");
    }catch(IOException e){
      System.out.println("eroor " +e.getMessage());
    }
  }
}
