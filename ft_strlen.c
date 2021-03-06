/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:41:55 by cheron            #+#    #+#             */
/*   Updated: 2013/12/15 05:36:37 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOT_RACE_H
# include "hotrace.h"
#endif


size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
