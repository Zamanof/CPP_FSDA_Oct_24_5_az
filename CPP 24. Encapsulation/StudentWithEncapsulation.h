#pragma once
class StudentWithEncapsulation
{
private:
	char firstName[30] = "Empty";
	char lastName[30] = "Empty";
	int age = 0;
public:

	// setter - mutator
	void setFirstName(const char*);
	void setLastName(const char*);
	void setAge(int);


	// getter - accessor
	char* getFirstName();
	char* getLastName();
	int getAge();

	void info();
	void initialize(const char*, const char*, int);
};

