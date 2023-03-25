#include <string>
#include "address.h"
#ifndef PERSON_H
#define PERSON_H

class Person
{
 public:
	 Person () = default;
	 Person (const std::string&, int, const Address&, const std::string&, double, double);
	 ~Person () = default;

 public:
	 void setName (const std::string&);
	 void setAge (int);
	 void setAddress (const Address&);
	 void setGender (const std::string&);
	 void setHeight (double);
	 void setWeight (double);
	 std::string getName () const;
	 int getAge () const;
	 Address getAddress () const;
	 std::string getGender () const;
	 double getHeight () const;
	 double getWeight () const;
	 void personInfo () const;

 private:
	 std::string m_name;
	 int m_age;
	 Address m_address;
	 std::string m_gender;
	 double m_height;
	 double m_weight;
};

#endif // person.h
