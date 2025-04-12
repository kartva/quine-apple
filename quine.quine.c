/*#
#
#
#
*/#include <stdio.h>
char*z,*s,c,*S="/*#\n#\n#\n#\n*/#include <stdio.h>\nchar*z,*s,c,*S=\"@\",*Q=\"\";int x,y;void p(char c) {printf(\"%c\", c);}int main() {z = s = S;x = y = 0;for (;c=*s++;) {if (c == 64) {for (;c=*z++;) {if (c == '\"' || c == '\\\\' || c == '\\n') {p('\\\\');}if (c == '\\n') {p('n');} else {p(c);}}} else {p(c);}}printf(\"\\n\");}",*Q="";int x,y;void p(char c) {printf("%c", c);}int main() {z = s = S;x = y = 0;for (;c=*s++;) {if (c == 64) {for (;c=*z++;) {if (c == '"' || c == '\\' || c == '\n') {p('\\');}if (c == '\n') {p('n');} else {p(c);}}} else {p(c);}}printf("\n");}