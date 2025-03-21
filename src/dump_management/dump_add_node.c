/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   dump_add_node.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/06 12:26:24 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/17 16:40:09 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <garbage_control.h>

void	dump_add_ptr(t_gctrl_dump **dump, void *ptr, int block, t_memtype type)
{
	t_gctrl_dump	*new_node;

	new_node = malloc(sizeof(t_gctrl_dump));
	if (!new_node)
		return ;
	new_node->next = *dump;
	*dump = new_node;
	(*dump)->ptr = ptr;
	(*dump)->block = block;
	(*dump)->type = type;
}
