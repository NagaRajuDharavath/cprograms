#include <stdio.h>

int main() {
    char c;
    int i;
    float f;
    double d;
    short s;
    long l;
    long long ll;
    unsigned int ui;
    unsigned char uc;
    unsigned short us;
    unsigned long ul;
    unsigned long long ull;
    printf("size of char:%zu\n",sizeof(c));
    printf("size of int %zu\n",sizeof(i));
    printf("size of float %zu\n",sizeof(f));
    printf("size of double %zu\n",sizeof(d));
    printf("size of short %zu\n",sizeof(s));
    printf("size of long %zu\n",sizeof(l));
    printf("size of long long %zu\n",sizeof(ll));
    printf("size of unsigned int %zu\n",sizeof(ui));
    printf("size of unsigned char %zu\n",sizeof(uc));
    printf("size of unsigned long %zu\n",sizeof(ul));
    printf("size of unsigned long long %zu\n",sizeof(ull));
}
