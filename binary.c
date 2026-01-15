#include <stdio.h>
#include <stdlib.h>

void dec_bin(int decimal);

int main(void)
{
        char askusr[100];
        printf("Text to Binary converter\n");
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
        int i = 0;

        if (decimal == 0)
        {
                printf("0-Binary\n");
                exit(1);
        }

        while (decimal > 0 && i < 8)
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
