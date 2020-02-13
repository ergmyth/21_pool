/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 12:49:39 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/17 22:53:46 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>

int		dif_operation(char **str);
int		ft_putchar(char c);
void	ft_putnbr(int nb);
int		do_op(char operator, int n1, int n2);
int		eval_expr(char *str);
int		ft_strlen(char *str);

#endif
