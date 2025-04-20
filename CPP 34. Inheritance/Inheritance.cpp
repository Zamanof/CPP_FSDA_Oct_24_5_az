#include<iostream>
#include<format>

using namespace std;

class Person {
private:
	string dream = "Some dream";
protected:
	int age;
public:
	string firstName;
	string lastName;

	Person(string firstName, string lastName, int age)
		:firstName{ firstName }, lastName{lastName}, age{age}
	{
		cout << "Person parametrized constructor" << endl;
	}
	Person() 
		:Person("Empty", "Empty", 0)
	{
		cout << "Person default constructor" << endl;
	}

	string getInfo() const{
		return format("First Name:\t{}\nLast Name:\t{}\nAge:\t\t{}\n", firstName, lastName, age);
	}

	string getGreetings(string message = "") const {
		string result = format("I am {} {}.\n", firstName, lastName);
		if (!message.empty()) { 
			result += format("I say: {}\n", message);
		}
		else
		{
			result += "I say: nothing\n";
		}
		result += format("I have a dream: {}\n", dream);
		return result;
	}

	~Person() {
		cout << "Person Destructor" << endl;
	}
};

class Student : public Person {
private:
	string faculty;
	float avgScore;
public:
	Student(float avgScore, string faculty = "Programming") 
		:avgScore{avgScore}, faculty{faculty}
	{
		cout << "Student parametrized constructor: Student(avgScore, faculty)" << endl;
		this->age = 56;
	}

	Student(string firstName, string lastName, int age, float avgScore, string faculty = "Programming")
		:Person(firstName, lastName, age), avgScore{ avgScore }, faculty{ faculty }
	{
		cout << "Student parametrized constructor: Student(firstName, lastName, age, avgScore, faculty)" << endl;
	}

	bool isSuccessful() const {
		return avgScore >= 7 ? true : false;
	}
	~Student()
	{
		cout << "Student Destructor" << endl;
	}
};

int main() {

	/*Person person("Nadir", "Zamanov", 45);*/
	/*cout<< person.getInfo();*/
	/*cout<< person.getGreetings("Hamiya salamlar");*/

	/*Student student(8.5f);
	cout<< student.getInfo()<<endl;*/

	/*Student student1("Ali", "Alizade", 25, 7.5, "Design");
	cout << boolalpha << student1.isSuccessful() << endl;
	cout << student1.getInfo() << endl;
	cout << student1.getGreetings() << endl;*/

}