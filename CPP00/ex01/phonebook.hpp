#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <limits>
#include <cctype>
#include "contact.hpp"

class   PhoneBook {

    private:
        Contact contact[8];
    
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        int     index;
        int     max;

        void    AddContact(void);
        void    SearchContact(void);
        void    ExitProgram(void);
        void    PrintList(int i);
        void    PrintContact(int i);
};

#endif