/*
#
#
#
#
*/

#include <stdio.h>
char*z,*s,c,*S="@",*Q="";

// global variables
int x,y;

void p(char c) {
	printf("%c", c);
}

int main() {
	// set coordinates and string pointers
	z = s = S;
	x = y = 0;
	for (;c=*s++;) {
		// if character is '@'
		if (c == 64) {
			// write the source code as a string literal
			for (;c=*z++;) {
				// print backslash to escape these character
				if (c == '"' || c == '\\' || c == '\n') {
					p('\\');
				}
				if (c == '\n') {
					p('n');
				} else {
					p(c);
				}
			}
		} else {
			// write the source code as code
			p(c);
		}
	}
	printf("\n");
}