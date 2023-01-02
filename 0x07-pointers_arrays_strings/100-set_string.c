/*
 * File: 100-set_string.c
 * Auth: EASY
 */

#include "main.h"

/**
 * set_string - set a value of pointer to a char
 * @s: pointer
 * @to: character
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
