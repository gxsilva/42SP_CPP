/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:12:47 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/20 20:44:30 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

/*
Por padrão no C++98 quando não temos um catch correspondente ao tipo de throw que 
lançamos o próprio sistema lida com isso fazendo a seguinte ordem de chamada

unexpected() -> terminate() -> abort()

unexcpted é chamado quando não tem um catch correspondente, e unexpected chama terminate()
que por  sua vez executa as rotinas para o fim do programa o mesmo chama abort() que para
para todo o programa abruptdamente.

podemos definir um série de rotinas para acontecer dentro do terminate caso esse
cenário ocorra, a lib <exception> fornece a função set_terminate() que nos permite
passar um função que vai ser chamada dentro do terminate quando esse cenário ocorrer
*/


class BasicClass
{
	public:
		BasicClass(void) {std::cout << "create BasicClass\n";}
		~BasicClass(void) {std::cout << "desrtoy BasicClass\n";}
};

void myOwnSetTerminate(void)
{
	std::cout << "This is my own set_terminate being called by system" << std::endl;
	abort();
}

void randomFunciont(void)
{
	std::cout << "create this random";
	BasicClass obj1;
	throw 20;
}

int main(void)
{
	std::set_terminate(myOwnSetTerminate);

	try
	{
		std::cout << "Throw my error" << std::endl;
		randomFunciont();
		std::cout << "After throw" << std::endl;
	}
	catch(int e)
	{
		// in ther normal case the classs destrctor is called
		std::cout << "Falling in the normal code beahvior" << std::endl;
		std::cerr << e << '\n';
	}
	//se nenhum catach for correspondente ele cai no terminate() e acaba não limpando
	//nenhum objeto local ou alocado na heap, não executa stack unwinding
	
}