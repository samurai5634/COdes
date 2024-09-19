import java.util.Scanner;
public class COMPLEX {
private int real1,img1,real2,img2,real3,img3;

public void getdata()
{
	Scanner sc= new Scanner (System.in);
	System.out.println("enter first complex number : ");
	real1=sc.nextInt();
	img1=sc.nextInt();
	
	
	System.out.println("enter second complex number : ");
	real2=sc.nextInt();
	img2=sc.nextInt();
	
}
public void add()
{
	real3= real1+real2;
	img3= img1+img2;
}

public void display()
{
	System.out.println("first complex is");
	System.out.println(real1+ "+" + img1+ "i");
	System.out.println("second complex is");
	System.out.println(real2+ "+" + img2+ "i");
	System.out.println("THIRD complex is");
	System.out.println(real3+ "+" + img3+ "i");

	
}
}
