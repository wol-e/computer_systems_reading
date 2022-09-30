#include <stdio.h>

unsigned int a = 271;
unsigned int size_of_a = sizeof(a);


void print_bytes(void *p, size_t len)
{
    size_t i;
    printf("(");
    for (i = 0; i < len; ++i)
        printf("%02X", ((unsigned char*)p)[i]);
    printf(")");
}


void print_unsignd_int(unsigned int x)
{
    print_bytes(&x, sizeof(x));
}

void main(){
        printf("Value of a: %d\n", a);
        printf("Memory addreess of a: %p\n", &a);
        printf("Bytes occupied by a: %d\n", size_of_a);
        printf("Byte representation of a: ");
        print_unsignd_int(a);
        printf("\n\n");
}

