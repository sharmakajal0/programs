package polymorphism.overriding;

class Parent{
    public void show(){
        System.out.println("Final access specifier in parent method.");
    }
}

class Child extends Parent{
    @Override
    public void show(){
        System.out.println("Overriding method.");
    }
}

class Main{
    public static void main(String[] args) {
        Parent obj = new Parent();
        obj.show();
        Child object = new Child();
        object.show();
    }
}