#define N 0
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define W 68
#define H 40
#define BL 81

char*z,*s,cdidwa,*S="@",*Q = "I1(0[1)0X1.0Q120N140L170J180I1:0H1:0G1<0F1<0F1=0E1=0F1<0F1<0I1:0H1:0G1;0H1:0A1 0!1 0\"1:0?1 0 1%0\"180>1)0!180=1*0\"170=1*0#160=1*0#170<1*0#160>1*0\"120 1#0=1*0\"130 1 0 1 0?1*0!120 1 0B1=0E1;0 1!0C1<0!1 0C1<0!1 0C1=0E1=0D1?0C1>0D1)0 140#1!0=1(0!140!1\"0>1'0\"180$1~H1)0Z1)0 1 0W1-0Q120N150L170J180I190H1;0G1<0F1<0E1=0F1=0E1=0F1<0G1;0I1:0G1:0H1;0H1:0@1$0#190>1(0\"180=1)0#170<1*0#170<1*0#170=1)0$160=1*0#120 1 0 1!0<1+0\"120 1!0 1 0=1+0!130C1*0 120\"1 0A1;0 1!0C1<0!1 0C1=0D1>0D1>0D1?0C1?0C1(0!140$1 0=1(0 150\"1#0;1(0\"190#1~F1)0Y1,0 1 0U1.0R110O140L160K180I190H1;0G1;0G1<0E1=0E1>0E1=0E1=0F1<0H1;0H1:0G1;0H1:0A1 0&190?1&0#180=1)0#170=1)0$170;1*0#170<1*0$120 1#0<1*0#130 1 0 1 0<1*0$120 1 0 1 0=1*0#120!1 0?1*0 140C1=0 1 0D1<0 1 0C1=0D1?0C1?0C1?0C1@0B1)0 150$1 0<1)0 160!1#0;1(0!1:0#1~B1)0Z1/0S100S100P130M160K170J180I1:0H1;0F1<0F1<0F1=0E1=0E1=0F1=0F1<0I190I190H1:0J180A1 0 1 0 1 0$170?1'0$170=1)0#1#0!100=1*0#1#0 120<1*0#170<1*0$120 1 0 1 0<1*0$130 1 0 1 0<1*0$100C1+0\"110B1,0 120E1<0 1 0C1=0 1 0C1=0D1?0C1?0C1?0C1@0$1 0<1@0\"1\"0<1A0 1\"0$1~?1*0\"1\"0 1 0Q120P130P130P130M150L170J180I1:0H1:0G1<0F1<0F1<0F1=0E1<0G1<0G1;0J180K170J180K170L160L1%0 1/0L1#0\"1.0@1$0'1#0\"1/0=1'0&1#0!1,0 1\"0<1)0%1\"0\"1,0 1\"0<1)0&1!0!1.0>1*0%1\"0 1/0?1*0%1 0 110>1,0#1 0 100?1.0 120 1!0>1-0 120!1!0?1@0E1=0E1=0D1>0D1?0C1>0C1@0!1!0&1~8170L170K180K180K180L170J190H1:0H1;0F1<0F1=0E1=0E1>0D1>0D1>0D1>0E1>0E1 0 1;0J180J170K180K160L1&0 1)0 1#0L1&0!1)0!1\"0K1%0!1+0 1\"0L1\"0 1 0 1,0\"1 0K1#0 1.0P1!0!1.0P1!0 100P1 0 110;1&0,130:1'0,15071)0+13081*0+13091)0+13081+0 1 0'1409100 1 0!15081J091I0;1G0)1~F1$0O1 0 1 0 1 0&1*0J1)0 1.0H1;0F1<0G1=0F1<0H1;0H1;0I1:0G1;0F1=0E1=0E1=0F1=0D1>0E1>0D1>0D1>0E1>0G1 0 180K180J190H180J1#0!1\"0!1.0I1#0!1\"0\"1-0I1#0!1!0#1+0 1!0H1\"0#1!0!1-0J1#0\"1 0!1/0J1\"0#120I1!0$120J1!0\"140I1!0\"150I1 0\"160L130 1!0L170K140 1\"0J140 1\"0I160 1\"0I150 1\"0\"1~}1}1}1G1 0S1&0 1 0 1!0 1%0N160K180K180J180K180J180I1:0G1;0G1;0G1<0E1=0F1<0E1>0D1=0F1=0E1<0H1;0J170L170J180J170J190H1(0!1.0I1%0$1/0G1%0&1/0F1#0 1 0&100D1#0!1 0&100E1\"0)110D1!0)130B1!0*140B1 0*140A1 0*160L160K170~Z1!0_1%0]1'0Z1)0Y1+0R100P120N140M150L160K170K170K170J180K170K170K170M1 0 130N140M150N140N140O130O130O130O130N140O1 0 1#0 1,0O1 0!1!0 1-0N1 0!1!0 1.0O1 0 1!0!1-0Q1 0!1.0P1 0\"1.0U1-0T1.0U1-0T1.0T1.0T1.0T1.0~}1H1 0_1#0^1$0\\1&0[1'0[1'0Z1(0Z1(0Z1(0Z1(0[1'0Z1(0Z1(0Z1(0Z1(0Z1(0Z1(0[1'0\\1&0[1'0Z1(0X1*0R1 0$1*0Q1#0!1+0N1 0 120J1 0 1 0 140F1 0 1 0 180B1 0 1 0 1 0 1:0>1 0 1 0 1 0 1>0.1 0*1 0 1 0 1 0 1!0 1?0+1 0 1 0!1 0&1 0!1 0 1 0 100 1 0 1/0*1 0!1 0 1 0!1 0$1 0 1 0 130!100+1!0 1\"0 1 0\"1 0 160 1 0 100)1!0 1\"0 1!0 1 0 1 0!1 0 150!100*1\"0 1%0 1 0 180!100)1 0 1)0 1 0!170 100)1-0 180 100*1*0 1 0 1 0 1H0*1+0 1 0\"1G0~}1}1}1}1}1I1 0!1 0`1 0`1 0#1 0 1 0(1 0 1 0_1 0Q1 0 1 0 1 0*1 0 1!0 1 0S1 0(1 0 1 0P1!0 1 0 1 0'1 0 1!0 1 0 1 0N1 0 1 0*1 0 1 0 1 0N1 0 1 0 1!0 1 0&1 0 1\"0Q1!0 1 0 1 0&1\"0 1!0N1 0 1#0'1 0 1#0O1 0 1 0 1\"0 1 0$1$0 1 0N1 0 1$0'1%0M1 0 1&0%1$0 1 0N1 0 1%0$1&0M1 0 1)0 1 0!1$0 1 0M1 0 1'0 1 0 1'0L1 0 1+0 1 0 1$0N1 0 130L1 0 140,1 0=1 0 150,1!0=160+1 0 1 0;1 0 160,1!0<180*1\"0;1 0 170(1 0!1!0;190*1\"0<180(1!0 1!0;1:0!1 0 1 0\"1$0<1:0 1 0 1!0!1$0<1@0 1$0<1@0 1$0>1 0 1B0?1 0 1 0 1 0 180 1 0 1!0~71+0X1)0Z1'0[1&0_1 0}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1c1~}1}1}131&0[1(0X1,0V1,0U1-0U1.0T1-0U1.0U1,0W1*0Y1'0}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1F1~}1}1}1}1}1}1}1}1}1#1$0Y1 0!1'0Y1+0V1,0U1.0T1.0T1/0S1/0S1/0T1,0V1,0X1(0]1$0}1}1}1}1}1}1}1}1}1}1}1.1~}1}1}1}1}1}1}1}1}1}1}1}1}1D1$0\\1(0X1,0U1.0S1/0S1/0R110Q100S1/0T1.0T1-0W1*0X1 0 1'0Y1 0$1 0}1}1}1}1}1}1(1~}1}1}1}1}1}1}1}1}1}1}1}1}1}1}1U1 0^1)0X1,0U1.0T1/0S1/0R100Q110R1/0S100S1.0 1 0S1,0W1*0[1&0^1 0 1 0}1}1}111~}1}1}1}1}1}1}1}1}1}1}1}1}1G1 0]1 0 1 0 1!0[1*0W1.0S1/0S100R100Q110R100R100R1/0S1/0T1-0V1+0Z1 0 1$0}1}1}1}1}1@1~}1}1}1}1}1}1}1}1}1g1 0 1 0\\1*0W1-0U1/0R100R100R100P1 0 100P1 0 100S100R1/0S1.0T1-0W1)0[1!0 1 0 1 0}1}1}1}1}1}1}1}1|1~}1}1}1}1}1}1p1%0Z1*0V1-0U1.0S100R100R110P120Q110Q110Q100R100S1-0V1)0[1 0 1 0#1 0a1!0}1}1}1}1}1}1}1}1}1}1}1.1~}1}1}1}1}1}1q1$0[1)0X1+0U1.0T120O100Q120P120P130P110Q120Q100R100S1-0W1(0}1}1}1}1}1}1}1}1}1}1}1q1~}1}1}1}1}1}1}1V1 0b1 0!1&0Y1+0U1-0T1/0Q120P120O130O140O120P130P110Q110S1.0U1+0X1'0^1\"0}1}1}1}1}1}1}1}1}1b1~}1}1}1}1}1}1}1}1}1i1 0 1$0 1 0W1,0T1/0R110P120P130O140N140N140N130O130P110R1/0T1,0X1)0Z1%0}1}1}1}1}1}1}1}161~}1}1}1}1}1}1}1}1}1m1 0^1&0Z1*0U1.0S100R110P130O130O140O120P120P120P110R1/0T1+0X1(0 1 0Z1 0 1!0$1 0}1}1}1}1}1}1}1L1~Q1 0 1 0 1-0}1:1 0}1}1}1}1}1}1}1}1L1!0 1 0\\1*0W1-0T1/0R100R120O130O130O130O130O130P110Q100S1.0V1*0Y1 0 1#0 1 0}1}1}1}1}1}1}1P1~(0 1!0 1 0 1 0 1 0Q1?0C1<0F1;0G1:0H1;0G1;0G1<0F1@0&1'0 1 011@0%1,0/1@0&1,0.1@0%1.0-1@0%1/0+1@0&1/0)1C0'1.0'1C0)1.0%1B0-1.0#1A0.1/0!1A001/0 1@011P031O031P021P021P021Q011R001S0/1T0-1X0&1 0 1\\0\"1 0 1}0}0}0}0}0}0j0~";
char screen[H][W+1];
int (*p)() = printf;

const char *df(const char *da) {
	int x = 0, y = 0;
	
	while(*da != '~') {
		int rl = *da++ - ' ' + 1;
		char value = (*da++ == '1') ? '#' : ' ';
		
		while(rl--) {
			screen[y][x++] = value;
			if(x >= W) {
				x = 0;
				y++;
			}
		}
	}
	return ++da;
}

// Print BL + 20 - cx spaces
void ps(int cx) {
	for (int i=0; i < BL + 12 - cx; i++) {
		p(" ");
	}
	p("//     ");
}

int main() {
	const char *quargle = Q;
	for (int i = 0; i < (N%24);) {
		if (*quargle == '~') {i++;}
		quargle++;
	}
	
	memset(screen, 0, sizeof(screen));
	quargle = df(quargle);

	// First part: output the quine
	int cx = 1, cy = 0;
	int once = 0;
	z = s = S;
	for (; cdidwa = *s++;) {
		if (cx == 11 && cy == 0) {
			// At number N. Read the number at this pointer, increment it, and print it.
			while (cdidwa >= '0' && cdidwa <= '9') {
				cdidwa = *s++; cx++;
			}
			p("%d\n", N+1);
		}
		else if (cdidwa == 64 && once == 0) {
			once = 1;
			for (; cdidwa = *z++;) {
				if (cdidwa == '\"' || cdidwa == '\\' || cdidwa == '\n') {
					p("\\"); cx++;
				}
				putchar(cdidwa == '\n' ? 'n' : cdidwa); cx++;
				if (cx >= BL) {
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
			if (cdidwa == '\n') {
				if (cy < H) {
					ps(cx);
					p("%s", screen[cy++]);
				}
				cx = -1;
			}
			putchar(cdidwa);
			cx++;
		}
	}
	putchar('\n');

	// Move cursor to home position
	// printf("\x1b[H");
	// Sleep for 0.1 second
	usleep(100000);
	return 0;
}