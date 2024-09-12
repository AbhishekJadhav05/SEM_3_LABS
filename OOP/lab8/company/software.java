package lab8.company;

public class software implements company{

    String softwareType,OS;

    software(String softwareType,String OS){
        this.softwareType =softwareType;
        this.OS = OS;
    }

    @Override
    public String getSoftwareType() {
        return this.softwareType;
    }

    @Override
    public String getOS() {
        return this.OS;
    }

    @Override
    public String getCategory() {
        throw new UnsupportedOperationException("Unimplemented method 'getCategory'");
    }

    @Override
    public String getManufacturer() {
        throw new UnsupportedOperationException("Unimplemented method 'getManufacturer'");
    }
    
}
