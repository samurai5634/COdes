//package firstprogra;
import java.util.Scanner;
 class factorial_num {

	public static void main(String[] args) {
         int num;
         int fact =1;
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter the number:");
         num=sc.nextInt();
        		 
        if(num==0) 
        {
        	System.out.println(" 1 is a factorial");
        }
        else
        {
        	for(int i=1;i<=num;i++) 
   		 {
   			 fact=fact*i;
   		 }
        	System.out.println(fact+" is a factorial");
        }
	}

}

