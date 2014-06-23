#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DEF_WD_NUM 2
#define DEF_BUF (DEF_WD_NUM * sizeof(char*))
#define IS_DELIM(x) ((x) == ' ' || (x) == '\t' || (x) == '\n')

static char *creat_word(char *s, int num)
{
	char *word = malloc((num + 1) * sizeof(char));
	strncpy(word, s, num);
	word[num] = '\0';
	return word;
}

char **div_str(char *s)
{
	char **divided_word;
	char *cp, *start;
	int word_length;
	int buf_num;
	int word_buf_num;
	int word_num;

	divided_word = malloc(DEF_BUF);
	buf_num = DEF_BUF;
	word_buf_num = DEF_WD_NUM;
	word_num = 0;
	cp = s;

	while (*cp) {
		
		while(IS_DELIM(*cp)) {
				cp++;
		} 
		
		if ('\0' == *cp) {
			break; 
		}
		
		if ((word_num + 1) == word_buf_num) {
			buf_num += DEF_BUF;
			word_buf_num += DEF_WD_NUM;
			divided_word = realloc(divided_word, buf_num);
		}
		
		start = cp;
		word_length = 1;
		while (*++cp != '\0' && !IS_DELIM(*cp)) {
			word_length++;
		}	
		divided_word[word_num++] = creat_word(start, word_length);
	}

		divided_word[word_num] = NULL;
		return divided_word;
}

void free_list(char **list)
{
	char **cp = list;

	while(*cp)
		free(*cp++);
	free(list);
}
