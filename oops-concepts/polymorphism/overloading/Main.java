package polymorphism.overloading;

class A{
    public static int foo(int a){
        return 10;
    }
    public static char foo(int a, int b){
        return 'a';
    }
    
}
public class Main{
    public static void main(String[] args) {
        A a = new A();
        System.out.println(a.foo(1));
        System.out.println(a.foo(1, 2));
    }
}