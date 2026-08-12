class sum{
   public int a;
   public int b;
   
   sum(int a,int b){
      this.a=a;
      this.b=b;
   }
   public void displaySum(){
      System.out.println("Addition is : "+(this.a+this.b));
   }
}

public class Constructor {
   public static void main(String[] args) {
    sum obj=new sum(10, 20);
    obj.displaySum();
   } 
}
