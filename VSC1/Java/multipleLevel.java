class A {
    String name = "firoz";
    String middleName = "Gulab";
    String surName = "Pathan";

    void name() {
        System.out.println(name);
    }
}

class B extends A {

    void middleName() {
        System.out.println(middleName);
    }
}

class C extends B {

    void surName() {
        System.out.println(surName);
    }

}

public class multipleLevel {
    public static void main(String[] args) {
        C obj = new C();
        obj.name();
        obj.middleName();
        obj.surName();

    }
}
