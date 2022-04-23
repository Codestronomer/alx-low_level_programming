#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1 - first string
 * @s2 - second string
 * Return: an integer less than, equal to or greater than 0
*/

int *_strcmp(char *s1, char *s2)
{
    int s1_len = strlen(s1);

    if (s1[0] < s2[0])
    {
        return (-1);
    }
    else if (s1[0] > s2[0])
    {
        return (1);
    }
    return (0);
}

/**
 * reverse_array - Reverses the content of an array of integers
 * @a - an array of integers
 * @n - the number of elements to swap
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
    int i;
    int b[100];
    for (i = 0; i < n; i++)
    {
        b[i] = a[n - i - 1];
    }
    for (i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    return (a);
}

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s - string
 * Return: returns uppercase string
*/

char *string_toupper(char *s)
{
    int i;
    int s_len = strlen(s);

    for (i = 0; i < s_len; i++)
    {
        if (s[i] > 96 && s[i] < 123)
        {
           s[i] = *(s + i) - 32;
        }
    }
    //s[s_len] = "\n";
    return (s);
}

/**
 * cap_string - Capitalize all words in a string
 * @s: string
 * Return: string
*/

char *cap_string(char *s)
{
    int i, j;
    char sep[] = {',',';','.','!','?','"','(',')','{','}',' ','\t','\n'};
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 13; j++)
        {
            if (s[i] == sep[j])
            {
                if (s[i + 1] > 96 && s[i + 1] < 123)
                {
                    s[i + 1] = *(s + i + 1) - 32;
                }
            }
        }
    }

    return (s);
}

/**
 * leet - Encodes a string into 1337
 * @s - string to be encoded
 * Return: encoded string
*/
char *leet(char *s)
{
    int i, j;
    char lower_case[] = {'a', 'e', 'o', 't', 'l'};
    char upper_case[] = {'A', 'E', 'O', 'T', 'L'};
    int encoder[] = {4, 3, 0, 7, 1};
    int str_len = strlen(s);

    for (i = 0; i < str_len; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if ((s[i] == lower_case[j]) || (s[i] == upper_case[j]))
            {
                s[i] = '0' + encoder[j];
            }
        }
    }

    return (s);
}
