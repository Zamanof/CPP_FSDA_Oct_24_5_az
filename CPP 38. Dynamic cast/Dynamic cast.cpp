#include<iostream>
#include<typeinfo>

using namespace std;

class Animal {
public:
	string name;
	// virtual metod
	virtual void Sound() {
		cout << name << " - some sound" << endl;
	}
};

class Dog : public Animal {
public:
	int age;
	void Sound() override {
		cout << name << " - onlar arkadan hawlarlar. lar lar lar" << endl;
	}
	void fooDog() {
		cout << "Dog foo method" << endl;
	}
};


class Cat : public Animal {
public:
	int life;
	void Sound() override {
		cout << name << " - myau, miyav" << endl;
	}
	void fooCat() {
		cout << "Cat foo method" << endl;
	}
};

class SphynxCat : public Cat {
public:
	int life;
	void Sound() {
		cout << name << " - men ne qeder kechel olsam da, deyerem min pishiye" << endl;
	}

	void fooSphynxCat() {
		cout << "SphynxCat foo method" << endl;
	}
};

// Animal* animal = &dog; upcast
void someFunctionTypeId(Animal* animal) {
	/*animal->Sound();*/
	const type_info& type = typeid(*animal);

	/*cout << type.name() << endl;*/

	if (type == typeid(Cat)) {
		// downcast
		static_cast<Cat*>(animal)->fooCat();
	}
	if (type == typeid(Dog)) {
		// downcast
		static_cast<Dog*>(animal)->fooDog();
	}
	if (type == typeid(SphynxCat)) {
		// downcast
		static_cast<SphynxCat*>(animal)->fooSphynxCat();
	}
}

void someFunction(Animal* animal) {
	Cat* cat = dynamic_cast<Cat*>(animal);
	Dog* dog = dynamic_cast<Dog*>(animal);
	SphynxCat* sphynxCat = dynamic_cast<SphynxCat*>(animal);
	if (cat != nullptr && sphynxCat == nullptr) {
		cat->fooCat();
	}
	else if (dog != nullptr) {
		dog->fooDog();
	}
	else if (sphynxCat != nullptr) {
		sphynxCat->fooSphynxCat();
	}
}

void someFunctionReference(Animal& animal) {

	try
	{
		Cat& cat = dynamic_cast<Cat&>(animal);
		cat.fooCat();

	}
	catch (bad_cast cast)
	{
		cout << "Invalid cast" << endl;
	}

	try
	{
		Dog& dog = dynamic_cast<Dog&>(animal);
		dog.fooDog();

	}
	catch (bad_cast cast)
	{
		cout << "Invalid cast" << endl;
	}
	try
	{
		SphynxCat& sphynxCat = dynamic_cast<SphynxCat&>(animal);
		sphynxCat.fooSphynxCat();

	}
	catch (bad_cast cast)
	{
		cout << "Invalid cast" << endl;
	}


}

int main() {
	// static_cast<new_type>(expression) - polimorf olmayan tipler uchun typecasting-dir
	// dynamic_cast<new_type>(expression) - polimorf olan tipler uchun typecasting-dir
	// const_cast<new_type>(expression)
	// reinterpret_cast<new_type>(expression)

	//Cat cat;
	//cat.name = "Tarix";
	///*someFunctionTypeId(&cat);*/
	////someFunction(&cat);
	//someFunctionReference(cat);

	//Dog dog;
	//dog.name = "Plutarx";
	///*someFunctionTypeId(&dog);*/
	////someFunction(&dog);
	//someFunctionReference(dog);

	SphynxCat sphynx;
	sphynx.name = "Firon";
	//someFunction(&sphynx);
	someFunctionReference(sphynx);
}
