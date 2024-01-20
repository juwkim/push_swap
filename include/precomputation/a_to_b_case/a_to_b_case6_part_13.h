/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_case6_part_13.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 18:33:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TO_B_CASE6_PART_13_H
# define A_TO_B_CASE6_PART_13_H

# include "config.h"
# include "murmurhash3_x86_32.h"
# include "precomputation/eval.h"

# define A_TO_B_CASE6_715 0x4a2dd2da // 6 5 4 1 3 2
# define A_TO_B_CASE6_715_CMD "pb sa ra rr pb pb pb rrr pa ss rra pa pa pa"

# define A_TO_B_CASE6_716 0x48c27452 // 6 5 4 2 1 3
# define A_TO_B_CASE6_716_CMD "sa pb pb pb pb rr rr pa pa rrb pa rrr pa rra"

# define A_TO_B_CASE6_717 0x6ae017f8 // 6 5 4 2 3 1
# define A_TO_B_CASE6_717_CMD "sa pb pb pb pb sa rr rr pa pa rrb pa rrr pa rra"

# define A_TO_B_CASE6_718 0xdf2be6f8 // 6 5 4 3 1 2
# define A_TO_B_CASE6_718_CMD "pb rr pb pb pb rrr ss rr pa ss pa pa rrr pa"

# define A_TO_B_CASE6_719 0xb7f18d92 // 6 5 4 3 2 1
# define A_TO_B_CASE6_719_CMD "sa pb rr pb pb ss pb rrr ss rr pa pa pa rrr pa"

void	a_to_b_case6_65(t_push_swap *ps, uint32_t hash);

#endif // A_TO_B_CASE6_PART_13_H
