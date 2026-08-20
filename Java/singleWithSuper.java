class A{
String name;
String surName;
	A(String name,String surName){
		this.name=name;
		this.surName=surName;

	}
}
class B extends A{
	B(String name,String surName){
		super(name,surName);
		System.out.println(this.name);
		System.out.println(this.surName);
	}
}
public class single{
public static void main(String [] args){
	B obj=new B("firoz","pathan");
}
}