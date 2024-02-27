#include <iostream>
#include <string>

// Clase base
class Animal {
protected:
    std::string nombre;
public:
    // Constructor
    Animal(const std::string& _nombre) : nombre(_nombre) {}

    // Método virtual para hacer sonido
    virtual void hacerSonido() const {
        std::cout << "Un animal hace un sonido.\n";
    }

    // Destructor virtual
    virtual ~Animal() {}
};

// Clase derivada
class Perro : public Animal {
public:
    // Constructor
    Perro(const std::string& _nombre) : Animal(_nombre) {}

    // Método sobreescrito
    void hacerSonido() const override {
        std::cout << nombre << " dice: ¡Guau! ¡Guau!\n";
    }
};

// Clase derivada
class Gato : public Animal {
public:
    // Constructor
    Gato(const std::string& _nombre) : Animal(_nombre) {}

    // Método sobreescrito
    void hacerSonido() const override {
        std::cout << nombre << " dice: ¡Miau! ¡Miau!\n";
    }
};

int main() {
    // Crear instancias de las clases
    Animal* animal = new Animal("Animal");
    Perro* perro = new Perro("Firulais");
    Gato* gato = new Gato("Mittens");

    // Llamar al método hacerSonido utilizando polimorfismo
    animal->hacerSonido();
    perro->hacerSonido();
    gato->hacerSonido();

    // Liberar la memoria asignada dinámicamente
    delete animal;
    delete perro;
    delete gato;

    return 0;
}