#include <iostream>

class Abstract_friend
{
	virtual void roommate_request() = 0;
} ;

class Friend:Abstract_friend
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
			Age = age;
		}
		void roommate_request()
		{
			if (Name == "Maaz")
				std:: cout << "Request is accepted " << Name << std:: endl;
			else
				std:: cout << "My bad, next time " << Name << std:: endl;
		}
		void Business()
		{
			std:: cout << Name << " is attending meetings, creating new ideas to implement" << std:: endl;
		}
};

class Bestfriend: public Friend
{
	public:
			std::string Actions;
	Bestfriend(std:: string name ,int age, std:: string actions)
		:Friend(name, age)
	{
		Actions = actions;
	}
	void brother()
	{
		std::cout << getName() << " Always on ur side my brother" << std:: endl;
	}
} ;


int main()
{
	//Friend roommate = Friend("Maaz", 23);
	Bestfriend bestie = Bestfriend("Maaz", 23, "A Men");

	bestie.Business();
}