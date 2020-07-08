/* Encapsulation
 * Provides control over the data.
 * Way to achieve data hiding.
 * The encapsulated class is easy to test.
 */
class Student{
    private String name;
    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name = name;
    }
}

class Encapsulation{
    public static void main(String[] args) {
        Student s = new Student();
        s.setName("Vimal");
        System.out.println(s.getName());
    }
}
