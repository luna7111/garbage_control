/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   allocation.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/05 18:14:25 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/20 19:10:49 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <garbage_control.h>

void	*gctrl_malloc(t_gctrl *gctrl, int block, size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	dump_add_ptr(gctrl->dump, ptr, block, GC_PTR);
	return (ptr);
}

void	gctrl_free(t_gctrl *gctrl, void *ptr)
{
	dump_remove_ptr(gctrl->dump, get_node(*(gctrl->dump), ptr));
	free(ptr);
}

void	*gctrl_calloc(t_gctrl *gctrl, int block, size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		((char *)ptr)[i] = 0;
		i ++;
	}
	dump_add_ptr(gctrl->dump, ptr, block, GC_PTR);
	return (ptr);
}
