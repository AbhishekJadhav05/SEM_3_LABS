package lab6.bankAccount;

public class CurrentAccount extends Account{
    double penalty;
    double minimumBalance;
    CurrentAccount(String name, long accountNo, double balance, double minimumBalance, double penalty) {
        super(name,"Current", accountNo, balance);
        this.minimumBalance = minimumBalance;
        this.penalty = penalty;
    }
    void checkAndImposePenalty() {
        if (balance < minimumBalance) {
            balance -= penalty;
            System.out.println("Balance below minimum. Penalty of " + penalty + " imposed. New Balance: " + balance);
        } else {
            System.out.println("Sufficient balance. No penalty imposed.");
        }
    }
}
