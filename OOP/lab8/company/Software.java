package lab8.company;

class Software implements SalesItem {
    private String softwareType;
    private String operatingSystem;
    private int totalSales;

    public Software(String softwareType, String operatingSystem) {
        this.softwareType = softwareType;
        this.operatingSystem = operatingSystem;
    }

    @Override
    public void calculateSales(int month1, int month2, int month3) {
        this.totalSales = month1 + month2 + month3;
    }

    @Override
    public void printItemDetails() {
        System.out.println("Software Type: " + softwareType);
        System.out.println("Operating System: " + operatingSystem);
        System.out.println("Total Sales in Last 3 Months: " + totalSales);
    }
}
