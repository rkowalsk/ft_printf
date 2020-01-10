/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rkowalsk <rkowalsk@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 17:18:17 by rkowalsk     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 15:43:09 by rkowalsk    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include "libft.h"

char			*ft_uitoa(unsigned int n);
char			*ft_uitox_lowercase(unsigned int n);
char			*ft_uitox_uppercase(unsigned int n);

typedef struct	s_param
{
	char			*str;
	void			*ptr;
	int				integer;
	unsigned int	u_integer;
}				t_param;

#endif