/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:22:28 by ndivjak           #+#    #+#             */
/*   Updated: 2022/09/04 16:21:42 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	new_line(void)
{
	write(1, "\n", 1);
}

void	print_line(int t_char, char first_special,
		char second_special, char indent)
{
	int	cur_char;

	cur_char = 1;
	while (t_char >= cur_char)
	{
		if (cur_char == 1)
		{
			ft_putchar(first_special);
		}
		else if (cur_char == t_char)
		{
			ft_putchar(second_special);
		}
		else
		{
			ft_putchar(indent);
		}
		cur_char++;
	}
}

void	table_master_control(int t_char, int t_lines)
{
	int	line;

	line = 1;
	while (t_lines >= line)
	{
		if (line == 1)
		{
			print_line(t_char, 'A', 'C', 'B');
			new_line();
		}
		else if (line == t_lines)
		{
			print_line(t_char, 'A', 'C', 'B');
			new_line();
		}
		else
		{
			print_line(t_char, 'B', 'B', ' ');
			new_line();
		}
		line++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Plz no :)", 9);
		return ;
	}
	table_master_control(x, y);
}
