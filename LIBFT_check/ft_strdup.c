/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-cleb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:23:56 by ode-cleb          #+#    #+#             */
/*   Updated: 2022/11/24 15:30:04 by ode-cleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dest;

	dest = NULL;
	len = ft_strlen(s);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest != NULL)
		ft_strlcpy(dest, s, len + 1);
	return (dest);
}
