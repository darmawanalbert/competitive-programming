import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while (t-- >0) {
			BigInteger p = in.nextBigInteger();
			String ch = in.next();
			BigInteger q = in.nextBigInteger();
			BigInteger gcdnya= p.gcd(q);
			System.out.println(p.divide(gcdnya)+" / "+q.divide(gcdnya));
		}
	}
}