package lab6.bankAccount;

public class bank {
    public static void main(String[] args) {
        SavingAccount savingAccount = new SavingAccount("abhishek", 1234567890L, 100000, 5.0);
        savingAccount.deposit(10000);
        savingAccount.computeAndDepositeInterest();
        savingAccount.withdraw(10000);
        savingAccount.displayBalance();

        CurrentAccount currentAccount = new CurrentAccount("abhishek",123456789L , 10000, 1000, 1000);
        currentAccount.withdraw(200);
        currentAccount.checkAndImposePenalty();
        currentAccount.displayBalance();

    }
}
