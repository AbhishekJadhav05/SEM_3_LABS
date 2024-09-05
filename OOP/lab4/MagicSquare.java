import java.util.Scanner;

public class MagicSquare{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter number of rows : ");
        int rows = scanner.nextInt();
        System.out.println("enter number of cols : ");
        int cols = scanner.nextInt();
        int[][] magicSquare = new int[rows][cols];
        for(int i=0;i<rows;i++){ 
            for(int j=0;j<cols;j++){
                System.out.println("enter element at "+i+ " "+j);
                magicSquare[i][j] = scanner.nextInt();
            }
        }
        int rowSum,colSum,pdiagonalSum=0,sdiagonalSum=0,prevSum = 0;
        // row check
        for(int i=0;i<rows;i++){
            rowSum = 0;
            for(int j=0;j<cols;j++){
                rowSum += magicSquare[i][j];
            }
            if(i == 0){
                prevSum = rowSum;
                continue;
            }else if(rowSum != prevSum){
                System.out.println("not magic");
                System.exit(0);
            }
        }
        // col check
        for(int i=0;i<cols;i++){
            colSum = 0;
            for(int j=0;j<rows;j++){
                colSum += magicSquare[j][i];
            }
            if(i == 0){
                //prevSum remains same as rows;
                continue;
            }else if(colSum != prevSum){
                System.out.println("not magic");
                System.exit(0);
            }
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(i == j){
                    // principle diagonal
                    pdiagonalSum += magicSquare[i][j];                
                    // secondary diagonal
                    sdiagonalSum += magicSquare[i][cols-j-1];
                    }
                }   
            }
            if(sdiagonalSum != prevSum && pdiagonalSum != prevSum){
                System.out.println("not magic");
                System.exit(0);
            }
    
        System.out.println("the entired matrix is a magic square");
        //diagonal check

        scanner.close();
    }
}