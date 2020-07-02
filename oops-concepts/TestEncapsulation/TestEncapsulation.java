// package encapsulation.testEncapsulation;

class Encapsulate{
    private String geekName;
    private int geekRoll;
    private int geekAge;

    public int getAge(){
        return geekAge;
    }

    public String getName(){
        return geekName;
    }

    public int getRoll(){
        return geekRoll;
    }

    public void setName(String newName){
        geekName = newName;
    }

    public void setAge(int newAge){
        geekAge = newAge;
    }

    public void setRoll(int newRoll){
        geekRoll = newRoll;
    }
}

public class TestEncapsulation{
    public static void main(String[] args) {
        Encapsulate obj = new Encapsulate();

        obj.setName("Chandan");
        obj.setAge(23);
        obj.setRoll(62);

        System.out.println("Name of the geek is : " + obj.getName());
        System.out.println("Age of the geek is : " + obj.getAge());
        System.out.println("Roll number of the  geek is : " + obj.getRoll());
    }
}