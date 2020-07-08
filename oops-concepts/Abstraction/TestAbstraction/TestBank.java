abstract class Bank{
    abstract int getRateOfInterest();
}

class SBI extends Bank{
    int getRateOfInterest(){
        return 7;
    }
}

class PNB extends Bank{
    int getRateOfInterest(){
        return 10;
    }
}

class TestBank{
    public static void main(final String[] args) {
        Bank b;
        b = new SBI();
        System.out.println("Rate of Interest of SBI is: " + b.getRateOfInterest() + "%");
        b = new PNB();
        System.out.println("Rate of Interest of PNB is: " + b.getRateOfInterest() + "%");
    }
}