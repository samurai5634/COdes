package bag;
import java.util.*;
public class Bagop {

	public static void main(String[] args) {
		     String c;	
		    double w;
			int choice,ch;int n=0;
			int rec=0;
			
			
			Bag a []=new Bag[10];
			Scanner sc= new Scanner(System.in);
		    
			
			do
			{

				System.out.println("1. Add ");
				System.out.println("2. Display ");
				System.out.println("3. Delete ");
				System.out.println("4. Display total weight and total objects ");
				System.out.println("5. Exit ");
				System.out.println("Enter choice: ");
				choice = sc.nextInt();
				switch(choice)
			
				{
				case 1:
					System.out.println("1.Default Constructor");
					System.out.println("2. Parameterized Constructor ");
					System.out.println("3. Parametrized col ");
					System.out.println("4. Parametrized wt ");
					System.out.println("5. Exit ");
					System.out.println("Enter choice: ");
					ch = sc.nextInt();
					switch(ch)
					{
					case 1:
						n=Bag.total_objects;
						a[n]=new Bag();
						break;
					case 2:
						n=Bag.total_objects;	
					    System.out.println("Enter colour: ");
						c=sc.next();
						System.out.println("Enter weight: ");
						w=sc.nextDouble(); 
						a[n]=new Bag(w,c);
						break;
					case 3:
						n=Bag.total_objects;
						System.out.println("Enter colour: ");
						c=sc.next();
						a[n]=new Bag(c);
						break;
					case 4:
						n=Bag.total_objects;
						System.out.println("Enter weight: ");
						w=sc.nextDouble();
						a[n]=new Bag(w);
				        break;
					case 5:
						break;
					}
					break;
					
				case 2:
					int i;
					for(i=0;i<Bag.total_objects;i++)
					a[i].display();
					break;
				case 3:
					System.out.println("Enter Record you want to delete: ");
					rec=sc.nextInt();
					a[n].delete(rec,a);
					break;
				case 4:
					Bag.output();
					break;
				case 5:
					break;
				
				}    
			
			}while(choice!=5);	
		 
			}
		    
		    
		    
		    


	}


