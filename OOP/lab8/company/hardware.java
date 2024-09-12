package lab8.company;

public class hardware implements company {
    String category,manufacturer;
    hardware(String category,String manufacturer){
        this.category = category;
        this.manufacturer = manufacturer;
    }
    public String getCategory(){
        return this.category;
    }
    public String getManufacturer(){
        return this.manufacturer;
    }
    @Override
    public String getSoftwareType() {
        throw new UnsupportedOperationException("Unimplemented method 'getSoftwareType'");
    }
    @Override
    public String getOS() {
        throw new UnsupportedOperationException("Unimplemented method 'getOS'");
    }
}
