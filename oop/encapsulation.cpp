#include <iostream>

class Friend
{
private:

	std::string Name;
	std::string haircolor;
	int Age;
public:

	void setName(std::string name)
	{
		if (name == "Maaz")
			Name = name;
	}
	std::string getName()
	{
		return (Name);
	}
	void intro_yourself()
	{
		std:: cout << "I am taha's roommate " << Name << std:: endl;
		std:: cout << "weird question... but my hair color is " << haircolor << std:: endl;
		std:: cout << "and yeah, I am " << Age << std:: endl;
	}
	Friend(std:: string name , int age)
	{
		Name = name;
		Age =age;
	}
};

int main()
{
	Friend roommate = Friend("Salim", 23);
	roommate.intro_yourself();

	roommate.setName("Maaz");
	std::cout << roommate.getName() << std::endl;
}