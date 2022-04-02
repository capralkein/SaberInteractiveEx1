#include <iostream>

void RemoveDups(char* pStr);

int main()
{
    char Str[] = "AAA BBB AAA";

    printf("%s\n", Str);

    RemoveDups(Str);

    printf("%s\n", Str);
}

void RemoveDups(char* pStr)
{
    if (pStr == nullptr || *pStr == '\0') return;

    int buff = 0;
    for (int i = 1; pStr[i] != '\0'; i++)
    {
        if (pStr[i] != pStr[buff])
        {
            pStr[++buff] = pStr[i];
        }
    }
    pStr[buff + 1] = '\0';
}