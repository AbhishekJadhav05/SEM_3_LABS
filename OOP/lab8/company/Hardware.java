package lab8.company;

class Hardware implements SalesItem {
    private String category;
    private String manufacturer;
    private int totalSales;

    public Hardware(String category, String manufacturer) {
        this.category = category;
        this.manufacturer = manufacturer;
    }

    @Override
    public void calculateSales(int month1, int month2, int month3) {
        this.totalSales = month1 + month2 + month3;
    }

    @Override
    public void printItemDetails() {
        System.out.println("Hardware Category: " + category);
        System.out.println("Manufacturer: " + manufacturer);
        System.out.println("Total Sales in Last 3 Months: " + totalSales);
    }
}