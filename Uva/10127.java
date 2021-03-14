import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			BigInteger a = BigInteger.ONE;
			BigInteger mul = BigInteger.ONE;
			BigInteger n = new BigInteger(in.next());
			for (int i=1;i<=10000;i++) {
				if (a.mod(n).compareTo(BigInteger.ZERO)==0) {
					System.out.println(i);
					break;
				}
				mul = mul.multiply(BigInteger.TEN);
				a = a.add(mul);
			}
		}
	}
}