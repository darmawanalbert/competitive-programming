import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int group = in.nextInt();
		while (group-- >0) {
			BigDecimal acc = new BigDecimal("0.0");
			while (in.hasNext()) {
				String input = in.next();
				if (input.equals("0")) break;
				BigDecimal temp = new BigDecimal(input);
				acc = acc.add(temp);
			}
			System.out.println(acc.stripTrailingZeros().toPlainString());
		}
	}
}