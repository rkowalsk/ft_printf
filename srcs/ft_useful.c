/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useful.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkowalsk <rkowalsk@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 15:52:16 by rkowalsk          #+#    #+#             */
/*   Updated: 2020/08/26 15:52:27 by rkowalsk         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_free_all(const int number, ...)
{
	va_list	params;
	int		i;
	char	*str;

	i = 0;
	va_start(params, number);
	while (i < number)
	{
		str = va_arg(params, char*);
		if (str)
			free(str);
		i++;
	}
	va_end(params);
}
