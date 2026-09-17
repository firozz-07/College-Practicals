import java.io.FileReader;
import java.io.IOException;

public class fileread {
  public static void main(String[] args) {
    try (FileReader fr = new FileReader("a.txt")) {
      StringBuilder data = new StringBuilder();
      int ch = fr.read();

      while (ch != -1) {
        data.append((char) ch);
      }

      System.out.println(data.toString());
    } catch (IOException e) {
      System.out.println("error");
    }
  }
}
