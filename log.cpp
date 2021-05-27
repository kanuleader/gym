#ifdef DEBUG
#define PINT()    printf("pin: [%s, %d]: %s: %d￦n", __FUNCTION__, __LINE__, #a, (a))

#else
#define PINT()

#endif
