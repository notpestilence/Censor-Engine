# Censor-Engine
 First C++ project, revolving around file manipulation & string mutation in order to provide censorship
 
# Input
 Input is divided onto 2 files: `doc.txt` and `sub.txt`, respectively representing the main text to censor (i.e. the uncensored document) and the words to censor.

 `doc.txt` looks something like this:
 
 ![image](https://user-images.githubusercontent.com/62300057/120552867-fc40c480-c421-11eb-892f-6e33088d7364.png)


 Whilst `sub.txt` looks something like:
 
 ![image](https://user-images.githubusercontent.com/62300057/120552655-b4ba3880-c421-11eb-8f72-d2117835310b.png)
 
 `sub.txt` must consist of multiple lines (not tabs/spaces) to work, as the program reads lines by default (not any other form of whitespaces)
 
# Output
 Output is printed onto `output.txt`. If the file doesn't exist, the program will create one.
 `output.txt` looks something like this:
 
 ![image](https://user-images.githubusercontent.com/62300057/120553020-314d1700-c422-11eb-9bf1-0596f7264783.png)
 
 We can see the string mutated are insensitive towards case used, which in turn leads to more functionality. Just run the .exe after modifying both the input files to your liking!
 
