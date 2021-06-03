#include <stdio.h>

//#define DEBUG

#ifdef DEBUG
#define PINT(a)     printf("pin: [%s, %d]: %s: %d\n", __FUNCTION__, __LINE__, #a, (a))
#define PINS(a)     printf("pin: [%s, %d]: %s: %s\n", __FUNCTION__, __LINE__, #a, (a))
#else
#define PINT(a)
#define PINS(a)
#endif

int main() {

    PINT(100);
    PINS("Hellow world");

    return 1;
}