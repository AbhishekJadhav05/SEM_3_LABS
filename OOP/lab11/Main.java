import java.util.Scanner;

class MyThread extends Thread {
    @Override
    public void run() {
        System.out.println("Hello from Thread");
    }
}
class MyRunnable implements Runnable {
    @Override
    public void run() {
        System.out.println("Hello from Runnable");
    }
}
class Main{
    public static void main(String[] args){
       Scanner scanner =  new Scanner(System.in);
       System.out.println("do you want to create a runnable or a Thread : ");
       String choice = scanner.next();
       if(choice.equalsIgnoreCase("runnable")){
        Thread thread = new Thread(new MyRunnable());
        thread.start();
       }
       if(choice.equalsIgnoreCase("thread")){
        MyThread thread = new MyThread();
        thread.start();
       }
       System.out.println("Hello from Main thread");
       scanner.close();
    }
}
