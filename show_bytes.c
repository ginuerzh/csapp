/*
 * show_bytes.c
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
#include <stdlib.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
	int i;

	for (i = 0; i < len; i++) {
		printf("%.2x ", start[i]);
	}
	printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer)&x, sizeof(void *));
}

void test_show_bytes(int val) {
	int ival = val;
	float fval = (float)val;
	int *pval = &val;
	printf("%d:\n", val);
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

int main(int argc, char **argv)
{
	int i;

	if (argc == 1) {
		printf("Usage: %s <integer>\n", argv[0]);
		exit(1);
	}

	for (i = 1; i < argc; i++) {
		test_show_bytes(atoi(argv[i]));
	}

	return 0;
}
