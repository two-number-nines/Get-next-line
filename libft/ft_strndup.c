/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strndup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vmulder <vmulder@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 11:01:14 by vmulder        #+#    #+#                */
/*   Updated: 2019/02/25 11:04:34 by vmulder       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, int b)
{
	const char	*psource;
	char		*pdes;
	char		*res;

	psource = s1;
	pdes = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	res = pdes;
	if (pdes == NULL)
		return (NULL);
	while (*psource != '\0' && *psource != b)
	{
		*pdes = *psource;
		pdes++;
		psource++;
	}
	*pdes = '\0';
	return (res);
}
