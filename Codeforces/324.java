import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static BigInteger[] fac = new BigInteger[370];
	
	public static void precompute() {
		fac[0] = BigInteger.ONE;
		fac[1] = BigInteger.ONE;
		for (int i=2;i<=366;i++) fac[i] = fac[i-1].multiply(BigInteger.valueOf(i));
	}
	
	public static void main(String[] args) {
		precompute();
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			int n = in.nextInt();
			if (n==0) break;
			int[] amount = new int[15];
			for (int i=0;i<10;i++) amount[i] = 0;
			String line = fac[n].toString();
			for (int i=0;i<line.length();i++) {
				amount[Character.getNumericValue(line.charAt(i))]++;
			}
			System.out.println(n+"! --");
			System.out.println("   (0)    "+amount[0]+"    (1)    "+amount[1]+"    (2)    "+amount[2]+"    (3)    "+amount[3]+"    (4)    "+amount[4]);
			System.out.println("   (5)    "+amount[5]+"    (6)    "+amount[6]+"    (7)    "+amount[7]+"    (8)    "+amount[8]+"    (9)    "+amount[9]);
		}
	}
}