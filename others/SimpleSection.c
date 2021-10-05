/*************************************************************************
 > File Name: SimpleSection.c
 > Created Time: 四  6/10 09:48:54 2021
 ************************************************************************/

#include <stdio.h>

int printf(const char *format, ...);

int global_init_var = 84;
int global_uinit_var;

void func1(int i) {
    printf("%d\n", i);
}

int main(void) {
    static int static_var = 85;
    static int static_var2;
    int a = 1;
    int b;

    func1(static_var + static_var2 + a + b);

    return a;
}
// gcc -c SimpleSection.c -> SimpleSection.o
