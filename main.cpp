/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:50:02 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/19 20:27:28 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>

int main(void)
{
	/*
		std::time_t -> alias para um tipo de dados que comporta o valor
		dos segundos passados no sisteuma unix (provavelmente um long long)
	*/
	std::time_t t = std::time(NULL);
	

	/*
	tm é uma estrutura que comporta uma segmentação do tempo atual, guardando
	segundos, minutos, horas, anos ....

	localtime recebe um ponteiro para um time_t e retorna um ponteiro para uma
	estrutura tm

	resultado de localtime aponta para o mesmo lugar na memória, chamar loclatime
	duas vezes subescreve tudo anteriomente chamado nele
	*/
	std::tm* now = std::localtime(&t);
	/*
	é uma estrutura que comporta um string formatada como se fosse o cout porem
	ao inves de imprimir salva em uma estrutura.
	*/
	std::ostringstream oss;

	oss << std::setfill('0')
	<< std::setw(2) << (now->tm_year % 100)
	<< std::setw(2) << (now->tm_mon + 1)
	<< std::setw(2) << (now->tm_mday)
	<< "_";
	std::stringstream t_ss;
	t_ss << t;
	std::string t_str = t_ss.str();
	//segmenta a string de i até I
	oss << t_str.substr(0, 6);

	std::cout << "current time: " << oss.str() << "\n";
	return (0);
}