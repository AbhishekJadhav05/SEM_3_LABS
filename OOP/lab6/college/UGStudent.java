package lab6.college;

public class UGStudent extends Student{
    int sem;
    double fees;
    static int UGCount = 0;

    UGStudent(String regNo, String name, int age, int sem, double fees){
        super(regNo, name, age);
        this.sem = sem;
        this.fees = fees;
        UGCount++;
    }

    @Override
    public void display(){
        super.display();
        System.out.println("sem : "+ sem);
        System.out.println("Fees : "+fees);
    }
    
    public int getSemester() {
        return sem;
    }

    public double getFees() {
        return fees;
    }

    public static int getUGCount() {
        return UGCount;
    }
}
