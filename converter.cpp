#include <bits/stdc++.h>
#include "converter.hpp"

Converter::Converter(){}
typedef std::vector<std::string> lines;
lines Converter::file_read(std::string docname){
    std::ifstream infile(docname.c_str());
    std::string line;
    lines contents;
    while (std::getline(infile, line))
    {
        contents.push_back(line);
    }
    return contents;
}

void Converter::censor(lines& file, lines subs){
    std::size_t index;
    for (int i = 0; i < file.size(); i++){
        for (int j = 0; j < subs.size(); j++)
        {
                file[i] = Converter::subTag(file[i], subs[j], "▓▓▓▓▓▓▓▓▓");
        }
    }
}

void Converter::write(lines to_write){;
    if (Converter::check_existence("output.txt")){
        std::remove("output.txt"); // Remove existing file to overwrite
    } 
        std::ofstream o("output.txt");
    for (int i = 0; i < to_write.size(); i++){
        o << to_write[i] << std::endl;
    }
}

inline bool Converter::check_existence (const std::string& name) {
    if (FILE *file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    } else {
        return false;
    }   
}

std::string Converter::subTag( std::string s, std::string a, const std::string& b )
{
    // Function arguments: Subject string (s), word/sentence to replace (a), 
    // what you want the replacement to be (b)
    if( a.empty() )
        return s;
    std::string res = s;
    std::transform( s.begin(), s.end(), s.begin(), ::tolower );
    std::transform( a.begin(), a.end(), a.begin(), ::tolower );
    size_t pos = s.rfind( a );
    while( pos != std::string::npos )
    {
        res.replace( res.begin() + pos, res.begin() + pos + a.length(), b );
        if( pos == 0 )
            return res;
        pos = s.rfind( a, pos - 1 );
    }
    return res;
}