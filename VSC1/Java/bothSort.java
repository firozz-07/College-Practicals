public class bothSort{
    public static void main(String[] args) {
        int []arr={10,7,1,9,3};
        // Ascending order
        for (int i = 0; i < arr.length; i++) {
        for (int j = 0; j < arr.length; j++) {
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i:arr) System.out.print(i+" ");
    System.out.println(" ");

    // Desceding order

    for (int i = 0; i < arr.length; i++) {
        for (int j = 0; j < arr.length; j++) {
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i:arr) System.out.print(i+" ");
    }
}