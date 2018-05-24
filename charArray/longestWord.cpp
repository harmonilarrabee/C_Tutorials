#include <stdio.h>
#define MAXWORD 20 /* maximum input word length */

int getword(char word[], int maxline);
void copy(char to[], char from[]);

/* prints longest word in input */
main()
{
	int len;                /*current word length */
	int max;                /* maximum length seen so far */
	char word[MAXWORD];     /* current input word */
	char longest[MAXWORD];  /* longest word saved here */

	max = 0;
	while ((len = getword(word, MAXWORD)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, word);
		}
	}
	if (max > 0)	/* there was a word */
		printf("%s", longest);
	return 0;
}

/* getword: reads a word into s, returns length */
int getword(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=' ' && c!='\n'; ++i)
		s[i] = c;
	s[i] = '\0';
	return i;
}

/* copy: copies 'from' into 'to'; assumes to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}