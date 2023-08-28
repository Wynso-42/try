/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allevass <allevass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:30:48 by allevass          #+#    #+#             */
/*   Updated: 2023/08/28 20:11:38 by allevass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_str_length(char *str)
{
    int index; // Utilisé pour parcourir le tableau

    index = 0; // Initialisation à 0
    while (str[index]) // Tant que le caractère actuel n'est pas '\0'
        index++; // Augmente l'indice pour passer au caractère suivant
    return (index); // Renvoie la longueur totale de la chaîne
}

char *ft_strdup(char *src)
{
    int index;
    char *dest;
    char *d;

    index = 0;
    d = ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1))); // Alloue de la mémoire pour la nouvelle chaîne
    if (!d) // Vérifie si l'allocation a réussi
    {
        return (0); // Si non, renvoie 0 pour indiquer une erreur
    }
    while (src[index]) // Tant que le caractère actuel de la source n'est pas '\0'
    {
        dest[index] = src[index]; // Copie le caractère de la source vers la destination
        index++; // Passe au caractère suivant
    }
    dest[index] = '\0'; // Ajoute le caractère de fin de chaîne à la destination
    return (dest); // Renvoie la nouvelle chaîne dupliquée
}