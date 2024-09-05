package lab6.college;

public class Student {
    String regNo,name;
    int age;
    Student(String regNo,String name,int age){
        this.regNo = regNo;
        this.name = name;
        this.age = age;
    }
    public void display(){
        System.out.println("regNo : "+ regNo);
        System.out.println("Name : "+ name);
        System.out.println("Ager : "+ age);
    }
}
