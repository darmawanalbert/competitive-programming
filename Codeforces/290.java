import java.math.*;
import java.util.*;
import java.io.*;

class Main {
	public static boolean isPalindrome(String x) {
		for (int i=0,j=x.length()-1;i<j;i++,j--) {
			if (x.charAt(i)!=x.charAt(j)) return false;
		}
		return true;
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			String line = in.next();
			for (int i=15;i>=2;i--) {
				if (i!=15) System.out.print(" ");
				try {
					int sum = 0;
					BigInteger a = new BigInteger(line,i);
					if (isPalindrome(a.toString(i))) {
						System.out.print("0");
					}
					else {
						while (true) {
							String current = a.toString(i);
							String rev = new StringBuffer(current).reverse().toString();
							BigInteger b = new BigInteger(rev,i);
							a = a.add(b);
							sum++;
							if (isPalindrome(a.toString(i))) break;
						}
						System.out.print(sum);
					}
					
				}
				catch (NumberFormatException e) {
					System.out.print("?");
				}
			}
			System.out.println("");
		}
	}
}