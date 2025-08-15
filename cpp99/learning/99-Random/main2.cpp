/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:23:37 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/28 20:40:01 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // parameterized constructor
    Shape(int l, int w)
    {
        length = l;
        width = w;
    }
    int get_Area()
    {
        cout << "This is call to parent class area\n";
        // Returning 1 in user-defined function means true
        return 1;
    }

protected:
    int length, width;
};

// Derived class
class Square : public Shape {
public:
    Square(int l = 0, int w = 0)
        : Shape(l, w)
    {
    } // declaring and initializing derived class
    // constructor
    int get_Area()
    {
        cout << "Square area: " << length * width << '\n';
        return (length * width);
    }
};
// Derived class
class Rectangle : public Shape {
public:
    Rectangle(int l = 0, int w = 0)
        : Shape(l, w)
    {
    } // declaring and initializing derived class
    // constructor
    int get_Area()
    {
        cout << "Rectangle area: " << length * width
             << '\n';
        return (length * width);
    }
};

int main()
{
    Shape* s;

    // Making object of child class Square
    Square sq(5, 5);

    // Making object of child class Rectangle
    Rectangle rec(4, 5);
    s = &sq; // reference variable
    s->get_Area();
    rec.get_Area();
	s = &rec; // reference variable
    s->get_Area();

    return 0; // too tell the program executed
    // successfully
}


/*
No exemplo acima teremos somente o getArea() correto da instancia respectiva da classe
na primeira forma da instancia pois não o método não é setado como "virtual" o compilador
resolve as referencia em tempo de compilação, nesse caso o tipo de ponteiro *Shape é o que conta
nesse caso, s é um ponteiro para Shape logo o método é da classe principal

com a utilização de "virtual" as referencias são resolvidas em tempo de compilação
ou seja o função vai ser executada com base no tipo real do objeto apontado e não do tipo
do ponteiro
*/