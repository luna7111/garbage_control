/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   garbage_control.h                              .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/05 17:52:56 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/05 18:11:45 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBAGE_CONTROL_H
# define GARBAGE_CONTROL_H

# include <stdlib.h>

typedef char t_memtype;

# define GC_FREE 0
# define GC_PRT 1
# define GC_STRARRAY 2

typedef struct s_gctrl
{
	t_memtype		type;
	void			*ptr;
	struct s_node	*next

}	t_gctrl;

t_gctrl	*gctrl_init(void);

#endif
