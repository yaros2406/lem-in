/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshaquan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 23:22:11 by bshaquan          #+#    #+#             */
/*   Updated: 2020/02/16 23:22:31 by bshaquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstswap(t_list *a, t_list *b)
{
	if (a && b)
	{
		a->next = b->next;
		b->next = a;
		return (b);
	}
	return (NULL);
}
