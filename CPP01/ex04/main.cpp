#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac == 4) {
        std::fstream file;
        std::fstream new_file;
        std::string  file_name = av[1];
        std::string  s1 = av[2];
        std::string  s2 = av[3];
        size_t found = 0;
        file.open(av[1], std::ios::in);
        if (!file)
                std::cout << "File doesn't exist" << std::endl;
        else {
            std::string buffer;
            file_name.append(".replace");
            new_file.open(file_name.c_str(), std::ios::out);
            while (getline(file, buffer, '\0')) {
                found = buffer.find(s1, found);
                while (found != std::string::npos) {
                    buffer.erase(found, s1.length());
                    buffer.insert(found, s2);
                    found = buffer.find(s1, found + s2.length());
                }
                new_file << buffer;
            }
        }
        new_file.close();
        file.close();
    }
    else
        std::cout << "Wrong input" << std::endl;
}