package matrix;
import java.util.*;
public class matrixop {

	public static void main(String[] args) {
		int r,c;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the no of rows: ");
		r=sc.nextInt();
		System.out.println("enter the no of columns: ");
		c=sc.nextInt();	
		Matrix obj=new Matrix(r,c);
		obj.input();
		obj.display();
		Matrix obj1=new Matrix(r,c);
		obj1.input();
		obj1.display();
		Matrix obj2=new Matrix(r,c);
		obj2.add(obj,obj1);
		obj2.display();
		Matrix obj3=new Matrix(r,c);
		obj3.mul(obj, obj1);
		obj3.display();
		Matrix obj4=new Matrix(r,c);
		obj4.trans(obj);
		obj4.display();
		
	}

}
