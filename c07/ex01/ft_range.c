/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allevass <allevass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:31:03 by allevass          #+#    #+#             */
/*   Updated: 2023/08/28 18:57:35 by allevass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range; // stock la diff entre max et min //
	int	index; // parcours le tableau //
	int	*buffer; // pointeur vers le tableau //

	if (min >= max) 
		return (0); 
	range = max - min; // Calcule la plage des nombres //
	buffer = malloc(range * sizeof(int)); // alloue la memoire pour le tableau, egal a 'range' et multiplie par la taille de l'int //
	if (!buffer) // verifie si l'allocation de memoire a reussie //
		return (0); // si buffer est nul, la memoire n'a pas ete allouee et donc renvoie null //
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index; // on remplie avec des valeurs en ajoutant 'min' a l'index actuel, ca crée une séquence de nombres allant de 'min' à 'max' '-1'//
		index++; // passe a la prochaine position du tableau // 
	}
	return (buffer); // renvoie au debut du tableau //
}


/*int        main(void)
{
    int    min;
    int    max;
    int    *tab;
    int    i = 0;
    int    size;

    min = 5;
    max = 10;
    size = max - min;
    tab = ft_range(min, max);
    while(i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }

} */
