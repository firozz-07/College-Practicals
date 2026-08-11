import java.util.Scanner;

class Distance {
    int feet;
    int inches;

    void input() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter feet: ");
        feet = sc.nextInt();

        System.out.print("Enter inches: ");
        inches = sc.nextInt();
    }

    Distance add(Distance d) {
        Distance temp = new Distance();

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12) {
            temp.feet = temp.feet + temp.inches / 12;
            temp.inches = temp.inches % 12;
        }

        return temp;
    }

    void display() {
        System.out.println(feet + " feet " + inches + " inches");
    }
}

public class lastOne {
    public static void main(String[] args) {

        Distance d1 = new Distance();
        Distance d2 = new Distance();
        Distance d3;

        System.out.println("Enter first distance:");
        d1.input();

        System.out.println("\nEnter second distance:");
        d2.input();

        d3 = d1.add(d2);

        System.out.print("\nTotal distance: ");
        d3.display();
    }
}