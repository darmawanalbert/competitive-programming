import java.math.*;
import java.util.*;
import java.io.*;
import java.util.regex.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for (int ctr=1;ctr<=t;ctr++) {
			int n = in.nextInt();
			BigInteger a = BigInteger.valueOf(n);
			if (n>1) {
				a = a.pow(n-2);
				a = a.mod(new BigInteger("2000000011"));
			}
			System.out.println("Case #" + ctr + ": " + a);
		}
	}
}