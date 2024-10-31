#include <stdio.h>
#include <bsd/string.h>
#include "./libft/libft.h"
#include <time.h>

/*char function(unsigned int a , char c)
{
  if (a % 2 == 0)
    c = c + 1;
  else
    c = c - 1;
  return c;
}*/
/*void function(unsigned int a , char *c)
{
  if (a % 2 == 0)
  {
    *c = 'h';
  }
  else
  {
    *c = 'a';
  }
}*/

int	main()
{
	char	str[] = "Hola que tal";
	char	dest[15];
	int	test;
	char	c = 'a';


	//ISALPHA
	/*printf("%d", ft_isalpha(34));*/

	//ISDIGIT
	/*printf("%d", ft_isdigit('9'));*/

	//ISALNUM
	/*printf("%d", ft_isalnum('9'));*/

	//ISASCII
	/*printf("%d", ft_isascii(35));*/

	//ISPRINT
	/*printf("%d", ft_isprint(2));*/

	//STRLEN
	/*printf("%zu", ft_strlen(str));*/

	//MEMSET
	/*printf("%s", (char *)ft_memset(str, 'l', 3));*/

	//BZERO
	/*ft_bzero(str, 3);
	printf("%s", str);*/

	//MEMCPY
	/*memcpy((void*)0,(void*)0, 3);
	printf("%s", dest);*/

	//MEMMOVE
	/*ft_memmove(str+5, str, 10);
	printf("%s", str);*/

	//STRLCPY
  /*int i = strlcpy(dest, "", 15);
  write(1, dest, 15);
  //write(1, "\n", 1);*/


	//STRLCAT
	char d[40] = "siempre digo";
	int i = ft_strlcat(d, "hola que tal", 0);
  	printf("%d\n" ,i);

	//TOUPPER
	/*printf("%c", ft_toupper('a'));*/

	//TOLOWER
	/*printf("%c", ft_tolower('A'));*/

	//STRCHR
	/*printf("%s", strchr(NULL, '\0'));*/

	//STRRCHR
	/*printf("%s", ft_strrchr(str, 'l'));*/

	//STRNCMP
	/*printf("%d", ft_strncmp(str, "Hola e", 4));*/

	//MEMCHR
	/*char *s = ft_memchr(str,'o', 4);
	printf("%s", s);*/

	//MEMCMP
  /*char *s1 = "hols que tal";
	char *s2 = "hola qse tal";
	printf("%d\n", memcmp(s1, s2, 8));
	printf("%d\n", ft_memcmp(s1, s2, 8));*/
	
	//STRNSTR
	/*char *s = "hola si que tal";
  char *a = "si que";
	printf("%s", ft_strnstr(s, a, 8));*/

	//ATOI
	/*printf("%d", ft_atoi("2442334354564823"));*/

	//CALLOC
	/*int size = 0;
	int *junk = 0;

	srand(time(0) );
	for (int i = 0;i < 1000; i++)
	{
		size =rand() % 16000;
		junk = malloc(size *sizeof(int));
		for (int j= 0; j < size; j++)
			junk[j] = rand();
		free(junk);
	}

	int  *hola = ft_calloc(10, 4);

	int i = 0;
	while (i < 10)
	{
	printf("%d\n", hola[i]);
	i++;
	}
	free(hola);*/

	//STRDUP
	/*char *d = ft_strdup(str);
	printf("%s", d);*/

	//SUBSTR
  /*char s[] = "hola";
	size_t size = 20;
  char *ret = ft_substr(s, 7, 999);

	printf("%s", ret);*/


	//STRJOIN
	/*printf("%s", ft_strjoin("hola", "que tal"));*/

	//STRTRIM
	/*printf("%s", ft_strtrim("_hola_54_", "_4"));*/

	//SPLIT
	/*int a = 0;
	char **s = ft_split("hola que tal estas", ' ');
	while (s[a])
	{
		printf("%s\n", s[a]);
		free(s[a]);
		a++;
	}

	free(s[a]);
	free(s);*/

	//ITOA
	
	/*printf("%s", ft_itoa(0));*/

	//STRMAPA
	/*char *s = ft_strmapi("123456", function);
	printf("%s", s);*/

	//STRITERI
	/*char s[] = "123456";
	ft_striteri(s, function);

	printf("%s", s);*/

	//PUTCHAR_FD
	/*ft_putchar_fd('a', 1);*/

	//PUTSTR_FD
	/*ft_putstr_fd(str,1);*/

	//FT_PUTENDL_FD
	/*ft_putendl_fd(str,1);*/

	//FT_PUTNBR_FD
	/*ft_putnbr_fd(34536, 1);*/

	//BONUS
	
	
	
	
	


	
	
	


	
		
	





}
