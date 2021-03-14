import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while (t-- >0) {
			BigInteger x = in.nextBigInteger();
			BigInteger y = in.nextBigInteger();
			BigInteger z = in.nextBigInteger();
			System.out.println(x.modPow(y,z));
		}
		int zero = in.nextInt();
	}
}