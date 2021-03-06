/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hinterfa <hinterfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:20:34 by kcharla           #+#    #+#             */
/*   Updated: 2020/11/30 23:20:53 by hinterfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	res = ft_strcpy(res, s1);
	res = ft_strcat(res, s2);
	return (res);
}

char	*ft_strjoin_3(const char *s1, const char *s2, const char *s3)
{
	char	*res;

	if (s1 == NULL || s2 == NULL || s3 == NULL)
		return (NULL);
	res = (char*)malloc(sizeof(char) * (ft_strlen(s1)
	+ ft_strlen(s2) + ft_strlen(s3) + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	res = ft_strcpy(res, s1);
	res = ft_strcat(res, s2);
	res = ft_strcat(res, s3);
	return (res);
}
