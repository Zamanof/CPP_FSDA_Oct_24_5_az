#include<iostream>

using namespace std;

class Animal {
public:
	string name;
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
};


class Cat : public Animal {
public:
	int life;
	void Sound() override {
		cout << name << " - myau, miyav" << endl;
	}
};

class SphynxCat : public Cat {
public:
	int life;
	void Sound() override {
		cout << name << " - men ne qeder kechel olsam da, deyerem min pishiye" << endl;
	}
};

void catInfo(Cat cat){
	cat.Sound();
}

void dogInfo(Dog dog) {
	dog.Sound();
}

void animalInfo(Animal& animal) {
	animal.Sound();
}

int main() {
	// Polymorphism

	Animal animal;
	animal.name = "Hayvan herif";
	Dog dog;
	dog.name = "Mestan";
	Cat cat;
	cat.name = "Muiza";

	/*animal.Sound();
	cat.Sound();
	dog.Sound();*/
	//catInfo(cat);
	/*dogInfo(dog);*/
	/*animalInfo(animal);*/

	 // upcasting
	 /*Animal dog1 = Dog();
	 dog1.name = "Toplan";
	 dog1.Sound();
	 

	 Animal cat1 = Cat();
	 cat1.name = "Mesi";
	 cat1.Sound();*/
	 /*animalInfo(dog);
	 animalInfo(cat);*/
	///*Animal animals[2]{ cat, dog };
	//animals[0].Sound();*/

	 // pointer to Base class	
	Animal* dog2 = &dog;
	dog2->Sound();

	// reference to Base class
	Animal& cat2 = cat;
	cat2.Sound();


	 /*Animal** animalFarm = new Animal*[7]{
		 &dog,
		 &cat,
		 new Cat(),
		 new Dog(),
		 new SphynxCat(),
		 new Cat(),
		 new Dog()
	 };

	 for (int i = 0; i < 7; i++) {
		 animalFarm[i]->Sound();
	 }*/

	 Cat* cats[2]{
		 &cat,
		 new SphynxCat()
	 };
	 cats[1]->Sound();
}