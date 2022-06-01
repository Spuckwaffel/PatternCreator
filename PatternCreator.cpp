// PatternCreator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <sstream>
#include <Windows.h>
#include <algorithm>

using namespace std;

std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
    return str;
}

int main()
{
    std::cout << "\nEnter your Pattern:\n";
    std::string st;
    std::getline(std::cin, st);


    string searchpattern;
    string mask;

    system("cls");


    if (strstr(st.c_str(), string("\\x").c_str())) {
        searchpattern = ReplaceAll(st, "\\x", " ");
        searchpattern = ReplaceAll(searchpattern, "00", "?");
        searchpattern = searchpattern.substr(1);
        std::cout << searchpattern <<  std::endl;
    }
    else {

        std::istringstream iss(st);

        do {
            string cp;
            iss >> cp;

            if (cp == "") {
                break;
            }

            searchpattern += "\\x";
            if (strstr(cp.c_str(), string("?").c_str())) {
                searchpattern += "00";
                mask += "?";
            }
            else {
                searchpattern += cp;
                mask += "x";
            }


        } while (iss);

        std::cout << "\"" << searchpattern << "\" \n\"" << mask << "\"" << std::endl;
    }

    main();
}