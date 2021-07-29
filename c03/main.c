#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int                ft_strcmp(char *s1, char *s2);
int                ft_strncmp(char *s1, char *s2, unsigned int n);
char            *ft_strcat(char *dest, char *src);
char            *ft_strncat(char *dest, char *src, unsigned int nb);
char            *ft_strstr(char *str, char *to_find);
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);


int main (void) {

// ex 00
    // printf("------- ex 00 \n");
    // char s100[15] = {""};
    // char s200[15] = {"AAA"};

    // int c = ft_strcmp(s100, s200);
    // printf("ft_strcmp retornou %d\n", c);

    // c = strcmp(s100, s200);
    // printf("strcmp retornou %d\n", c);

// ex 01
    // printf("------- ex 01 \n");
    // char s101[15] = { "aa" };
    // char s201[15] = { "aa  " };

    // int n = 1;
    // int c = ft_strncmp(s101, s201, n);
    // printf("ft_strcmp retornou %d\n", c);
    // c = strncmp(s101, s201, n);
    // printf("strcmp retornou %d\n", c);

// // ex 02
    // printf("------- ex 02 ");
    // char src[50], dest[50];
    // strcpy(src,  "Origem");
    // strcpy(dest, "Destino");
    // ft_strcat(dest, src);
    // printf("Resultado do destino : |%s|\n", dest);

// ex03
    printf("------- ex 03\n");
    char src[50], dest[50];

    strcpy(src,  "Origem");
    strcpy(dest, "Destino");
    ft_strncat(dest, src, 0);
    printf("Resultado do ft_strncat : |%s|\n", dest);
    strcpy(dest, "Destino");
    strncat(dest, src, 4);
    printf("Resultado do strncat : |%s|\n", dest);

	return (0);
}