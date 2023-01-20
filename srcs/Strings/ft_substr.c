/*
Function name						ft_substr

Prototype 							char *ft_substr(char const *s, unsigned int start, size_t len);

Fichiers de rendu 					-

Paramètres 							s: La chaîne de laquelle extraire la nouvelle chaîne.
									start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
									len: La taille maximale de la nouvelle chaîne.

Valeur de retour 					La nouvelle chaîne de caractères.
									NULL si l’allocation échoue.

Fonctions externes autorisées		malloc

Description 						Alloue (avec malloc(3)) et retourne une chaîne de caractères issue de la chaîne ’s’.
									Cette nouvelle chaîne commence à l’index ’start’ et a pour taille maximale ’len’.
*/

#include "includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	newstr = malloc(sizeof(char) * len);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (s && s[start] && i < len)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	return (newstr);
}

// est ce que len - (strlen(s) - start - 1) + 1 = len de newstr ?

// trucs a refaire cf github      https://github.com/aabduvak/Libft/blob/main/ft_substr.c
