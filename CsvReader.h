#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

class CsvReader {
public:
	static std::vector<std::vector<std::string>> readCsv(const std::string& filename) {
        std::vector<std::vector<std::string>> rowData;
        std::ifstream file(filename);
        std::string line;
        for (int i = 0; i < 2; i++) { // skip lines
            std::getline(file, line);
        }
        while (std::getline(file, line)) {
            std::vector<std::string> row;
            std::stringstream ss(line);
            std::string cell;
            while (std::getline(ss, cell, ',')) {
                row.push_back(cell);
            }
            rowData.push_back(row);
        }
        file.close();
        return rowData;
    }
};
