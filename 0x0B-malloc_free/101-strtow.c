#include "main.h"
#include <stdlib.h>
#include <string.h>

int is_separator(char c);
int count_words(char *str);
char **free_words(char **words, int word_count);

/**
* strtow - Splits a string into words.
* @str: Input string.
* Return: Pointer to an array of strings (words), or NULL if it fails.
*/
char **strtow(char *str)
{
char **words;
int word_count = 0;
int word_index = 0;
int word_start = 0;
int i;

if (str == NULL || *str == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
if (is_separator(str[i]))
{
if (!is_separator(str[i - 1]))
{
int word_length = i - word_start;
words[word_index] = malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL)
return (free_words(words, word_index));

strncpy(words[word_index], str + word_start, word_length);
words[word_index][word_length] = '\0';
word_index++;
}
word_start = i + 1;
}
}

int last_word_length = i - word_start;
words[word_index] = malloc((last_word_length + 1) * sizeof(char));
if (words[word_index] == NULL)
return (free_words(words, word_index));

strncpy(words[word_index], str + word_start, last_word_length);
words[word_index][last_word_length] = '\0';
word_index++;

words[word_index] = NULL;

return (words);
}

/**
* is_separator - Checks if a character is a separator (space).
* @c: Character to check.
* Return: 1 if it is a separator, 0 otherwise.
*/
int is_separator(char c)
{
return (c == ' ');
}

/**
* count_words - Counts the number of words in a string.
* @str: Input string.
* Return: Number of words.
*/
int count_words(char *str)
{
int count = 0;
int i;

if (!is_separator(str[0]))
count++;

for (i = 1; str[i] != '\0'; i++)
{
if (is_separator(str[i - 1]) && !is_separator(str[i]))
count++;
}

return (count);
}

/**
* free_words - Frees the memory allocated for an array of words.
* @words: Array of words.
* @word_count: Number of words in the array.
* Return: NULL.
*/
char **free_words(char **words, int word_count)
{
int i;

for (i = 0; i < word_count; i++)
free(words[i]);

free(words);

return (NULL);
}
