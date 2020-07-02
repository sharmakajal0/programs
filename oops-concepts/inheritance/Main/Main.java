class One{
    public void print_geek(){
        System.out.print("Geeks");
    }
}

class Two extends One {
    public void print_for(){
        System.out.print("for");
    }
}

class Three extends One{
    // public void print_geek(){
    //     System.out.print("Geeks");
    // }
}

public class Main{
    public static void main(String[] args) {
        Three t = new Three();
        t.print_geek();
        Two o = new Two();
        o.print_for();
        o.print_geek();
        System.out.println();
    }
}