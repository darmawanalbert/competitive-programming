import java.math.*;
import java.io.*;
import java.util.*;

class Aaah {
	public static void main(String[] args) {
		InputReader in = new InputReader(System.in);
		PrintWriter out = new PrintWriter(System.out);
		String a = in.next();
		String b = in.next();
		if (a.length()>=b.length()) {
			out.println("go");
		}
		else {
			out.println("no");
		}
		out.close();
	}
	static class InputReader {
		public BufferedReader reader;
		public StringTokenizer tokenizer;
		
		public InputReader(InputStream stream) {
			reader = new BufferedReader(new InputStreamReader(stream),32768);
			tokenizer = null;
		}
		
		public String next() {
			while (tokenizer==null || !tokenizer.hasMoreTokens()) {
				try {
					tokenizer= new StringTokenizer(reader.readLine());
				}
				catch (IOException e) {
					throw new RuntimeException(e);
				}
			}
			return tokenizer.nextToken();
		}
	}
}