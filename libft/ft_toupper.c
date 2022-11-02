/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:41:14 by mromao-d          #+#    #+#             */
/*   Updated: 2022/11/02 12:42:19 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	c = (unsigned char) c;
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/* 
int main(void)
{
    int i;

    i = 0;
    while (i++ <= 200)
        printf("the toupper of the number %d\t is %d\t, %d\n", i,\
       	toupper(i), ft_toupper(i));
    return (0);
} */
