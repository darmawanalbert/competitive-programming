import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger maks;
		BigInteger limit;
		int t = in.nextInt();
		int res;
		while (t-- >0) {
			int n = in.nextInt();
			BigInteger original = new BigInteger(in.next());
			BigInteger k = original;
			limit = BigInteger.TEN;
			limit = limit.pow(n);
			limit = limit.subtract(BigInteger.ONE);
			maks = k;
			boolean toggle = true;
			int ctr = 1;
			while (toggle) {
				if (k.compareTo(limit)==0) toggle = false;
				k = k.multiply(k);
				String temp = k.toString();
				if (temp.length()>n) {
					k = new BigInteger(temp.substring(0,n));
				}
				res = k.compareTo(maks);
				if (res>0) maks = k;
				if (k.compareTo(original)==0) toggle = false;
				ctr++;
				if (ctr>100) toggle = false;
			}
			System.out.println(maks);

		}
		
	}
}