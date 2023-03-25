#include "include/person.h"
#include <iostream>

Person::Person (const std::string& name, int age, const Address& address, const std::string& gender, double height, double weight)
: m_name(name), m_age(age), m_address(address), m_gender(gender), m_height(height), m_weight(weight)
{}

void Person::setName (const std::string& name)
{
	m_name = name;
}

void Person::setAge (int age)
{
	m_age = age;
}

void Person::setAddress (const Address& address)
{
	m_address = address;
}

void Person::setGender (const std::string& gender)
{
	m_gender = gender;
}

void Person::setHeight (double height)
{
	m_height = height;
}

void Person::setWeight (double weight)
{
	m_weight = weight;
}

std::string Person::getName () const
{
	return m_name;
}

int Person::getAge () const
{
	return m_age;
}

Address Person::getAddress () const
{
	return m_address;
}

std::string Person::getGender () const
{
	return m_gender;
}

double Person::getHeight () const
{
	return m_height;
}

double Person::getWeight () const
{
	return m_weight;
}

void Person::personInfo () const
{
	std::cout << "Name: " << m_name
		  << "\nAge: " << m_age
		  << "\nStreet: " << m_address.getStreet()
		  << "\nCity: " << m_address.getCity()
		  << "\nState: " << m_address.getState()
		  << "\nZip: " << m_address.getZip()
		  << "\nGender: " << m_gender
		  << "\nHeight: " << m_height
		  << "\nWeight: " << m_weight << std::endl;
}
