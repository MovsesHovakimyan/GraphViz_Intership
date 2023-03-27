# Parsing JSON Data and Calculating Average Age of Persons

This program reads a sample JSON file containing basic information about people (e.g., name, age, and address, gender, height, weight), parses the JSON data using the nlohmann/json library, and calculates the average age of the people in the dataset. The program also outputs to JSON the calculated average age and the names of people with ages above the average.

# Limitations

This program only works with (.json) format files: 

You should enter files of that format as a source file and a file to save the output of the program.

Otherwise, the work of the program will be interrupted and you will receive a message from the compiler that the format of the file you entered does not meet the standards of the program.

You can run the program with your own defined .json files, but they must have fields that match the following pattern `

Example: <br />
	{ <br />
	   "name": "Alice",<br />
      	   "age": 25,<br />
           "address": {<br />
           "street": "123 Main St",<br />
           "city": "Anytown",<br />
           "state": "CA",<br />
           "zip": "12345"<br />
           },<br />
           "gender": "female",<br />
           "height": 165,<br />
           "weight": 60 <br />
	}.<br />

# Usage

To use the program, follow this steps:

1.Open your terminal with C++ compiler that supports the C++11 standard.

2.Make sure you can use the git system.

3.Then run the git clone command as follows ` git clone https://github.com/MovsesHovakimyan/GraphViz_Intership.git 

4.After successfully cloning, move to the final changes branch named "changes" as follows `
  git checkout changes

5.Then run the following command `
  ./jsonProgram 

6.Wait until you receive the following message ` "Pleas enter json file name: ",
  Then enter the name of the source JSON file.

7.Wait until you receive the following message ` "Pleas enter new json file name: ", 
  Enter the name of the new JSON file.

If you have successfully completed the following steps and finally received a message with people's names and average ages, then congratulations! You have successfully launched the program and it has completed successfully.
