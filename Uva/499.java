import java.math.*;
import java.io.*;
import java.util.*;

class Uva499 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		HashMap<Character,Integer> mmap = new HashMap<Character,Integer>();
		while (in.hasNext()) {
			String line = in.nextLine();
			mmap.clear();
			int maks = 0;
			for (int i=0;i<line.length();i++) {
				char cur = line.charAt(i);
				if ((cur>='A' && cur<='Z') || (cur>='a' && cur<='z')) {
					if (mmap.containsKey(cur)) {
						int val = mmap.get(cur);
						mmap.put(cur,val+1);
						if (val+1 > maks) maks = val+1;
					}
					else {
						mmap.put(cur,1);
					}
				}
			}
			for (Map.Entry<Character,Integer> entry : mmap.entrySet()) {
				if (entry.getValue()==maks) System.out.print(entry.getKey());
			}
			System.out.println(" " + maks);
		}
	}
}