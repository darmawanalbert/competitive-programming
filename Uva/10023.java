import java.math.*;
import java.io.*;
import java.util.*;

class Main {
	public static BigInteger res(BigInteger x) {
		return x.multiply(x);
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
	public static void main(String[] args) {
		InputReader in = new InputReader(System.in);
		int t = in.nextInt();
		int ctr = 0;
		while (t-- >0) {
			if (ctr>0) System.out.println("");
			BigInteger y = new BigInteger(in.next());
			BigInteger x = BigInteger.ZERO;
			BigInteger lo = BigInteger.ONE;
			BigInteger hi = y;
			BigInteger mid;
			while (lo.compareTo(hi)<=0) {
				mid = lo.add(hi).divide(new BigInteger("2"));
				BigInteger temp = res(mid);
				if (temp.compareTo(y)>0) hi = mid.subtract(BigInteger.ONE);
				else {
					lo = mid.add(BigInteger.ONE);
					x = mid;
				}
			}
			System.out.println(x);
			ctr++;
		}
	}
	
}