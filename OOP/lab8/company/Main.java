package lab8.company;

public class Main {
    public static void main(String[] args) {
        company companyHardware;
        company companySoftware;
        companyHardware = new hardware("printer", "HP");
        companySoftware = new software("Printerdriver", "windows");
        System.out.println(companyHardware.getCategory());
        System.out.println(companyHardware.getManufacturer());
        System.out.println(companySoftware.getSoftwareType());
        System.out.println(companySoftware.getOS());
    }
}
