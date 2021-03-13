import java.math.*;
import java.util.*;
import java.io.*;

class Cetvrta {
	public static void main(String[] args) {
		InputReader in = new InputReader(System.in);
		PrintWriter out = new PrintWriter(System.out);
		int a = in.nextInt();
		int b = in.nextInt();
		int c = in.nextInt();
		int d = in.nextInt();
		int e = in.nextInt();
		int f = in.nextInt();
		if (a==c) out.printf("%d ",e);
		else if (a==e) out.printf("%d ",c);
		else if (c==e) out.printf("%d ",a);
		if (b==d) out.printf("%d\n",f);
		else if (b==f) out.printf("%d\n",d);
		else if (d==f) out.printf("%d\n",b);
		out.close();
	}
	
	static class InputReader {
		public BufferedReader reader;
		public StringTokenizer tokenizer;
		
		public InputReader (InputStream stream) {
			reader = new BufferedReader(new InputStreamReader(stream),32768);
			tokenizer= null;
		}
		
		public String next() {
			while (tokenizer==null || !tokenizer.hasMoreTokens()) {
				try {
					tokenizer = new StringTokenizer(reader.readLine());
				}
				catch (IOException e) {
					throw new RuntimeException(e);
				}
			}
			return tokenizer.nextToken();
		}
		
		public int nextInt() {
			return Integer.parseInt(next());
		}
	}
}