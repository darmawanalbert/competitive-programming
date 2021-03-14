import java.math.*;
import java.util.*;
import java.io.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger a,b,c;
		int t = in.nextInt();
		int toggle;
		boolean isUnary;
		while (t-- >0) {
			isUnary = true;
			toggle = 0;
			String line1 = in.next();
			String op = in.next();
			String line2 = in.next();
			String eq = in.next();
			String line3 = in.next();
			for (int i=0;i<line1.length();i++) {
				if (line1.charAt(i)!='1') {
					isUnary = false;
					break;
				}
			}
			for (int i=0;i<line2.length();i++) {
				if (line2.charAt(i)!='1') {
					isUnary = false;
					break;
				}
			}
			for (int i=0;i<line3.length();i++) {
				if (line3.charAt(i)!='1') {
					isUnary = false;
					break;
				}
			}
			if (isUnary) {
				if ((line1.length()+line2.length())==line3.length()) {
					System.out.println("1");
				}
				else isUnary = false;
			}
			if (!isUnary) {
				for (int i=2;i<=36;i++) {
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
}