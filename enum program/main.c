#include <stdio.h>

enum designFlags {
	BOLD = 1,
	ITALICS = 2,
	UNDERLINE = 4
}design;

int main() {
	 design = BOLD | UNDERLINE; 

        //    00000001
        //  | 00000100
        //  ___________
        //    00000101

	printf("%d", design);

	return 0;
}