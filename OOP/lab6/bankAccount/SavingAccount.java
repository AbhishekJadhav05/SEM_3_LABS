package lab6.bankAccount;

public class SavingAccount extends Account {
    double interest;
    SavingAccount(String name,long accountNo,double balance,double interest){
        super(name,"Savings Account", accountNo, balance);
        this.interest = interest;
    }
    void computeAndDepositeInterest(){
        double interest = (this.balance * this.interest) / 100;
        balance += interest;
    }
}
