/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 08:51:28 by ibarabas          #+#    #+#             */
/*   Updated: 2018/03/27 19:21:23 by ibarabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
