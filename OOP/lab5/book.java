package lab5;

import java.util.Scanner;

public class book {
    
    String title,authorName;
    Integer edition;

    book(String title, String authorName, Integer edition){
        this.title = title;
        this.authorName = authorName;
        this.edition = edition;
    }
    void display(){
        System.out.println("the following is the information of the book : ");
        System.out.println("title : "+this.title);
        System.out.println("Author : "+this.authorName);
        System.out.println("edition : "+this.edition);
    }

    public static void main(String[] args) {
        String title,name;
        int edition;
        String choice;
        Scanner scannerString =  new Scanner(System.in);
        Scanner scannerInt =  new Scanner(System.in);
        book[] book = new book[6];
        for(int i=0;i<6;i++){
            System.out.println("enter the title of the book : ");
            title = scannerString.nextLine();
            System.out.println("enter the name of the author : ");
            name = scannerString.nextLine();
            System.out.println("enter the edition of the book : ");
            edition = scannerInt.nextInt();
            book[i] = new book(title, name, edition);
        }
        System.out.println("which authors book info do you want to display? ");
        choice = scannerString.nextLine();
        scannerString.close();
        scannerInt.close();
        for(int i=0;i<6;i++){
            if(choice.equals(book[i].authorName)){
                book[i].display();
            }
        }
    }
}
                                                        