import java.math.*;
import java.util.*;
import java.io.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while (t-- >0) {
			BigInteger a = new BigInteger(in.next(),16);
			String operation = in.next();
			BigInteger b = new BigInteger(in.next(),16);
			String zeroA = "";
			String zeroB = "";
			for (int i=0;i<(13-(a.toString(2).length()));i++) {
				zeroA+="0";
			}
			for (int i=0;i<(13-(b.toString(2).length()));i++) {
				zeroB+="0";
			}
			if (operation.charAt(0)=='+') {
				System.out.println(zeroA+a.toString(2) + " + " + zeroB+b.toString(2) + " = " + a.add(b).toString(10));
			}
			else {
				System.out.println(zeroA + a.toString(2) + " - " + zeroB + b.toString(2) + " = " + a.subtract(b).toString(10));
			}
		}
	}
}