#include <stdio.h>
#include <string.h>
#include <ctype.h>
void printmul(char ch, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c", ch);
    }
}
int main()
{
    char s[1000];
    int n = 1;
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        char currentChar = s[i];
        if (isdigit(currentChar))
        {
            if (isdigit(s[i - 1]) && i != 0)
            {
                n *= 10; //เอาเลขต่อด้านหลัง
                n += (currentChar - '0');
            }
            else
            {
                n = currentChar - '0'; //จำเลข
            }
        }
        else
        {
            printmul(currentChar, n);
            n = 1;
        }
    }
    return 0;
}
