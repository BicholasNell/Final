#include <iostream>
#include <fstream>

using namespace std;

int countLine(string text);
int countChar(string text);

int main(int argc, char *argv[]){
    if(argc == 1){
        cout << countLine("Ohio University") << " Lines\n";
        cout << countChar("Athens") << " Characters\n";
    }else{
        fstream file;
        file.open(argv[1]);
        std::string content( (std::istreambuf_iterator<char>(file) ),
                       (std::istreambuf_iterator<char>()    ) );
        cout << countLine(content) << " Lines\n";
        cout << countChar(content) << " Characters\n";
    }

    return 0;
}

int countLine(string text){
    int count = 1;
    for(int i = 0; i < text.length(); i++){
        if(text[i] == '\n'){
            count++;
        }
    }
    return count;
}

int countChar(string text){
    int count = 0;
    for(int i = 0; i < text.length(); i++){
        if(text[i] != ' '){
            count++;
        }
    }
    return count;
}