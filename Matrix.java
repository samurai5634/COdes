package matrix;

import java.util.Scanner;

public class Matrix {
private  int r;
private  int c;
private int mat[][];  
public  Matrix(int r,int c)
{
	this.c=c;
	this.r=r;
	this.mat=new int[r][c]; //Assigns and declares mat(instance variable) it a 2d array with
	
}
	

public void input()	
{
	Scanner sc=new Scanner(System.in);
	int i,j;
	System.out.println("Enter the elements: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mat[i][j]=sc.nextInt();
		}
	}
	
}
public void display()
{
	
	int i,j;
	System.out.println("matrix is: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			System.out.print(mat[i][j] + " "); //continues the cursor in the same line
        }
		System.out.println();//brings the cursor to the next line
	}
}

public void add(Matrix obj,Matrix obj1)

{
	int i,j;
	System.out.println("Addition of both matrices is: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mat[i][j]=obj.mat[i][j]+obj1.mat[i][j];
			
		}
	}
	
                                                                          	
}
public void mul(Matrix obj,Matrix obj1)	
{
int i,j;
System.out.println("Multiplication of both matrices is: ");
 for(i=0;i<r;i++)	
 {
   for(j=0;j<c;j++)
	 {
	   for(int k=0;k<r;k++ )
	   {
		mat[i][j]+=obj.mat[k][j] * obj1.mat[i][k];
	   }
	 }
  }
	
}
public void trans(Matrix obj)	
{
	int i,j;
	int[][]temp;
	System.out.println("transpose of matrix 1 is: ");
	 for(i=0;i<r;i++)	
	 {
	   for(j=0;j<c;j++)
		 {
		   mat[i][j]=obj.mat[j][i];
		   
		  }
	
	 }
}

	
}
	
	
	
	
	
	
	
	
	
	
	
	

