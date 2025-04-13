#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define W 68
#define H 40
#define B 80

char*z,*s,c,*S="@",*Q = "G1$0]1&0]1'0[1,0V1-0S100P130N140M160K170K180J180I190J190I190J180M150L160L170L150N150N130A1 0,1#0 1/0>1&0)120>1'0)130<1)0(1/0 1\"0<1(0)1/0 1 0>1)0(1/0\"1 0=1)0&100A1*0\"110 1 0C1)0!120F1(0 120F1<0E1>0D1>0D1>0#1 0?1>0 1#0>1A0A1.0 110A1-0 120)1~J1(0Z1)0 1 0V1.0Q120N150K180J180I190H1;0G1;0F1=0E1=0F1<0F1=0F1;0I1:0H1:0G1;0H1:0B1 0!1 0\"1:0?1&0\"180>1)0\"180=1)0#160=1+0!180<1*0#170=1)0#160>1*0#110 1#0>1*0!130 1 0 1 0?1*0!120E1<0\"1 0A1;0 1!0D1;0!1 0C1<0!1 0D1<0E1=0E1>0C1>0E1>0#1 0>1)0 140!1#0>1'0!180$1~";
char screen[H][W+1];
int (*p)() = printf;
void clear_screen() {
	p("\x1b[2J\x1b[H");
}

const char *deserialize_frame(const char *data) {
	int x = 0, y = 0;
	
	while(*data != '~') {
		int rl = *data++ - ' ' + 1;
		char value = (*data++ == '1') ? '#' : ' ';
		
		while(rl--) {
			screen[y][x++] = value;
			if(x >= W) {
				x = 0;
				y++;
			}
		}
	}
	return ++data;
}

// Print B + 20 - cx spaces
void ps(int cx) {
	for (int i=0; i < B + 12 - cx; i++) {
		p(" ");
	}
	p("//     ");
}

int main() {    
	const char *curr_frame = Q;
	clear_screen();
	
	while(*curr_frame) {
		memset(screen, 0, sizeof(screen));
		curr_frame = deserialize_frame(curr_frame);

		// First part: output the quine
		int cx = 1, cy = 0;
		z = s = S;
		for (; c = *s++;) {
			if (c == 64) {
				for (; c = *z++;) {
					if (c == '\"' || c == '\\' || c == '\n') {
						p("\\"); cx++;
					}
					putchar(c == '\n' ? 'n' : c); cx++;
					if (cx >= B) {
						printf("\""); cx++;
						if (cy < H) {
							ps(cx);
							p("%s", screen[cy++]);
						}
						p("\n\"");
						cx = 1;
					}
				}
			} else {
				if (c == '\n') {
					if (cy < H) {
						ps(cx);
						p("%s", screen[cy++]);
					}
					cx = -1;
				}
				putchar(c);
				cx++;
			}
		}
		putchar('\n');

		// Move cursor to home position
		// printf("\x1b[H");
		// Sleep for 0.1 second
		usleep(100000);
	}
	return 0;
}