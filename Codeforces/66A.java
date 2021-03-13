import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger a = new BigInteger(in.next());
		BigInteger lowByte = new BigInteger("-128");
		BigInteger highByte = new BigInteger("127");
		BigInteger lowShort = new BigInteger("-32768");
		BigInteger highShort = new BigInteger("32767");
		BigInteger lowInt = new BigInteger("-2147483648");
		BigInteger highInt = new BigInteger("2147483647");
		BigInteger lowLong = new BigInteger("-9223372036854775808");
		BigInteger highLong = new BigInteger("9223372036854775807");
		if (a.compareTo(lowByte)>=0 && a.compareTo(highByte)<=0) {
			System.out.println("byte");
		}
		else if (a.compareTo(lowShort)>=0 && a.compareTo(highShort)<=0) {
			System.out.println("short");
		}
		else if (a.compareTo(lowInt)>=0 && a.compareTo(highInt)<=0) {
			System.out.println("int");
		}
		else if (a.compareTo(lowLong)>=0 && a.compareTo(highLong)<=0) {
			System.out.println("long");
		}
		else {
			System.out.println("BigInteger");
		}
	}
}