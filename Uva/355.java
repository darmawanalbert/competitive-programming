import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			int from = in.nextInt();
			int to = in.nextInt();
			String line = in.next();
			System.out.print(line);
			try {
				BigInteger a = new BigInteger(line,from);
				System.out.println(" base "+from+" = " +a.toString(to).toUpperCase()+" base "+to);
			}
			catch (NumberFormatException e) {
				System.out.println(" is an illegal base "+from+" number");
			}
			
			
		}
	}
}