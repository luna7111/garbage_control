/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   init.c                                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/05 18:03:02 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/14 17:07:57 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <garbage_control.h>

t_gctrl	*gctrl_init(void)
{
	t_gctrl_dump	**dump;
	t_gctrl			*gctrl;

	gctrl = malloc(sizeof(t_gctrl));
	dump = malloc(sizeof(t_gctrl_dump *));
	*dump = NULL;
	gctrl->dump = dump;
	return (gctrl);
}
//initializes the list (just returns a t_gctrl equalled to NULL)
