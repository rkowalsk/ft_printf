/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkowalsk <rkowalsk@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:21:17 by rkowalsk          #+#    #+#             */
/*   Updated: 2020/02/17 15:48:52 by rkowalsk         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char *get_precision(char *str, t_flag flags)
{
	int		i;
	char	*prec;

    if (flags.precision == true)
    {
		if (!(prec = malloc(sizeof(char) * (ft_strlen(str) + 1))))
			return (NULL);
        i = 0;
        while (str[i] && i < flags.nb_precisions)
		{
			prec[i] = str[i];
			i++;
		}
		prec[i] = '\0';
		return (prec);
    }
	return (ft_strdup(str));
}

static char	*get_width(char *str, t_flag flags)
{
	int		i;
	int		j;
	char	*width;

	i = ft_strlen(str);
	if (flags.nb_width <= i)
		i = 0;
	else
		i = flags.nb_width - i;
	if (!(width = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	width[i] = '\0';
	j = 0;
	while (j < i)
		width[j++] = ' ';
	return (width);
}

int			ft_print_s(va_list params, t_flag flags)
{
	char	*str;
	char	*width;
	int		size;

	str = va_arg(params, char*);
	if (!str)
		str = "(null)";
	if (!(str = get_precision(str, flags)))
		return (-1);
	if (!(width = get_width(str, flags)))
		return (-1);
	if (!flags.minus)
		ft_putstr_fd(width, 1);
	ft_putstr_fd(str, 1);
	if (flags.minus)
		ft_putstr_fd(width, 1);
	size = ft_strlen(str) + ft_strlen(width);
	free(width);
	free(str);
	return (size);
}