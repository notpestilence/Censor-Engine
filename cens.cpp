#include <bits/stdc++.h>
#include "converter.hpp"


int main(){
    Converter conv;
    std::vector<std::string> file, subs, deb;
    file = conv.file_read("doc.txt");
    subs = conv.file_read("sub.txt");
    conv.censor(file, subs);
    conv.write(file);
    std::cout << "Output file written to output.txt!" << std::endl << std::endl;
    std::system("pause");
    return 0;
}