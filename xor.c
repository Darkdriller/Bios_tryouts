#include <stdio.h>
#include <string.h>
void encryptDecrypt(char text[], char xorKey)
{
    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        text[i] = text[i] ^ xorKey;
        printf("%c",text[i]);
    }
}

int main()
{
    int length;
    printf("Enter Length of string to be decrypted or in: ");
    scanf("%d", &length);
    char Str[length];
    printf("Enter string to be decrypted or incrypted: ");
    scanf("%s", Str);
    char c;
    printf("Enter key: ");
    scanf(" %c", &c);
    printf("Encrypted or Decrypted String: ");
    encryptDecrypt(Str, c);
    printf("\n");
    return 0;
}
