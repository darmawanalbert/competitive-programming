import java.io.*;
import java.util.*;
import java.math.*;

class Apaxians {
	public static void main(String[] args) {
		InputReader in = new InputReader(System.in);
		PrintWriter out = new PrintWriter(System.out);
		String a = in.next();
		String fin = "";
		char cur = a.charAt(0);
		fin+=cur;
		for (int i=1;i<a.length();i++) {
			if (cur!=a.charAt(i)) {
				fin+=a.charAt(i);
				cur = a.charAt(i);
			}
		}
		out.println(fin);
		out.close();
	}
	
	static class InputReader {
		public BufferedReader reader;
		public StringTokenizer tokenizer;
		
		public InputReader(InputStream stream) {
			reader = new BufferedReader(new InputStreamReader(stream),32768);
			tokenizer= null;
		}
		
		public String next() {
			while (tokenizer==null || !tokenizer.hasMoreTokens()) {
				try {
					tokenizer=  new StringTokenizer(reader.readLine());
				}
				catch (IOException e) {
					throw new RuntimeException(e);
				}
			}
			return tokenizer.nextToken();
		}
	}
}