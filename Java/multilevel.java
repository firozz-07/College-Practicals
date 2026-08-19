class A {
    String name = "firoz ";
}

class B extends A {
    String surname = "pathan ";
}

class C extends B {
    String middleName = "gulab ";

    C(String middlename) {
        System.out.print(name);

        System.out.print(middleName);
        System.out.print(surname);
    }
}

public class multilevel {
    public static void main(String[] args) {
        C obj = new C(null);
    }
}