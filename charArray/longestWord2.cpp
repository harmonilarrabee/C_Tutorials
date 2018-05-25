#include <stdio.h>
#define MAXWORD 20      /* maximum input word length */

int max;                /* maximum length seen so far */
char word[MAXWORD];     /* current input word */
char longest[MAXWORD];  /* longest word saved here */

int getword(void);
void copy(void);

/* (specialized version) prints longest word in input */
main()
{
	int len;	/*current word length */
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = getword()) > 0) {
		if (len > max) {
			max = len;
			copy();
		}
	}
	if (max > 0)	/* there was a word */
		printf("%s", longest);
	return 0;
}

/* getword (specialized version): reads a word into s, returns length */
int getword(void)
{
	int c, i;
	extern char word[];

	for (i=0; i<MAXWORD-1 && (c=getchar())!=' ' && c!='\n'; ++i)
		word[i] = c;
	word[i] = '\0';
	return i;
}

/* copy (specialized version): copies 'from' into 'to'; assumes to is big enough */
void copy(void)
{
	int i;

	i = 0;
	extern char word[], longest[];

	i = 0;
	while ((longest[i] = word[i]) != '\0')
		++i;
}