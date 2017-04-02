import java.util.*;
import java.math.*;
class Bruteforce
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		//System.out.println("Enter the size of matrix to be formed");
		int n = sc.nextInt();
		int i = 0; int j = 0; int k = 0;
		for(k=0;k<1;k++)
	{
		n = n*2;
		//n = 4;
		//System.out.println(n);
		int minimum = 1;
		int maximum = 50;
		float [][]a = new float[n][n];
		float [][]b = new float[n][n];
		float [][]c = new float[n][n];
		//float [][]d = new float[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j] = (float)(minimum + (int)(Math.random() * maximum));
				b[i][j] = (float)(minimum + (int)(Math.random() * maximum));
				//a[i][j] = 1;
				//b[i][j] = 1;
			}
		}
		double start = System.nanoTime();
		c = multiply(a,b,n);
		double end = System.nanoTime();

		/*for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				System.out.print(c[i][j]+" ");
			}
			System.out.println();
		} */

		System.out.println("Time taken for n = "+n+" is : "+(end-start)/1000000000 + " Seconds");
	}
	}

	 public static float[][] multiply(float[][] a, float[][] b,int n)
	{
	       //int n = a[0].length;
	       float[][] c = new float[n][n];
	       for (int i = 0; i < n; i++)
		{
		           for (int j = 0; j < n; j++)
				{
               				for (int k = 0; k < n; k++)
						{
                   					c[i][j] = c[i][j] + a[i][k] * b[k][j];
               					}
           			}
       		}
      		return c;
   	}


}
