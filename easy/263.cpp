/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   263.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:41:29 by mikim             #+#    #+#             */
/*   Updated: 2019/11/07 13:41:43 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 263. Ugly Number [easy]
*/

class Solution {
	public:
		bool isUgly(int num) {
			while (num > 1) {
				if (num % 2 == 0)
					num /= 2;
				else if (num % 3 == 0)
					num /= 3;
				else if (num % 5 == 0)
					num /= 5;
				else
					break;
			}
			return num == 1;
		}
};
