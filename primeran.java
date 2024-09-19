import java.util.Scanner;

 class prime_number 
{

	public static void main(String[] args) {
		int range,num,flag;
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the range:");
		range=sc.nextInt();
		
		for(num=2;num<=range;num++)
		{
			flag=0;
			for(int i=2;i<num;i++)
			{
				if(num%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				System.out.println(num+" is a prime number");
			}
		}

	}

}
