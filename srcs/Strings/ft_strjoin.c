/*
Function name						ft_strjoin

Prototype 							char *ft_strjoin(char const *s1, char const *s2);

Fichiers de rendu 					-

Paramètres							s1: La chaîne de caractères préfixe.
									s2: La chaîne de caractères suffixe.

Valeur de retour 					La nouvelle chaîne de caractères.
									NULL si l’allocation échoue.

Fonctions externes autorisées		malloc

Description							Alloue (avec malloc(3)) et retourne une nouvelle
									chaîne, résultat de la concaténation de s1 et s2.
*/

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		newstr[j++] = s1[i++];
	i = 0;
	while (s2[i])
		newstr[j++] = s2[i++];
	newstr[i] = '\0';
	return (newstr);
}
