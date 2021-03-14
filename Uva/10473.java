import java.math.*;
import java.util.*;
import java.io.*;
import java.text.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger a;
		while(in.hasNext()) {
			String line = in.next();
			if ((line.charAt(0)=='-')) break;
			if ((line.charAt(0)=='0') && (line.charAt(1)=='x')) {
				a = new BigInteger(line.substring(2,line.length()),16);
				System.out.println(a.toString(10));
			}
			else {
				a = new BigInteger(line,10);
				System.out.println("0x"+a.toString(16).toUpperCase());
			}
		}
	}
}