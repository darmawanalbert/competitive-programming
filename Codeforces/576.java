import java.math.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			String line = in.nextLine();
			if (line.equals("e/o/i")) break;
			StringTokenizer tokenizer = new StringTokenizer(line,"/");
			String first = tokenizer.nextToken();
			String second = tokenizer.nextToken();
			String third = tokenizer.nextToken();
			Pattern pattern = Pattern.compile("[aieuoy]+");
			Matcher matcher = pattern.matcher(first);
			int totFirst = 0;
			while (matcher.find()) totFirst++;
			int totSecond = 0;
			matcher = pattern.matcher(second);
			while (matcher.find()) totSecond++;
			int totThird = 0;
			matcher = pattern.matcher(third);
			while (matcher.find()) totThird++;
			if (totFirst==5) {
				if (totSecond==7) {
					if (totThird==5) {
						System.out.println("Y");
					}
					else System.out.println(3);
				}
				else System.out.println(2);
			}
			else {
				System.out.println(1);
			}
		}
	}
}