#include <stdio.h>

int main()
{
    char fileName[20] = {0}; //initialise
    int currentChar;
    int freequncy[26] = {0};
    FILE *fp;
    printf("Enter a filename you want to test:");
    scanf("%s", fileName);
    fp = fopen(fileName, "r");

    if (fp!=NULL)
    {
        while (!feof(fp))
        {
            currentChar = fgetc(fp);
            if (currentChar>= 'a' && currentChar <= 'z')
                freequncy[currentChar - 'a']++;
        }
    }
    printf("Total Appearances of Lowercase Letters in file '%s' : \n", fileName);
    int i;
    for (i = 0; i < 26; i++)
    {
        printf("Letter '%c' appears '%d' times\n",i + 'a', freequncy[i]);
    }
    return 0;
}