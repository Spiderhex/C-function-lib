#include "lib.h"

int len(char *azerty) //calcule la longeur d'une chaine de caractère
{
	int i=0;
	while (*azerty++)
		i++;
	return i;
}

int s_to_num(char *s) //transfère les nombre dans les char/array en int
{
	int res=0, sign=1;
	if (*s == '-')
	{
		sign=-1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	for (;*s;s++)
	{
		if (*s-'0'<0||*s-'0'>9)
		{
			break;
		}
		res=res*10+(*s-'0');
	}
	return sign*res;
}

void sort_tab(int *tab, int size) //range un tableau par ordre croissant
{
	int i;
	int d;
	int stock;
	for(i=0;i<size;i++)
	{
	
		for(d=i+1;d<size;d++)
		{
			if (tab[i]>tab[d])
			{
				stock=tab[i];
				tab[i]=tab[d];
				tab[d]=stock;
			}
			
		}
	}
}

void show_tab(int *tab, int size) //affiche un tableau
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", tab[i]);
	}
	printf("\n");
}

char *make_editable_string(char *s) //prend un string existant dans la mémoire et le rend editable
{
	int size;
	int i;
	char *string;
	size=len(s);
	string=(char *)malloc((size+1) * sizeof(char));
	for (i=0;i<=size;i++)
	{
		string[i]=*(s+i);
	}
	return string;
}

void strrev(char *s) //inverse les char d'un mot
{
	char stock;
	int size;
	int i;
	size=len(s)-1;
	for (i=0;i<=(size/2);i++)
	{
		stock=s[size-i];
		s[size-i]=s[i];
		s[i]=stock;
	}
}

char *num_to_s(int num) //prend un nombre et le transforme en string
{
	int original_num=num;
	char *s;
	int i;
	int count;
	int sign=0;
	for(count=0;num!=0;count++)
	{
		num=num/10;
	}
	num=original_num;
	if (num<0)
	{
		sign=1;
		count++;
		num=num*-1;
	}
	//la count = le nombre de "caractère" dans notre nombre
	s=prep_str(count);
	for(i=0;i<count;i++)
	{
		s[count-i-1]=num%10+'0';
		num=num/10;
	}
	if (sign)
	{
		s[0]='-';
	}
	return s;
}

char *prep_str(int size) //crée un string vide éditable de la tailel désirer
{
	char *s;
	s = (char*)malloc(size+1);
	s[size] = 0;
	return s;
}

void putchara(char c) //affiche un caractère
{
    write(1, &c, 1);
}

void putnbr(int n) //affiche un nombre/contenu d'une variable numérique
{
	putstr(num_to_s(n));
}

void oklm() //retour a la ligne en mode oklm la flemme
{
	putstr("\n");
}

void putstr(char *s) //affiche une chaine de caractère
{
	for(;*s;s++)
	{
		putchara(*s);
	}
}
void ayy() //le dank meme generator 2k666
{
	putstr("ayy");
	oklm();
	putstr("lmao");
}