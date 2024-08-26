public class PatternForEach {
    public static void main(String[] args) {
    int[] arr = {1,2,3,4,5};
    int[] arr1 = new int[5];
    for(int i : arr){
        arr1[i-1] = arr[i-1];
        for(int j:arr1){
            System.out.print(j);
            }    
        System.out.println();
        }
    }
}
