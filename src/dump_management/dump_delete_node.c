/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   dump_delete_node.c                             .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/06 20:25:53 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/19 19:10:17 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <garbage_control.h>

int	dump_remove_ptr(t_gctrl_dump **dump, t_gctrl_dump *node)
{
	if (*dump == node)
		*dump = node->next;
	else
		previous_node(*dump, node)->next = node->next;
	free(node);
	return (1);
}
//If the node is not protected, the functions removes the node from the list
//by setting its next node as the next node of the previous node (or, in the
//case of the first node, setting the list head as the next node.
//Returns 1 on success and 0 if the node is protected.
