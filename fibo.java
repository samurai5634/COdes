import java.util.Scanner;
 class fibonacci {
    public static void main(String[] args) {
        int num1=0,num2=1,n,sum;
        Scanner sc= new Scanner(System.in);
		System.out.println("Enter the number to generate fibonacci series: ");
		n=sc.nextInt();
		System.out.println("Fibonacci series is: ");
        for(int i=0;i<n;i++)
        {
            System.out.print(num1 + " ");
            sum = num1 + num2;
            num1 = num2;
            num2 = sum ;
        }
    }
}