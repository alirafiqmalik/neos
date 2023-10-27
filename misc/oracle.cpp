
#include "base/circuit.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>  // Include the necessary header for file handling

int main(int argc, char** argv) {

    using namespace std;
    using namespace ckt;

     std::ofstream outputFile("output.txt", std::ios::app);

    if (outputFile.is_open()) {
        // Write data to the file
        outputFile << "arg: "  <<  argc  << std::endl;
        outputFile << "argv: " << argv << std::endl;

        // Close the file when you're done
        outputFile.close();
        // std::cout << "Data has been written to the file." << std::endl;
    } else {
        // std::cerr << "Failed to open the file for writing." << std::endl;
    }

    vector<string> arg_vec(argv, argv + argc);

    circuit cir("./bench/testing/c432.bench");

    // std::cout << "arg: " << argc << "\n";
    // std::cout << "argv: " << argv << "\n";

    id2boolmap smap;

    while (true) {

        std::string instr;
        std::cin >> instr;

        instr.erase(std::remove(instr.begin(), instr.end(), '\n'), instr.end());
        //std::cout << "recevied " << instr << "\n";
        
        if (instr.size() != cir.nInputs()) {
            std::cout << "error: size mismatch between input count " << cir.nInputs() << " " << instr.size() << "\n";
        }

        int i = 0;
        for (auto xid : cir.inputs()) {
        	// std::cout << "arg: " << arg_vec.at(1)[i] << "\n";
            smap[xid] = (instr[i++] == '1');
        }

        cir.simulate_comb(smap);

        for (auto yid : cir.outputs()) {
            std::cout << smap.at(yid);
        }
        std::cout << '\n';
        
    }

    return 0;
}
