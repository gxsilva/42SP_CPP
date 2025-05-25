/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 17:24:11 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/25 17:36:23 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <math.h>

//Qm.n -> Q8.16

#define FRACTIONAL_BITS 16
#define SCALE (1 << FRACTIONAL_BITS)
// #define SCALE (1 * pow(2, FRACTIONAL_BITS));

typedef int32_t fixed_q8_16;


fixed_q8_16 float_to_fixed (double value)
{
	return ( (fixed_q8_16)round(value * SCALE) );
}

double fixed_to_float (fixed_q8_16 fixed_value)
{
	return (fixed_value / SCALE);
}

int main(void)
{
	double input;
	double res;
	fixed_q8_16 fixed_value;
	
	printf("Type a integer value: ");
	scanf ("%lf", &input);
	fixed_value = float_to_fixed(input);
	printf("fixed value: %d\n", fixed_value);
	res = fixed_to_float (fixed_value);
	printf("float number: %lf\n", res);
	return (0);
}