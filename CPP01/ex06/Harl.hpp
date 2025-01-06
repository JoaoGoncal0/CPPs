#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

class Harl {

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public:
        Harl(void);
        ~Harl(void);
        void    complain(int level);
        void    (Harl::*func[4])(void);
        std::string levels[4];
        int     getLevel(const std::string &level);
};

#endif