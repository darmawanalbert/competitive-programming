import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			String line = in.next();
			int from = in.nextInt();
			int to = in.nextInt();
			BigInteger a = new BigInteger(line,from);
			String result = a.toString(to);
			int len = result.length();
			if (len>7) {
				System.out.println("  ERROR");
			}
			else {
				for (int i=0;i<(7-len);i++) System.out.print(" ");
				System.out.println(result.toUpperCase());
			}
		}
		
	}
}