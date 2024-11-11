package lab8.company;

public class Main{
    public static void main(String[] args) {
        // Hardware item
        Hardware hardwareItem = new Hardware("Laptop", "Dell");
        hardwareItem.calculateSales(100, 150, 120); // Sales in last 3 months
        hardwareItem.printItemDetails();

        // Software item
        Software softwareItem = new Software("Antivirus", "Windows");
        softwareItem.calculateSales(200, 250, 230); // Sales in last 3 months
        softwareItem.printItemDetails();
    }
}
