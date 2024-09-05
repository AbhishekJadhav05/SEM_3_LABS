package lab6.Banks;

public class Main {
    // Method to calculate and display interest
    public static void calculateInterest(Bank bank, double principal, int years) {                                                                                                                                                                                                                                         
        double rate = bank.getRateOfInterest();
        double interest = (principal * rate * years) / 100;
        System.out.println("Bank: " + bank.getClass().getSimpleName());
        System.out.println("Rate of Interest: " + rate + "%");
        System.out.println("Interest for " + years + " years on amount " + principal + ": " + interest + "\n");
    }

    public static void main(String[] args) {
        // Create bank objects using dynamic method dispatch
        Bank sbi = new SBI();                       
        Bank icici = new ICICI();
        Bank axis = new AXIS();

        // Principal amount and number of years
        double principal = 10000;
        int years = 5;

        // Calculate interest for different banks
        calculateInterest(sbi, principal, years);
        calculateInterest(icici, principal, years);
        calculateInterest(axis, principal, years);
    }
}