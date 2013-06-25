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
	unsigned i = 0xABCDEF12;

	printf("sizeof(int)=%d, sizeof(long)=%d\n", sizeof(int), sizeof(long));
	printf("%.8X >> 32 : %.8X\n", i, i >> 32);
	printf("%.8X >> 36 : %.8X\n", i, i >> 36);
	printf("%.8X >> 40 : %.8X\n", i, i >> 40);

	return 0;
}

