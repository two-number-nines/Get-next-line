/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vmulder <vmulder@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 10:08:35 by vmulder        #+#    #+#                */
/*   Updated: 2019/02/20 11:51:35 by vmulder       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccpy(char *dst, const char *src, int c)
{
	int i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
