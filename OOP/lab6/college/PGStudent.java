package lab6.college;

public class PGStudent extends Student{
    int sem;
    double fees;
    static int PGCount = 0;
    PGStudent(String regNo,String name,int age,int sem,double fees){
        super(regNo,name,age);
        this.sem = sem;
        this.fees = fees;
        PGCount++;
    }
    
    public int getSemester() {
        return sem;
    }

    public double getFees() {
        return fees;
    }
    public static int getPGCount() {
        return PGCount;
    }
    @Override
    public void display(){
        super.display();
        System.out.println("Sem : "+sem);
        System.out.println("Fees : "+ fees);
    }
}
