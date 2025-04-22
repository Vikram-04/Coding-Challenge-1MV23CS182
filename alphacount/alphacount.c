#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
const int length = 50;
bool isVowel(char c);
int main()
{
    // Take string input 
    char *s = malloc(length * sizeof(char));
    if (s == NULL)
    {
        printf("Memory error\n");
        return 1;
    }
    printf("Enter the string: ");
    fgets(s, length, stdin);
    // Count number of vowels and consonants in string 
    int vowels = 0;
    int consos = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]))
        {
            if (isVowel(tolower(s[i])))
                vowels++;
            else
                consos++;
        }
    }

    // Print them
    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d\n",consos);
    free(s);
    return 0;
}
bool isVowel(char c)
{
    char v[] = {'a','e','i','o','u'};
    for (int i = 0; i < 4; i++)
    {
        if (c == v[i])
            return true;
    }
    return false;
}