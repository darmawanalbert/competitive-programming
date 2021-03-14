import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		// BigDecimal value = value.setScale(0, RoundingMode.UP);
		while (t-- >0) {
			BigDecimal a = new BigDecimal(in.next());
			BigDecimal b = new BigDecimal(in.next());
			a = a.add(b);
			a = a.stripTrailingZeros();
			String res = a.toString();
			boolean isDot = false;
			for (int i=0;i<res.length();i++) {
				if (res.charAt(i)=='.') isDot = true;
			}
			if (isDot) System.out.println(a);
			else System.out.println(a+".0");
		}
	}
}