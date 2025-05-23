#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *brain;
public:
  // constructors
  Dog();
  Dog(const Dog &copy);
  // deconstructor
	virtual ~Dog();
  // copy assigment
  Dog &operator=(const Dog &src);
  // methods
  void makeSound() const;
	//getter
	void getIdeas() const;
	//setter
	void setIdea(int index, std::string idea);
};
#endif // !DOG_HPP
