class Distance {
    int feet;
    int inches;

    Distance(int feet, int inches) {
        this.feet = feet;
        this.inches = inches;
    }

    void display() {
        System.out.println(this.feet + " feet " + this.inches + "inches");
    }
}

public class lastOne {
    public static void main(String[] args) {
        Distance d1 = new Distance(10, 4);
        Distance d2 = new Distance(5, 4);
        Distance d2Ref = d2;
        Distance d3 = new Distance(d1.feet, d1.inches);
        System.out.println("First Object:");
        d1.display();
        System.out.println("\nSecond Object:");
        d2.display();
        System.out.println("\nSecond Object Reference:");
        d2Ref.display();
        System.out.println("\nThird Object (Clone of First):");
        d3.display();
    }
}