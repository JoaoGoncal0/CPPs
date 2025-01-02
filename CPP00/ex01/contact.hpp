#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class   Contact {

    private:
       std::string FirstName;
       std::string LastName;
       std::string Nickname;
       std::string PhoneNumber;
       std::string DarkestSecret;
    
    public:
       Contact(void);
       ~Contact(void);

       void  SetFirstName(const std::string &str);
       void  SetLastName(const std::string &str);
       void  SetNickname(const std::string &str);
       void  SetPhoneNumber(const std::string &str);
       void  SetDarkestSecret(const std::string &str);

       std::string	GetFirstName();
	     std::string	GetLastName();
	     std::string	GetNickname();
	     std::string	GetPhoneNumber();
	     std::string	GetDarkestSecret();
};

#endif