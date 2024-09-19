package bag;

import java.util.Scanner;

public class Bag {


private double wt;
private String col;
static int total_objects;
static double total_wt;
public Bag()
{
	wt=10;
	col="Red";
	total_objects++;
	total_wt+=wt;
}

public Bag(double wt,String col)
{
	this.wt=wt;
	this.col=col;
	total_objects++;
	total_wt+=wt;
}

public Bag(double  wt)
{
	this.wt=wt;
	col="Red";
	total_objects++;
	total_wt+=wt;
	
}

public Bag(String col)
{
	wt=20;
	this.col=col;
	total_objects++;
	total_wt+=wt;
}
  public void display()
  {
  System.out.println("colour="+col+ " "+ "weight="+wt);
  }
public static void output()

{
	 System.out.println("Total objects are: "+total_objects);
	 System.out.println("Total weight is: "+total_wt);
}	


Scanner sc= new Scanner(System.in);

public void delete(int rec,Bag a[])
{
	
	int i1;
	for(i1=rec;i1<total_objects;i1++)
	{
		a[i1-1]=a[i1];
	}
	total_objects--;
	total_wt=total_wt-a[rec-1].wt;
	
}


}


