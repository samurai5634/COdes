import java.util.Scanner;
public class COMPLEX {
private int real,img;

public void getdata()
{
	Scanner sc= new Scanner (System.in);
	real=sc.nextInt();
	img=sc.nextInt();
}
public void add(COMPLEX C1,COMPLEX C2)
{
	real= C1.real+C2.real;
	img= C1.img+C2.img;        # if you want  to return the value use class_name when object is passed as parameter.
}
public void display()
{
	System.out.println(real+"+"+img+"i");
}
public static void main(String[] args) {
	COMPLEX C1=new COMPLEX();
	COMPLEX C2=new COMPLEX();
	COMPLEX C3=new COMPLEX();
	
	System.out.println("first number is ");
	C1.getdata();
	System.out.println("second number is ");
	C2.getdata();
	
	
	C3.add(C1,C2);
	System.out.println("first number is ");
	C1.display();
	System.out.println("second number is ");
	C2.display();
	System.out.println("result is ");
	C3.display();
	
	}
}
