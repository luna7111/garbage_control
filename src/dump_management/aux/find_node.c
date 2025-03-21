/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   find_node.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/08 13:03:24 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/08 13:29:21 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <garbage_control.h>

t_gctrl_dump	*previous_node(t_gctrl_dump *dump, t_gctrl_dump *node)
{
	while (dump && dump->next != node)
		dump = dump->next;
	return (dump);
}
//Iterates the linked list until the next node is equal to the target.

t_gctrl_dump	*get_node(t_gctrl_dump *dump, void *ptr)
{
	while (dump && dump->ptr != ptr)
		dump = dump->next;
	return (dump);
}
//Iterates the linked list until the node content matches the target.
