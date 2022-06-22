#include "Harl.hpp"

void  Harl::debug( void ){
   std::cout << "[ Debug ]" << std::endl;
   std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-"
      "pickle-special-ketchup burger. I really do!" << std::endl;
}
void  Harl::info( void ){
   std::cout << "[ Info ]" << std::endl;
   std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
      "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void  Harl::warning( void ){
   std::cout << "[ Warning ]" << std::endl;
   std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
      " years whereas you started working here since last month." << std::endl;
}
void  Harl::error( void ){
   std::cout << "[ Error ]" << std::endl;
   std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void  Harl::complain( std::string level ){

   for (int i = 0; i < 4; i++)
   {
      if (level.compare(this->name[i]) == 0)
      {
         for (int j = i; j < 4; j++)
            (this->*func[j])();   
         return ;
      }
   }
   std::cout <<  "[ Probably complaining about insignificant problems ]" << std::endl;
}

/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
Harl::Harl()
{
   this->func[0] = &Harl::debug;
   this->func[1] = &Harl::info;
   this->func[2] = &Harl::warning;
   this->func[3] = &Harl::error;

   this->name[0] = "DEBUG";
   this->name[1] = "INFO";
   this->name[2] = "WARNING";
   this->name[3] = "ERROR";
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
Harl::~Harl()
{
}

