class Account{
    private long accountNumber;
    private String name, email;
    private float amount;

    public void setAccountNumber(long accountNumber){
        this.accountNumber = accountNumber;
    }
    
    public long getAccountNumber(){
        return accountNumber;
    }

    public void setNameAndEmail(String name, String email){
        this.name = name;
        this.email = email;
    }

    public String getName(){
        return name;
    }

    public String getEmail(){
        return email;
    }
    
    public void setAmount(float amount){
        this.amount = amount;
    }

    public float getAmount(){
        return amount;
    }
}

public class TestAccount{
    public static void main(String[] args) {
        Account acc = new Account();
        acc.setAccountNumber(7560508379843L);
        acc.setNameAndEmail("Sonu Jaiswal", "sonujaiswal@javatpoint.com");
        acc.setAmount(1500000f);

        System.out.println(acc.getName() + " " + acc.getEmail());
        System.out.println(acc.getAccountNumber() + " " + acc.getAmount());
    }
}