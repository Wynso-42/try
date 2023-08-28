/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allevass <allevass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:31:16 by allevass          #+#    #+#             */
/*   Updated: 2023/08/28 18:57:34 by allevass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound; // stock la taille du tableau //
	int	index; // parcours le tableau //
	int	*buffer; // alloue la memoire au tableau //

	if (min >= max) // verifie si 'min' est sup ou egal a 'max', si oui, la fonction met le pointeur 'range' à NULL et renvoie 0.
	{
		*range = 0;
		return (0);
	}
	bound = max - min; // calcul de la taille du tableau en soustrayant min de max, ca donne la quantite d'elements dans la sequence //
	buffer = malloc(bound * sizeof(int)); // alloue la memoire au tableau, egal a 'bound' multiplie par la taille de l'int//
	if (!buffer) // verifie si l'allocation de memoire a reussie //
	{
		*range = 0;
		return (-1); // si buffer est null, la memoire n'a pas ete allouee, met le pointeur 'range' a NULL et donc renvoie '-1' pour indiquer une erreur //
	}
	*range = buffer;
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}

/*
int    main(void)
{
    int    min;
    int    max;
    int    *tab;
    int    size;
    int    i = 0;

    min = 5;
    max = 10;
    size = ft_ultimate_range(&tab, min, max);
    while(i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }

}
*/
