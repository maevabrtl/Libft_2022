/*
Function name 					ft_strmapi

Prototype 						char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

Fichiers de rendu 				-

Paramètres 						s: La chaîne de caractères sur laquelle itérer.
								f: La fonction à appliquer à chaque caractère.

Valeur de retour				La chaîne de caractères résultant des applications
								successives de ’f’.
								Retourne NULL si l’allocation échoue.

Fonctions externes autorisées	malloc

Description						Applique la fonction ’f’ à chaque caractère de la
								chaîne de caractères passée en argument pour créer
								une nouvelle chaîne de caractères (avec malloc(3))
								résultant des applications successives de ’f’.
*/

#include "includes/libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

}
