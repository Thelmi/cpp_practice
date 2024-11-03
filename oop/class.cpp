#include <iostream>

class Friend
{
	public:
	std::string name;
	std::string haircolor;
	int age;
	
	void intro_yourself()
	{
		std:: cout << "I am taha's friend and roommate " << name << std:: endl;
		std:: cout << "weird question... but my hair color is " << haircolor << std:: endl;
		std:: cout << "and yeah, I am " << age << std:: endl;
	}
};

int main()
{
	Friend roommate;
	
	roommate.name = "Maaz";
	roommate.haircolor = "Black";
	roommate.age = 23;
	roommate.intro_yourself();
}