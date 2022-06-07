/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:11:49 by tyildiri          #+#    #+#             */
/*   Updated: 2022/06/07 18:20:55 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_lib(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*dizi;
	size_t	len;

	dizi = "tarik yildirim";
	len = ft_strlen(dizi);
	printf("Len: %zu", len);
}*/
