/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   garbage_control.h                              .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/03/05 17:52:56 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/03/20 21:43:36 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBAGE_CONTROL_H
# define GARBAGE_CONTROL_H

# include <stdlib.h>
# include <stdio.h>

typedef char	t_memtype;

# define ALL_BLOCKS -1

# define GC_PTR 0
# define GC_PTR_PROTECTED 1
# define GC_ARRAY 2
# define GC_ARRAY_PROTECTED 3

typedef struct s_gcrtl_dump
{
	t_memtype			type;
	int					block;
	void				*ptr;
	struct s_gcrtl_dump	*next;

}	t_gctrl_dump;

typedef struct s_gctrl
{
	t_gctrl_dump	**dump;
}	t_gctrl;

t_gctrl_dump	*previous_node(t_gctrl_dump *dump, t_gctrl_dump *node);
t_gctrl_dump	*get_node(t_gctrl_dump *dump, void *ptr);

void			dump_add_ptr(t_gctrl_dump **d, void *p, int b, t_memtype t);
//		dump_add_ptr(t_gctrl_dump **dump, void *ptr, int block, t_memtype type);
int				dump_remove_ptr(t_gctrl_dump **dump, t_gctrl_dump *node);
void			gctrl_print_dump(t_gctrl_dump *dump, char *head);

t_gctrl			*gctrl_init(void);
void			gctrl_terminate(t_gctrl *gctrl);

void			*gctrl_malloc(t_gctrl *dump, int block, size_t size);
void			gctrl_free(t_gctrl *dump, void *ptr);
void			*gctrl_calloc(t_gctrl *d, int b, size_t nmemb, size_t size);
//			 *gctrl_calloc(t_gctrl *dump, int block, size_t nmemb, size_t size);

void			gctrl_cleanup(t_gctrl *gctrl, int block);
void			gctrl_track_ptr(t_gctrl *gctrl, void *ptr, int block);
void			gctrl_track_array(t_gctrl *gctrl, void *array_ptr, int block);

#endif
