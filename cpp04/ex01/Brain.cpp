#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.getIdeas(i);
	return ;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Assignment operator called" << std::endl;
	
	if(this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.getIdeas(i);
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

const std::string&	Brain::getIdeas(int pst) const { return (this->ideas[pst]); }

