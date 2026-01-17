#include <stdio.h>

void dec_bin(int decimal);

int main(void)
{
        char askusr[100];
        printf("Decimel to Binary converter\n");
        printf("---------------------------\n");
        printf("Enter Ascii character to convert into Decimal and Binary: ");
        scanf("%99s",askusr);

        for (int i = 0; askusr[i] != '\0';i++)
        {
                int value = (int)askusr[i];
                printf("%c -> %d -> ",askusr[i],value);
                dec_bin(value);
        }
}

void dec_bin(int decimal)
{
        int bits[8];

        for (int i = 7; i >= 0; i--)
        {
                bits[i] = decimal % 2;
                decimal /= 2;
        }

        printf("Binary: ");
        for (int j = 0; j < 8; j++)
        {
                printf("%i",bits[j]);
        }
        printf("\n");
}
