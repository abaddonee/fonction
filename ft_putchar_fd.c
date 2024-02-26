/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:58:28 by likiffel          #+#    #+#             */
/*   Updated: 2024/02/19 16:59:04 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

