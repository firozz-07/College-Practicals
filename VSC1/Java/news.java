class A {
    String name = "firoz";
    String middleName = "Gulab";
    String surName = "Pathan";

    A() {
        System.out.println(name);
    }
}

class B extends A {

     B() {
        System.out.println(middleName);
    }
}

class C extends B {

    C() {
        System.out.println(surName);
    }

}

public class news {
    public static void main(String[] args) {
        C obj = new C();

    }
}
