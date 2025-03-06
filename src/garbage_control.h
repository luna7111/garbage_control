/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   garbage_control.h                              .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/05 17:52:56 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/06 18:56:50 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBAGE_CONTROL_H
# define GARBAGE_CONTROL_H

# include <stdlib.h>

typedef char t_memtype;

# define GC_FREE 0
# define GC_PTR 1
# define GC_STRARRAY 2

typedef struct s_gcrtl_dump
{
	t_memtype		type;
	void			*ptr;
	struct s_node	*next

}	t_gctrl_dump;

typedef struct s_gcrtl
{
	t_gctrl_list	**dump;
}

void	dump_add_ptr(t_gctrl_dump **dump, void *ptr, t_memtype type);

t_gctrl	*gctrl_init(void);

void	*gctrl_malloc(t_gctrl *dump, size_t size);
void	gctrl_free(t_gctrl *dump, void *ptr);
void	*gctrl_calloc(t_gctrl *dump, size_t nmemb, size_t size);

#endif
