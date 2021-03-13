import java.math.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String regex1 = "[+-]?([0-9]+)[.][0-9]+";
		String regex2 = "[+-]?([0-9]+)[eE][+-]?[0-9]+";
		String regex3 = "[+-]?([0-9]+)[.][0-9]+[eE][+-]?[0-9]+";
		while (in.hasNext()) {
			String line = in.nextLine();
			if (line.equals("*")) break;
			line = line.trim();
			if (line.matches(regex1) || line.matches(regex2) || line.matches(regex3)) {
				System.out.println(line + " is legal.");
			}
			else System.out.println(line + " is illegal.");
		}
	}
}