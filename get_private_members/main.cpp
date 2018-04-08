#include "secret.h"

#include <iostream>


class Replica {

public:
    Replica();
    double getVal1() { return m_val1; }
    int getVal2() { return m_val2; }
    std::string getText() { return m_text; }

    double m_val1;

private:
    int m_val2;
    std::string m_text;
};




int main() {

    Secret c;
    Replica * rep = reinterpret_cast<Replica*>(&c);
    std::cout << rep->getVal1() << std::endl;
    std::cout << rep->getVal2() << std::endl;
    std::cout << rep->getText() << std::endl;
    return 0;

}
