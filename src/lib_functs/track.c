/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   track.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/19 19:26:01 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/20 20:48:51 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <garbage_control.h>

void	gctrl_track_ptr(t_gctrl *gctrl, void *ptr, int block)
{
	dump_add_ptr(gctrl->dump, ptr, block, GC_PTR);
}

void	gctrl_track_array(t_gctrl *gctrl, void *array_ptr, int block)
{
	dump_add_ptr(gctrl->dump, array_ptr, block, GC_ARRAY);
}
