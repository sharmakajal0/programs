/* Overloading in java: Overloading allows different methods to have the same name, but different signatures where the signature 
can differ by the number of input parameter or type of input parameter or both. It is related to compile time polymorphism.*/

package polymorphism.overloading;

public class Sum{
    public int sum(int x, int y){
        return (x + y);
    }

    public int sum(int x, int y, int z){
        return (x + y + z);
    }

    public double sum(double x, double y){
        return (x + y);
    }

    public static void main(String args[]){
        Sum s = new Sum();
        System.out.println(s.sum(10, 20));
        System.out.println(s.sum(10, 20, 30));
        System.out.println(s.sum(10.5, 20.5));
    }
}