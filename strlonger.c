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
#include <string.h>

int strlonger(const char *s, const char *t) {
	return strlen(s) - strlen(t) > 0;
}

int strlonger_ok(const char *s, const char *t) {
	return strlen(s) > strlen(t);
}

int main(int argc, char **argv)
{
	char *s = "longer", *t = "long";

	printf("strlonger: %d\n", strlonger(s, t));	// 1
	printf("strlonger: %d\n", strlonger(t, s));	// also 1

	printf("strlonger_ok: %d\n", strlonger_ok(s, t));
	printf("strlonger_ok: %d\n", strlonger_ok(t, s));

	return 0;
}

