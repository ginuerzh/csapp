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

#define BUF_SIZE 1024

char buf[BUF_SIZE];

int copy_from_buf(void *dst, int maxlen) {
	int len = BUF_SIZE < maxlen ? BUF_SIZE : maxlen;
	memcpy(dst, buf, len);
	return len;
}

int main(int argc, char **argv)
{
	char s[(unsigned short)-1];

	int count = copy_from_buf(s, -1);
	printf("total copy: %d\n", count);

	return 0;
}

