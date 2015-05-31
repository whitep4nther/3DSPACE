/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segment2.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihermell <ihermell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 07:42:25 by ihermell          #+#    #+#             */
/*   Updated: 2015/05/25 22:53:15 by ihermell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEGMENT2_H
# define SEGMENT2_H

# include <stdlib.h>
# include "point2.h"

typedef struct				s_segment2
{
	t_point2				points[2];
}							t_segment2;

t_segment2					*new_segment2(double x1, double y1, double x2,
							double y2);
t_segment2					fill_segment2(double x1, double y1, double x2,
							double y2);

#endif
