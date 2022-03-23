/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <tvan-der@student.codam.nl>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/26 15:35:18 by Tessa         #+#    #+#                 */
/*   Updated: 2020/11/30 15:35:19 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			count;

	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr || s == NULL)
		return (NULL);
	count = 0;
	while (count < len & start < ft_strlen(s))
	{
		substr[count] = s[start];
		start++;
		count++;
	}
	substr[count] = '\0';
	return (substr);
}
