/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nickras <nickras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:58:04 by nrasmuss          #+#    #+#             */
/*   Updated: 2022/05/18 14:13:22 by nickras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//My own implementation of the C library function 
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/* int	main(void)
{
	int c = 65;
	printf("%c", ft_tolower(c));
	return (0);
} */
