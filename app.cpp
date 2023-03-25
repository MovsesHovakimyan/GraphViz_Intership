#include "app.h"
#include "json.hpp"
#include "person.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdexcept>

nlohmann::json objJson;
nlohmann::json newObjJson;
std::vector<Person> listPerson;
int averageAge = 0;
int count = 0;

void chekFile (const std::string& fileName)
{
        std::string correctFileFormat = ".json";
        int correctFileFormatSize = correctFileFormat.size() - 1;
        int sizeOfFileName = fileName.size() - 1;
        for (int i = correctFileFormatSize; i >= 0; --i)
        {
                if (fileName[sizeOfFileName - (correctFileFormatSize - i)] != correctFileFormat[i])
                {
			std::invalid_argument("Error: Wrong File Format: ");
                }
        }

}

 
void readJson ()
{
	std::string fileName;
	std::cout << "Please enter file name: " << std::endl;
	std::getline(std::cin,fileName);
	chekFile(fileName);
	std::ifstream file(fileName);
	if (!file.is_open())
	{
		std::invalid_argument("Error: Failed to Open File: ");
	}
	file >> objJson;
	file.close();
}

void parseJsonToClass ()
{
	Address a;
	Person p;

	for (auto& obj : objJson)
	{	
		p.setName(obj["name"]);
		p.setAge(obj["age"]);
		a.setStreet(obj["address"]["street"]);
		a.setCity(obj["address"]["city"]);
		a.setState(obj["address"]["state"]);
		a.setZip(obj["address"]["zip"]);
		p.setAddress(a);
		p.setGender(obj["gender"]);
		p.setHeight(obj["height"]);
		p.setWeight(obj["weight"]);

		listPerson.push_back(p);

	}

}

void calcAverageAge ()
{
	for (auto& elem : listPerson)
	{
		++count;
		averageAge += elem.getAge();
	}

	averageAge /= count;
}

void aboveAverage ()
{
	std::string newFileName;
        std::cout << "Pleas enter new json file name: " << std::endl;
        std::getline(std::cin,newFileName);
	chekFile(newFileName);
	std::ofstream newFile(newFileName);
	if (!newFile.is_open())
	{
		std::invalid_argument("Error: Failed to Open File: ");
	}

	std::cout << "Average age ` " << averageAge << std::endl;
	
	for (auto& elem : listPerson)
	{	
		if (elem.getAge() > averageAge)
		{	
			Address a;

			newObjJson["name"] = elem.getName();
			newObjJson["age"] = elem.getAge();
			a = elem.getAddress();	
			newObjJson["address"]["street"] = a.getStreet();
			newObjJson["address"]["city"] = a.getCity();
			newObjJson["address"]["state"] = a.getState();
			newObjJson["address"]["zip"] = a.getZip();
			newObjJson["gender"] =	elem.getGender();
			newObjJson["height"] = elem.getHeight();
			newObjJson["weight"] = elem.getWeight();
			newFile << std::setw(4) << newObjJson << std::endl;
			std::cout << "Name: " << elem.getName() << std::endl;
		}
	}

	newFile.close();
}
