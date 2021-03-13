#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <map>
using namespace std;

map<char,char> shiftLeft;
map<char,char> shiftRight;

void precompute() {
	shiftLeft.clear();
	shiftRight.clear();
	shiftLeft['w'] = 'q';
	shiftLeft['e'] = 'w';
	shiftLeft['r'] = 'e';
	shiftLeft['t'] = 'r';
	shiftLeft['y'] = 't';
	shiftLeft['u'] = 'y';
	shiftLeft['i'] = 'u';
	shiftLeft['o'] = 'i';
	shiftLeft['p'] = 'o';
	
	shiftLeft['s'] = 'a';
	shiftLeft['d'] = 's';
	shiftLeft['f'] = 'd';
	shiftLeft['g'] = 'f';
	shiftLeft['h'] = 'g';
	shiftLeft['j'] = 'h';
	shiftLeft['k'] = 'j';
	shiftLeft['l'] = 'k';
	shiftLeft[';'] = 'l';
	
	shiftLeft['x'] = 'z';
	shiftLeft['c'] = 'x';
	shiftLeft['v'] = 'c';
	shiftLeft['b'] = 'v';
	shiftLeft['n'] = 'b';
	shiftLeft['m'] = 'n';
	shiftLeft[','] = 'm';
	shiftLeft['.'] = ',';
	shiftLeft['/'] = '.';
	
	shiftRight['q'] = 'w';
	shiftRight['w'] = 'e';
	shiftRight['e'] = 'r';
	shiftRight['r'] = 't';
	shiftRight['t'] = 'y';
	shiftRight['y'] = 'u';
	shiftRight['u'] = 'i';
	shiftRight['i'] = 'o';
	shiftRight['o'] = 'p';
	
	shiftRight['a'] = 's';
	shiftRight['s'] = 'd';
	shiftRight['d'] = 'f';
	shiftRight['f'] = 'g';
	shiftRight['g'] = 'h';
	shiftRight['h'] = 'j';
	shiftRight['j'] = 'k';
	shiftRight['k'] = 'l';
	shiftRight['l'] = ';';
	
	shiftRight['z'] = 'x';
	shiftRight['x'] = 'c';
	shiftRight['c'] = 'v';
	shiftRight['v'] = 'b';
	shiftRight['b'] = 'n';
	shiftRight['n'] = 'm';
	shiftRight['m'] = ',';
	shiftRight[','] = '.';
	shiftRight['.'] = '/';
}

int main() {
	precompute();
	string a,b;
	cin >> b;
	cin >> a;
	for (int i=0;i<a.size();i++) {
		if (b=="R") {
			a[i] = shiftLeft[a[i]];
		}
		else {
			a[i] = shiftRight[a[i]];
		}
	}
	cout << a << endl;
	
	
	return 0;
}