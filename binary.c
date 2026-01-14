#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

void dec_bin(int decimal);

int main(void)
{
        printf("Decimel to Binary converter\n");
        printf("---------------------------\n");
        string askusr = get_string("Enter Ascii character to convert into Decimal and Binary: ");

        for (int k = 0; askusr[k] != '\0';k++)
        {
                int value = (int)askusr[k];
                printf("%c -> %d -> ",askusr[k],value);
                dec_bin(value);
        }
}

void dec_bin(int decimal)
{
        int bits[64];
        int i = 0;

        if (decimal == 0)
        {
                printf("0-Binary\n");
                exit(1);
        }

        while (decimal > 0 && i < 64)
        {
                bits[i] = decimal % 2;
                decimal = decimal / 2;
                i++;
        }

        printf("Binary: ");
        for (int j = i - 1; j >= 0; j--)
        {
                printf("%i",bits[j]);
        }
        printf("\n");
}
