/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   cleanup.c                                      .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/19 17:50:53 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/20 19:36:12 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <garbage_control.h>

void	gctrl_cleanup(t_gctrl *gctrl, int block)
{
	void			*buff_ptr;
	t_gctrl_dump	*cursor;

	cursor = *(gctrl->dump);
	while (cursor)
	{
		if (cursor->block == block || block == ALL_BLOCKS)
		{
			buff_ptr = cursor->ptr;
			cursor = cursor->next;
			gctrl_free(gctrl, buff_ptr);
		}
		else
			cursor = cursor->next;
	}
}
