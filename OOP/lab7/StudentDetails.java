package lab7;

public class StudentDetails {
    String collegeName,name;
    long id;
    StudentDetails(String collegeName, String name,long id){
        this.collegeName = collegeName;
        this.name = name;
        this.id = id;
    }
    void displayDetails(){
        System.out.println("College Name : "+this.collegeName);
        System.out.println("name : "+this.name);
        System.out.println("ID : "+this.id);
    }
    public static void main(String[] args) {
        StudentDetails student0 = new StudentDetails("MIT", "a", 1230495L);
        StudentDetails student1 = new StudentDetails("MIT", "B", 1231495L);
        student0.displayDetails();
        student1.displayDetails();
    }
}

