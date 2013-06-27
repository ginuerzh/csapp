/*
 * 未命名.c
 *
 * Copyright 2013 Gerry <gerry@gerry-ubuntu-laptop>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int i = -1;
	unsigned u = 0;

	printf("-1 < 0 : %d\n", i < u);

	printf("-2147483647-1 == 2147483648U: %d\n", -2147483647-1 == 2147483648U);	// 1
	printf("-2147483647-1 < 2147483647: %d\n", -2147483647-1 < 2147483647);	// 1
	printf("-2147483647-1U < 2147483647: %d\n", -2147483647-1U < 2147483647); // 0
	printf("-2147483647-1 < -2147483647: %d\n", -2147483647-1 < 2147483647); // 1
	printf("-2147483647-1U < -2147483647: %d\n", -2147483647-1U < -2147483647); // 1

	return 0;
}

