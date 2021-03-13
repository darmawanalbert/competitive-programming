import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger a,b;
		while (in.hasNext()) {
			String line1 = in.next();
			String line2 = in.next();
			boolean isEqual = false;
			for (int i=1;i<=36;i++) {
				if (isEqual) break;
				for (int j=1;j<=36;j++) {
					try {
						a = new BigInteger(line1,i);
						b = new BigInteger(line2,j);
						if (a.compareTo(b)==0) {
							isEqual = true;
							System.out.println(line1+ " (base "+i+") = "+line2+" (base "+j+")");
							break;
						}
					}
					catch (NumberFormatException e) {
						continue;
					}
					
				}
			}
			if (!isEqual) {
				System.out.println(line1 + " is not equal to "+line2+" in any base 2..36");
			}
		}
	}
}