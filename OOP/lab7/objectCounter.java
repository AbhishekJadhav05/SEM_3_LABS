package lab7;

public class objectCounter {
    static int counter;
    objectCounter(){
        counter++;
    }
    public static void main(String[] args) {
        objectCounter[] arr = new objectCounter[10];
        for(int i =0;i<10;i++){
            arr[i] = new objectCounter();
        }
        System.out.println(counter);
    }
}
