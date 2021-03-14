import java.math.*;
import java.util.*;
import java.io.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger a,b,c;
		int t = in.nextInt();
		int toggle;
		while (t-- >0) {
			toggle = 0;
			String line1 = in.next();
			String op = in.next();
			String line2 = in.next();
			String eq = in.next();
			String line3 = in.next();
			for (int i=1;i<=10;i++) {
				try {
					a = new BigInteger(line1,i);
					b = new BigInteger(line2,i);
					c = new BigInteger(line3,i);
					a = a.add(b);
					int res = a.compareTo(c);
					if (res==0) {
						toggle = i;
						break;
					}
				} catch (Exception e) {
					continue;
				}
			}
			System.out.println(toggle);
		}
		
	}
}