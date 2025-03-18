
#include "str_ft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_next_word(char const *s, char c, size_t *j)
{
	size_t	len;
	size_t	start;

	start = *j;
	while (s[start] && s[start] == c)
		(start)++;
	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	*j = start + len;
	return (ft_substr(s, start, len));
}

char	**ft_split(char const *s, char c)
{
	char	**split_str;
	size_t	num_of_words;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	num_of_words = ft_count_words(s, c);
	split_str = (char **)ft_calloc(num_of_words + 1, sizeof(char *));
	if (!split_str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < num_of_words)
	{
		split_str[i] = ft_next_word(s, c, &j);
		if (!split_str[i])
		{
			ft_free_ptr_array((void **)split_str);
			return (NULL);
		}
		i++;
	}
	return (split_str);
}
