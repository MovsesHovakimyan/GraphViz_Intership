# Parsing JSON Data and Calculating Average Age of Persons

This program reads a sample JSON file containing basic information about people (e.g., name, age, and address, gender, height, weight), parses the JSON data using the nlohmann/json library, and calculates the average age of the people in the dataset. The program also outputs to JSON the calculated average age and the names of people with ages above the average.

# Usage

To use the program, follow this steps:

1.Add custom JSON file (person.json), which contains valid JSON data with the excepted structure and data types (e.g. existing person.json).

2.Compile the program using a C++ compiler that supports the C++11 standart or leater with files: main.cpp app.cpp person.cpp address.cpp .

3.Enter the name of the source JSON file.

4.Enter the name of the new JSON file.
