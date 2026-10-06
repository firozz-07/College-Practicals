public class minMax {
  public static void main(String[] args) {
    int [] arr={74,22,7,99,2};
    int min=arr[0];
    int max=arr[0];
    for (int i = 0; i < arr.length; i++) {
      if (arr[i]>max) {
        max=arr[i];
      }
      if (arr[i]<min) {
        min=arr[i];
      }

    }
  System.out.println(max);
  System.out.println(min);

  }
}
