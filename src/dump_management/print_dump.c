/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   print_dump.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/20 21:02:05 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/20 21:44:02 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <garbage_control.h>

void	gctrl_print_dump(t_gctrl_dump *dump, char *head)
{
	printf("%s\n", head);
	while (dump)
	{
		printf("ptr %p in block %d\n", dump->ptr, dump->block);
		dump = dump->next;
	}
	printf("\n");
}
