#include "holberton.h"

int main(void)
{
	int n = 100;
	int len;
	char c = 'H', *s = "Prueba";
	/*Sending numbers in variables*/
	len = _printf("%d", n);
        printf("\n%d\n",len);
        len = printf("%d", n);
        printf("\n%d\n",len);
        len = _printf("%i", n);
        printf("\n%d\n",len);
        len = printf("%i", n);
        printf("\n%d\n",len);
	/*Sending a number*/
	len = _printf("%d", 0);
        printf("\n%d\n",len);
        len = printf("%d", 0);
        printf("\n%d\n",len);
        len = _printf("%i", 0);
        printf("\n%d\n",len);
        len = printf("%i", 0);
        printf("\n%d\n",len);
	/*Tryin with string asigned*/
	len = _printf("%d", s);
        printf("\n%d\n",len);
        len = printf("%d", s);
        printf("\n%d\n",len);
        len = _printf("%i", s);
        printf("\n%d\n",len);
        len = printf("%i", s);
        printf("\n%d\n",len);
	/*Trying sending a string*/
	len = _printf("%d", "hola");
        printf("\n%d\n",len);
        len = printf("%d", "hola");
        printf("\n%d\n",len);
        len = _printf("%i", "hola");
        printf("\n%d\n",len);
        len = printf("%i", "hola");
        printf("\n%d\n",len);
	/*Trying with character asigned*/
	len = _printf("%d", c);
        printf("\n%d\n",len);
        len = printf("%d", c);
        printf("\n%d\n",len);
        len = _printf("%i", c);
        printf("\n%d\n",len);
        len = printf("%i", c);
        printf("\n%d\n",len);
	/*Trying sending a character*/
	len = _printf("%d", 'h');
	printf("\n%d\n",len);
	len = printf("%d", 'h');
        printf("\n%d\n",len);
	len = _printf("%i", 'h');
        printf("\n%d\n",len);
        len = printf("%i", 'h');
        printf("\n%d\n",len);
    /*char c = 'H', a = 0;
    char *name = "Eli", *s = "";
	char *p = NULL;
    int len29,len30, len31,len32,len27, len28, len25, len26, len23, len24, len, len2, len3, len4, len5, len6, len7, len8, len9, len10, len11, len12, len13, len14, len15, len16, len17, len18, len19, len20, len21, len22;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%i, %i]\n", len, len2);
    _printf("Hello, world!\n");
    printf("Hello, world!\n");
    _printf("Hello, world%%!\n");
    printf("Hello, world%%!\n");
    _printf("Hello, %c!\n", c);
    printf("Hello, %c!\n", c);
    len23 = _printf("Hello, %s!\n", name);
    len24 = printf("Hello, %s!\n", name);
    printf("Length:our,real[%i, %i]\n", len23, len24);
    len3 = _printf("%s", p);
    len4 = printf("%s", p);
    printf("\nLength:our,real[%i, %i]\n", len3, len4);
    len5 = _printf("%%%%%buuu\n");
    len6 = printf("%%%%%buuu\n"); 
    printf("Length:our,real[%i, %i]\n", len5, len6);
    len7 = _printf("");
    len8 = printf("");
    printf("Length:our,real[%i, %i]\n", len7, len8);
    len9 = _printf("%c", '\0');
    len10 = printf("%c", '\0');
    printf("Length:our,real[%i, %i]\n", len9, len10);
    _printf("Hello,%%%%%%%world!\n");
     printf("Hello,%%%%%%%world!\n");
    len11 = _printf("%c", a);
    len12 = printf("%c", a);
    printf("Length:our,real[%i, %i]\n", len11, len12);
    _printf("Hello,%%%%%%%sorld!\n", name);
     printf("Hello,%%%%%%%sorld!\n", name);
    len15 = _printf("Hello,%%%%%%%sorld!%c\n", name, c);
    len16 =  printf("Hello,%%%%%%%sorld!%c\n", name, c);
    printf("Length:our,real[%i, %i]\n", len15, len16);
    len13 = _printf("%");
    len14 =  printf("%");
    printf("Length:our,real[%i, %i]\n", len13, len14);
    len17 = _printf("%%%");
    len18 =  printf("%%%");
    printf("Length:our,real[%i, %i]\n", len17, len18);
    _printf("%r");
    printf("\n");
    len25 = _printf(NULL);
    len26 =  printf(NULL);
    printf("Length:our,real[%i, %i]\n", len25, len26);
     printf("%r");
    printf("\n");
    len19 = _printf("%%");
    len20 =  printf("%%");
    printf("Length:our,real[%i, %i]\n", len19, len20);
    len21 = _printf("%s", s);
    len22 =  printf("%s", s);
    printf("Length:our,real[%i, %i]\n", len21, len22);
    _printf("%&hola");
    printf("%&hola");
printf("\n");
    len27 = _printf("%c", "hola");
    printf("\n");
    len28 = printf("%c", "hola");
    printf("\n");
    printf("Length:our,real[%i, %i]\n", len27, len28);
len30 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
len32 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    len29 = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("Length:our,real[%i, %i]\n", len29, len30);
len31 = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
printf("Length:our,real[%i, %i]\n", len31, len32);*/
return (0);
}
