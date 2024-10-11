import java.util.Arrays;

class Matrix {
    private int[][] data;

    public Matrix(int[][] data) {
        this.data = data;
    }

    public synchronized void displayMatrix() {
        System.out.println("Matrix:");
        for (int[] row : data) {
            System.out.println(Arrays.toString(row));
        }
    }

    public synchronized void displayTranspose() {
        System.out.println("Transpose:");
        for (int i = 0; i < data[0].length; i++) {
            for (int j = 0; j < data.length; j++) {
                System.out.print(data[j][i] + " ");
            }
            System.out.println();
        }
    }

    public synchronized void displayMaxValue() {
        int maxValue = Integer.MIN_VALUE;
        for (int[] row : data) {
            for (int value : row) {
                if (value > maxValue) {
                    maxValue = value;
                }
            }
        }
        System.out.println("Maximum value: " + maxValue);
    }

    public synchronized void displayPrincipalDiagonal() {
        System.out.print("Principal diagonal: ");
        for (int i = 0; i < Math.min(data.length, data[0].length); i++) {
            System.out.print(data[i][i] + " ");
        }
        System.out.println();
    }

    public synchronized void displayNonDiagonalElements() {
        System.out.print("Non-diagonal elements: ");
        for (int i = 0; i < data.length; i++) {
            for (int j = 0; j < data[i].length; j++) {
                if (i != j) {
                    System.out.print(data[i][j] + " ");
                }
            }
        }
        System.out.println();
    }
}

class MatrixThread extends Thread {
    private Matrix matrix;
    private String operation;

    public MatrixThread(Matrix matrix, String operation) {
        this.matrix = matrix;
        this.operation = operation;
    }

    @Override
    public void run() {
        switch (operation) {
            case "displayMatrix":
                matrix.displayMatrix();
                break;
            case "displayTranspose":
                matrix.displayTranspose();
                break;
            case "displayMaxValue":
                matrix.displayMaxValue();
                break;
            case "displayPrincipalDiagonal":
                matrix.displayPrincipalDiagonal();
                break;
            case "displayNonDiagonalElements":
                matrix.displayNonDiagonalElements();
                break;
        }
    }
}

public class MatrixOperations {
    public static void main(String[] args) {
        int[][] data = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        Matrix matrix = new Matrix(data);
        
        MatrixThread t1 = new MatrixThread(matrix, "displayMatrix");
        MatrixThread t2 = new MatrixThread(matrix, "displayTranspose");
        MatrixThread t3 = new MatrixThread(matrix, "displayMaxValue");
        MatrixThread t4 = new MatrixThread(matrix, "displayPrincipalDiagonal");
        MatrixThread t5 = new MatrixThread(matrix, "displayNonDiagonalElements");
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();
    }
}
