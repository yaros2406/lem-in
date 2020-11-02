/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshaquan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:22:04 by bshaquan          #+#    #+#             */
/*   Updated: 2020/02/18 19:22:56 by bshaquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

void	ft_print_string(t_sp *sp)
{
	char *str;

	str = va_arg(sp->ap, char *);
	str = (str == NULL) ? "(null)" : str;
	sp->output_size = (sp->precision != 0) ? ft_strlen(str) : 0;
	sp->output_size = (sp->precision > 0 && sp->precision < sp->output_size)
		? sp->precision : sp->output_size;
	sp->zeros = (!sp->left_align && sp->zero) ? sp->min_width
		- sp->output_size : 0;
	sp->right_spaces = (sp->left_align) ? sp->min_width - sp->zeros
		- sp->output_size : 0;
	sp->left_spaces = (!sp->left_align) ? sp->min_width - sp->zeros
		- sp->output_size : 0;
	ft_print_left_spaces(sp);
	ft_print_zeros(sp);
	ft_buffer(sp, str, sp->output_size);
	ft_print_right_spaces(sp);
}
