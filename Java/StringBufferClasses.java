public class StringBufferClasses {
    public static void main(String[] args) {
        StringBuffer name = new StringBuffer("firoz");
        // Append
        name.append(" Pathan");
        System.out.println(name);

        // Insert
        name.insert(0, "Pathan");
        System.out.println(name);

        // Replace
        name.replace(0, 4, "Arslan");
        System.out.println(name);

        // Delete
        name.delete(0, 4);
        System.out.println(name);

        // Reverse
        name.reverse();
        System.out.println(name);

        //CharAt
        char index=name.charAt(3);
        System.out.println(index);


    }
}
