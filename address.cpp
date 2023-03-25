#include "address.h"
#include <iostream>
#include <string>

Address::Address (const std::string& street, const std::string& city, const std::string& state, const std::string& zip)
: m_street(street), m_city(city), m_state(state), m_zip(zip)
{}

void Address::setStreet (const std::string& street)
{
	m_street = street;
}

void Address::setCity (const std::string& city)
{
	m_city = city;
}

void Address::setState (const std::string& state)
{
	m_state = state;
}

void Address::setZip (const std::string& zip)
{
	m_zip = zip;
}

std::string Address::getStreet () const
{
	return m_street;
}

std::string Address::getCity () const
{
        return m_city;
}

std::string Address::getState () const
{
        return m_state;
}

std::string Address::getZip () const
{
        return m_zip;
}

void Address::addressInfo () const
{
	std::cout << "\nStreet: " << m_street
		  << "\nCity: " << m_city
		  << "\nState: " << m_state
		  << "\nZip: " << m_zip << std::endl;
}
