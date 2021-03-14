import java.math.*;
import java.util.*;
import java.io.*;
import java.util.regex.*;
class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String verb = "(hate|love|know|like)([s]?)";
		String active = "(a |the )?(tom|jerry|goofy|mickey|jimmy|dog|cat|mouse)( and (a |the )?(tom|jerry|goofy|mickey|jimmy|dog|cat|mouse))*";
		String regex = active + " " + verb + " " + active;
		
		while (in.hasNext()) {
			String line = in.nextLine();
			StringTokenizer tokenizer = new StringTokenizer(line,",");
			boolean match = true;
			while (tokenizer.hasMoreTokens()) {
				String token = tokenizer.nextToken();
				token  = token.trim();
				if (!token.matches(regex)) {
					match = false;
				}
			}
			if (match) System.out.println("YES I WILL");
			else System.out.println("NO I WON\'T");
		}
	}
}