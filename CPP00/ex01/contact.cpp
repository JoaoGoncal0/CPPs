#include "contact.hpp"

Contact::Contact(void) {    
}

Contact::~Contact(void) {
    std::cout << "Contact deleted" << std::endl;    
}

void Contact::SetFirstName(const std::string &str) {
    this->FirstName = str;
}

void Contact::SetLastName(const std::string &str) {
    this->LastName = str;
}
void Contact::SetNickname(const std::string &str) {
    this->Nickname = str;
}
void Contact::SetPhoneNumber(const std::string &str) {
    this->PhoneNumber = str;
}
void Contact::SetDarkestSecret(const std::string &str) {
    this->DarkestSecret = str;
}

std::string Contact::GetFirstName() {
    return (this->FirstName);
}

std::string Contact::GetLastName() {
    return (this->LastName);
}

std::string Contact::GetNickname() {
    return (this->Nickname);
}

std::string Contact::GetPhoneNumber() {
    return (this->PhoneNumber);
}

std::string Contact::GetDarkestSecret() {
    return (this->DarkestSecret);
}