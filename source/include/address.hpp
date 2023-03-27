#include <string>

#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
 public:
	 Address () = default;
	 Address (const std::string&,const std::string&, const std::string&, const std::string&);
	 ~Address () = default;
 
 public:
	 void setStreet (const std::string&);
	 void setCity (const std::string&);
	 void setState (const std::string&);
	 void setZip (const std::string&);
	 std::string getStreet () const;
	 std::string getCity () const;
	 std::string getState () const;
	 std::string getZip () const;
	 void addressInfo () const;
	
 private:
	std::string m_street;
	std::string m_city;
	std::string m_state;
	std::string m_zip;
};

#endif // address.h

