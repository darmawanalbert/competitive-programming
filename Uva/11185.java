import java.math.*;
import java.util.*;
import java.io.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			String line = in.next();
			if (line.charAt(0)=='-') break;
			BigInteger a = new BigInteger(line,10);
			System.out.println(a.toString(3));
		}
	}
}