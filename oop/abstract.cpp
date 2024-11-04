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
};

int main()
{
	Friend roommate = Friend("Maaz", 23);
	Friend roommate_two = Friend("Salim", 20);
	roommate.roommate_request();
	roommate_two.roommate_request();
}