#include <bits/stdc++.h>

class Converter{
    typedef std::vector<std::string> lines;
    public:
        Converter();
        lines file_read(std::string docname);
        void censor(lines &file, lines subs);
        void write(lines to_write);
        std::string subTag(std::string s, std::string a, const std::string& b);
        inline bool check_existence (const std::string& name);
    
};