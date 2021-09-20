# 42SP_Piscine
This repository contains exercises in Shell and C from 42 SP Basecamp (Piscine).

```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basecamp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 00:42:00 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/20 07:48:52 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

## C 00

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./c00/ex00/ft_putchar.c"> putchar </a></td>
    <td>Put a char on the console.</td>
  </tr>
  <tr>
    <td><a href="./c00/ex01/ft_print_alphabet.c"> print_alphabet </a></td>
    <td>Write the alphabet on the console.</td>
  </tr>
  <tr>
    <td><a href="./c00/ex02/ft_print_reverse_alphabet.c"> print_reverse_alphabet </a></td>
    <td>Write the reverse alphabet on the console.</td>
  </tr>
  <tr>
    <td><a href="./c00/ex03/ft_print_numbers.c"> print_numbers </a></td>
    <td>Write the numbers from 0 to 9 on the console.</td>
  </tr>
  <tr>
    <td><a href="./c00/ex04/ft_is_negative.c"> is_negative </a></td>
    <td>Check if the number is negative.</td>
  </tr>
  <tr>
    <td><a href="./c00/ex05/ft_print_comb.c"> ft_print_comb </a></td>
    <td>A function that displays all the different combinations of three different digits in ascending order, listed by ascending order - yes, repetition is voluntary.</td>
  </tr>
  <tr>
    <td><a href="./c00/ex06/ft_print_comb2.c"> ft_print_comb2 </a></td>
    <td>A function that displays all the different combinations of two digits between 00 and 99, listed by ascending order.</td>
  </tr>
</table>

## C 01

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./c01/ex00/ft_ft.c"> ft </a></td>
    <td>A function that takes a pointer to int as a parameter, and sets the value "42" to that int.</td>
  </tr>
  <tr>
    <td><a href="./c01/ex01/ft_ultimate_ft.c"> ultimate_ft </a></td>
    <td>A function that takes a pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to int as a parameter and sets the value "42" to that int.</td>
  </tr>
  <tr>
    <td><a href="./c01/ex02/ft_swap.c"> swap </a></td>
    <td>A function that swaps the value of two integers whose addresses are entered as parameters.</td>
  </tr>
  <tr>
    <td><a href="./c01/ex03/ft_div_mod.c"> div_mod </a></td>
    <td>
	This function divides parameters a by b and stores the result in the int pointed by div. It also stores the  emainder of the division of a by b in the int pointed by mod.
	</td>
  </tr>
  <tr>
    <td><a href="./c01/ex04/ft_ultimate_div_mod.c"> ultimate_div_mod </a></td>
    <td>
	This function divides parameters a by b. The result of this division is stored in the
	int pointed by a. The remainder of the division is stored in the int pointed by b.
	</td>
  </tr>
  <tr>
    <td><a href="./c01/ex05/ft_putstr.c"> putstr </a></td>
    <td>
	A function that displays a string of characters on the standard output.
	</td>
  </tr>
  <tr>
    <td><a href="./c01/ex06/ft_strlen.c"> strlen </a></td>
    <td>A function that counts and returns the number of characters in a string.</td>
  </tr>
</table>

## C 02

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./c02/ex00/ft_strcpy.c"> strcpy </a></td>
    <td>The strcpy() function copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest. The strings may not overlap, and the destination string dest must be large enough to receive.</td>
  </tr>
  <tr>
    <td><a href="./c02/ex01/ft_strncpy.c"> strncpy </a></td>
    <td>The strncpy() function is similar, except that at most n bytes of src are copied. *Warning: If there is no null byte among the first n bytes of src, the string placed in dest will not be null-terminated.*</td>
  </tr>
  <tr>
    <td><a href="./c02/ex02/ft_str_is_alpha.c"> str_is_alpha </a></td>
    <td>A function that returns 1 if the string given as a parameter contains only alphabetical characters, and 0 if it contains any other character.</td>
  </tr>
  <tr>
    <td><a href="./c02/ex03/ft_str_is_numeric.c"> str_is_numeric </a></td>
    <td>A function that returns 1 if the string given as a parameter contains only digits, and 0 if it contains any other character.</td>
  </tr>
  <tr>
    <td><a href="./c02/ex04/ft_str_is_lowercase.c"> str_is_lowercase </a></td>
    <td>A function that returns 1 if the string given as a parameter contains only lowercase alphabetical characters, and 0 if it contains any other character.</td>
  </tr>
  <tr>
    <td><a href="./c02/ex05/ft_str_is_uppercase.c"> str_is_uppercase </a></td>
    <td>A function that returns 1 if the string given as a parameter contains only uppercase alphabetical characters, and 0 if it contains any other character.</td>
  </tr>
  <tr>
    <td><a href="./c02/ex06/ft_str_is_printable.c"> str_is_printable </a></td>
    <td>A function that returns 1 if the string given as a parameter contains only printable characters, and 0 if it contains any other character.</td>
  </tr>
  <tr>
    <td><a href="./c02/ex07/ft_strupcase.c"> strupcase </a></td>
    <td>A function that transforms every letter to uppercase.</td>
  </tr>
  <tr>
    <td><a href="./c02/ex08/ft_strlowcase.c"> strlowcase </a></td>
    <td>A function that transforms every letter to lowercase.</td>
  </tr>
  <tr>
    <td><a href="./c02/ex09/ft_strcapitalize.c"> strcapitalize </a></td>
    <td>A function that capitalizes the first letter of each word and transforms all other letters to lowercase. *A word is a string of alphanumeric characters.*</td>
  </tr>
</table>

## C 03

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./c03/ex00/ft_strcmp.c"> strcmp </a></td>
    <td>The  strcmp() function compares the two strings s1 and s2.  The locale is not taken into account (for a locale-aware comparison, see strcoll(3)).  It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.</td>
  </tr>
  <tr>
    <td><a href="./c03/ex01/ft_strncmp.c"> strncmp </a></td>
    <td>The strncmp() function is similar to strcmp(), except it compares only the first (at most) n bytes of s1 and s2.</td>
  </tr>
  <tr>
    <td><a href="./c03/ex02/ft_strcat.c"> strcat </a></td>
    <td>The strcat() function appends the src string to the dest string, overwriting the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte. The strings may not overlap, and the  dest tring must have enough space for the result. If dest is not large enough, program behavior is unpredictable; buffer overruns are a favorite avenue for attacking secure programs.</td>
  </tr>
  <tr>
    <td><a href="./c03/ex03/ft_strncat.c"> strncat </a></td>
    <td>
		The strncat() function is similar to strcat(), except that:
		<ul>
			<li> *  it will use at most n bytes from src; </li>
			<li> *  src does not need to be null-terminated if it contains n or more bytes. </li>
		</ul>
		As with strcat(), the resulting string in dest is always null-terminated.
		If src contains n or more bytes, strncat() writes n+1 bytes to dest (n from src plus  the  terminating null  byte). Therefore, the size of dest must be at least strlen(dest)+n+1.
	</td>
  </tr>
</table>

## C 04

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./c04/ex00/ft_strlen.c"> strlen </a></td>
    <td>A function that counts and returns the number of characters in a string.</td>
  </tr>
  <tr>
    <td><a href="./c04/ex01/ft_putstr.c"> putstr </a></td>
    <td>A function that displays a string of characters on the standard output.</td>
  </tr>
  <tr>
    <td><a href="./c04/ex02/ft_putnbr.c"> putnbr </a></td>
    <td>A function that displays the number entered as a parameter. The function has to be able to display all possible values within an int type variable.</td>
  </tr>
  <tr>
    <td><a href="./c04/ex03/ft_atoi.c"> atoi </a></td>
    <td>The  atoi() function converts the initial portion of the string pointed to by nptr to int.</td>
  </tr>
</table>

## C 05

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./c05/ex00/ft_iterative_factorial.c"> iterative_factorial </a></td>
    <td>An iterated function that returns a number. This number is the result of afactorial operation based on the number given as a parameter.
	• If the argument is not valid the function should return 0.
	</td>
  </tr>
  <tr>
    <td><a href="./c05/ex01/ft_recursive_factorial.c"> recursive_factorial </a></td>
    <td>A recursive function that returns the factorial of the number given as a	parameter.
	•If the argument is not valid the function should return 0.
	</td>
  </tr>
  <tr>
    <td><a href="./c05/ex02/ft_iterative_power.c"> iterative_power </a></td>
    <td>An iterated function that returns the value of a power applied to a number.
	- An power lower than 0 returns 0.
	- We’ve decided that 0 power 0 will returns 1</td>
  </tr>
  <tr>
    <td><a href="./c05/ex03/ft_recursive_power.c"> recursive_power </a></td>
    <td>An recursive function that returns the value of a power applied to a number.
	- An power lower than 0 returns 0.
	- We’ve decided that 0 power 0 will returns 1</td>
  </tr>
  <tr>
    <td><a href="./c05/ex04/ft_fibonacci.c"> fibonacci </a></td>
    <td>Create a function ft_fibonacci that returns the n-th element of the Fibonacci
	sequence, the first element being at the 0 index. We’ll consider that the Fibonacci
	sequence starts like this: 0, 1, 1, 2.</td>
  </tr>
</table>

## C 06

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./c06/ex00/ft_print_program_name.c"> print_program_name </a></td>
    <td>A program that displays its own name.</td>
  </tr>
  <tr>
    <td><a href="./c06/ex01/ft_print_params.c"> print_params </a></td>
    <td>A program that displays its given arguments.</td>
  </tr>
  <tr>
    <td><a href="./c06/ex02/ft_rev_params.c"> rev_params </a></td>
    <td>A program that displays its given arguments,o ne per line, in the reverse order of the command line.</td>
  </tr>
</table>
