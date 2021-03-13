import java.io.*;
import java.util.*;
import java.math.*;

class Pot {
	public static void main(String[] args) {
		InputReader in = new InputReader(System.in);
		PrintWriter out = new PrintWriter(System.out);
		int a = in.nextInt();
		int sum = 0;
		int temp,input;
		for (int i=1;i<=a;i++) {
			input = in.nextInt();
			temp = input%10;
			input= input/10;
			sum += Math.pow(input,temp);
			//out.println(input);
			//out.println(temp);
		}
		out.println(sum);
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