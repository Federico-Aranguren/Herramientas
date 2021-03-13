#include <iostream>
#include <string>

int main (int arcg, char ** argv)
{
    std::string firstname, lastname, fullname;
    firstname = "Federico";
    lastname = "Aranguren Gomez";
    fullname = firstname + " " + lastname;
    std::cout << "¡Hola!," << fullname << "\n";
    std::cout << fullname[7] << "\n";
    std::cout << fullname.size() << "\n";
    std::cout << fullname.max_size() << "\n";

    return 0;
}
