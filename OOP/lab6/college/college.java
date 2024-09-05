package lab6.college;

public class college {
    public static void main(String[] args) {
        UGStudent ug1 = new UGStudent("UG001", "A", 18, 1, 50000);
        UGStudent ug2 = new UGStudent("UG002", "B", 19, 2, 52000);

        // Create PG students
        PGStudent pg1 = new PGStudent("PG001", "C", 23, 1, 80000);
        PGStudent pg2 = new PGStudent("PG002", "D", 24, 2, 82000);
        System.out.println("UG Students:");
        ug1.display();
        System.out.println();
        ug2.display();
        System.out.println();

        // Display PG student details
        System.out.println("PG Students:");
        pg1.display();
        System.out.println();
        pg2.display();
        System.out.println();

        // Display total admissions count
        System.out.println("Total UG Admissions: " + UGStudent.getUGCount());
        System.out.println("Total PG Admissions: " + PGStudent.getPGCount());
    }
}
 
 