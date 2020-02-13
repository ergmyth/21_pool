/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:12:25 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/10 22:39:48 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 && *s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	else if (!(*s1) && !(*s2))
		return (1);
	else if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if (*s2 == '*' && !(*s1))
	{
		while (*s2 == '*')
			s2++;
		return (match(s1, s2));
	}
	return (0);
}
