public class Palindrome2 {
    public static void main(String[] args) {
        StringBuffer str=new StringBuffer("level");
        StringBuffer rev=new StringBuffer(str);
        str.reverse();
        if(rev.toString().equals(str.toString())){
            System.out.println("the string is palindrome");
        }
        else{
            System.out.println("the string is not  palindrome");
        }
    }
}