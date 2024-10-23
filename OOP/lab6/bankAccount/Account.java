package lab6.bankAccount;

public class Account {
    String name,accountType;
    long accountNo;
    double balance;
    Account(String name,String accountType,long accountNo,double balance){
        this.name = name;
        this.accountType = accountType;
        this.accountNo = accountNo;
        this.balance = balance;
    }
    void deposit(double amount){
        this.balance += amount;
    }
    void withdraw(double amount){
        if(amount > this.balance){
            System.out.println("Error: withdraw not permitted Balance is less than amount "+this.balance);
        }
        this.balance -= amount;
    }
    void displayBalance(){
        System.out.println(this.balance);
    }
}

