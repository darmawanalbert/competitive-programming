import java.math.*;
import java.util.*;
import java.math.*;
import java.util.regex.*;

class Main {
	public static void main(String[] args) {
		HashMap<String,Integer> mmap = new HashMap<String,Integer>();
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			int total = 0;
			String result = "";
			int n = in.nextInt();
			String line = in.next();
			mmap.clear();
			for (int i=0;i<=line.length()-n;i++) {
				int count;
				String token = line.substring(i,i+n);
				if (mmap.containsKey(token)) {
					int val = mmap.get(token);
					mmap.put(token,val+1);
					count = val+1;
				}
				else {
					mmap.put(token,1);
					count = 1;
				}
				if (count>total) {
					total = count;
					result = token;
				}
			}
			System.out.println(result);
		}
	}
}