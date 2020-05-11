/* package codechef; // don't place package name! */

// https://www.codechef.com/viewsolution/32848941
// https://www.codechef.com/problems/SNCKYEAR

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner s = new Scanner(System.in);
		int cases = s.nextInt();
		for(int i = 0; i<cases; i++)
		{
		    switch(s.nextInt())
		    {
		        case 2010: System.out.println("HOSTED");
		        break;
		        case 2015: System.out.println("HOSTED");
		        break;
		        case 2016: System.out.println("HOSTED");
		        break;
		        case 2017: System.out.println("HOSTED");
		        break;
		        case 2019: System.out.println("HOSTED");
		        break;
		        default:System.out.println("NOT HOSTED");
		    }
		}
		
	}
}
