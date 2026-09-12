// g++ ax.cpp -o ax
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main(int argc, char* argv[]) {
    std::string problem_name;

    // Read problem name from command line argument if provided, otherwise prompt
    if (argc > 1) {
        problem_name = argv[1];
    } else {
        std::cout << "Enter problem name (e.g., 111A): ";
        std::cin >> problem_name;
    }

    if (problem_name.empty()) {
        std::cerr << "Error: Problem name cannot be empty.\n";
        return 1;
    }

    // Capitalize letters in the problem name (e.g., 111a -> 111A)
    for (char &c : problem_name) {
        c = std::toupper(static_cast<unsigned char>(c));
    }

    std::string filename = problem_name + ".cpp";

    // Check if the file already exists to prevent accidental overwrites
    std::ifstream check_file(filename);
    if (check_file.is_open()) {
        std::cerr << "Warning: " << filename << " already exists! Aborting to avoid overwrite.\n";
        return 1;
    }

    // Write the template
    std::ofstream out(filename);
    if (!out) {
        std::cerr << "Error: Could not create file " << filename << "\n";
        return 1;
    }

    out << "// g++ -O2 -std=c++20 " << problem_name << ".cpp" << " -o " << problem_name;
    out << "#include <bits/stdc++.h>\n";
    out << "using namespace std;\n\n";
    out << "void solve() {\n";
    out << "    \n";
    out << "}\n\n";
    out << "int main() {\n";
    out << "    ios_base::sync_with_stdio(false);\n";
    out << "    cin.tie(NULL);\n\n";
    out << "    int t = 1;\n";
    out << "    cin >> t;\n";
    out << "    while (t--) {\n";
    out << "        solve();\n";
    out << "    }\n\n";
    out << "    return 0;\n";
    out << "}\n";

    out.close();
    std::cout << "Successfully created " << filename << "\n";

    return 0;
}