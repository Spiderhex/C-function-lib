// dans les .h on met: define global, prototype macro, et les .h dont on as besoin, dans le c one met
//#include "nomdufichier.h" si path relatif
#ifndef LIB_H
#define LIB_H
#include <stdio.h>
#include <stdlib.h>

void strrev(char *s);
char *make_editable_string(char *s);
int s_to_num(char *s);
int len(char *azerty);
void show_tab(int *tab, int size);
void sort_tab(int *tab, int size);
char *num_to_s(int num);
char *prep_str(int size);
void putchara(char c);
void putstr(char *s);
void putnbr(int n);
void oklm(); //Y OH Y
void ayy(); //dank meme generator

#endif