#include <stdio.h>
#include <fstream>

int main() {
    

	unsigned int number_of_lines = 0;
    FILE *infile = fopen("./data.txt", "r");
    int ch;

    while (EOF != (ch=getc(infile)))
        if ('\n' == ch)
            ++number_of_lines;
    printf("%u\n", number_of_lines);
    return 0;
}
