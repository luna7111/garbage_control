/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   dump_add_node.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/06 12:26:24 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/06 18:06:15 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <garbage_control.h>

void	dump_add_ptr(t_gctrl_dump **dump, void *ptr, t_memtype type)
{
	t_gctrl_dump	*new_node;

	new_node = malloc(sizeof(t_gctrl_dump));
	if (!new_node)
		return ;
	new_node->ptr = ptr;
	new_node->type = type;
	new_node->next = *dump;
	*dump = new_node;
}
