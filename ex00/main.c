/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:00:35 by ndivjak           #+#    #+#             */
/*   Updated: 2022/09/05 23:06:13 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	
	/* ASCII values of the characters are subtracted from each other
	giving the value of the number the character in the argument represents*/	
	x = *argv[1] - '0';
	y = *argv[2] - '0';
	rush(x, y);
	return (0);
}
