// Online C compiler to run C program online
#include <stdio.h>
void ceaserEncrypt(char text[], int shift)
{
    int i;
    char ch;
   for(i = 0; text[i] != '\0'; ++i){
		ch = text[i];

		if(ch >= 'a' && ch <= 'z'){
			ch = ch + shift;

			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}

			text[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + shift;

			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}

			text[i] = ch;
		}
	}

	printf("Encrypted message: %s", text);
}
void ceaserDecrypt(char text[], int shift){
    int i;
    char ch;
    for(i = 0; text[i] != '\0'; ++i){
		ch = text[i];

		if(ch >= 'a' && ch <= 'z'){
			ch = ch - shift;

			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}

			text[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - shift;

			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}

			text[i] = ch;
		}
	}

	printf("Decrypted message: %s", text);

}

int main()
{
    char ciphertext[100];
    char enctext[100];
	int shift1,shift2;

	printf("Enter a message to encrypt: ");
	scanf("%s", ciphertext);
	printf("Enter key: ");
	scanf("%d", &shift1);
	ceaserEncrypt(ciphertext,shift1);
	printf("\n");
	printf("Enter a message to decrypt: ");
	scanf("%s", enctext);
	printf("Enter key: ");
	scanf("%d", &shift2);
	ceaserDecrypt(enctext,shift2);


}
