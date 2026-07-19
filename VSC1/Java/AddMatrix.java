public class AddMatrix {
    public static void main(String[] args) {
        int [][] FirstMatrix = {{2, 3, 4}, {5, 7, 8}};
        int [][] SecondMatrix = {{2, 3, 4}, {5, 7, 8}};

        int rows = FirstMatrix.length;
        int columns = FirstMatrix[0].length;


        int [][] sum = new int[rows][columns];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                sum[i][j] = FirstMatrix[i][j] + SecondMatrix[i][j];
            }
        }

        System.out.println("The addition is:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(sum[i][j] + " ");
            }
            System.out.println();
        }
    }
}

