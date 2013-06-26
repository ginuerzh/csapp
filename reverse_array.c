/*
 * reverse_array.c
 *
 * Copyright 2013 Gerry <gerry@gerry-work-tcl>
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

void xor_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array(int *a, int cnt) {
	int first, last;

	for (first = 0, last = cnt - 1; first < last; first++, last--) {
		xor_swap(&a[first], &a[last]);
	}
}

void print_array(int *a, int cnt) {
	int i;

	for (i = 0; i < cnt; i++) {
		printf(" %d", a[i]);
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	int a[] = {-1, -2, -3, 4, 5, 6, 7};
	int cnt = sizeof(a) / sizeof(int);

	printf("array:");
	print_array(a, cnt);

	reverse_array(a, cnt);

	printf("reverse:");
	print_array(a, cnt);

	return 0;
}
