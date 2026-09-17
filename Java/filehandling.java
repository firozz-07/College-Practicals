import java.io.FileWriter;
import java.io.IOException;

public class filehandling {
  public static void main(String[] args) {
    try (FileWriter fw = new FileWriter("a.txt")) {
      fw.write("sherrr");
    } catch (IOException e) {
      System.out.println("Error writing to file: " + e.getMessage());
    }
  }
}