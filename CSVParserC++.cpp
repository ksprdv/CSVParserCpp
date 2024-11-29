#include <vector>
#include <string>
#include "CsvReader.h"

int main() {
    CsvReader csvReader;    
    std::vector<std::vector<std::string>> data = csvReader.readCsv("data.csv");
    for (const auto& row : data) {
        for (const auto& cell : row) {
            std::cout << cell << " ";
        }
        std::cout << "\n";
    }
}