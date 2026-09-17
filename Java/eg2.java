import java.io.FileReader;
import java.io.IOException;

public class eg2 {
  public static void main(String[] args) {
    try (FileReader fr = new FileReader("b.txt")) {
      StringBuilder data = new StringBuilder();
      int ch;

      while ((ch = fr.read()) != -1) {
        data.append((char) ch);
      }
      System.out.println(data.toString());
    } catch (IOException e) {
      System.out.println("errrror");
    }
  }
}
