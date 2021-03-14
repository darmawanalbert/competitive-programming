import java.math.*;
import java.util.*;
import java.io.*;
import java.text.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			int b = in.nextInt();
			if (b==0) break;
			BigInteger p = new BigInteger(in.next(),b);
			BigInteger m = new BigInteger(in.next(),b);
			System.out.println(p.mod(m).toString(b));
		}
		
	}
}