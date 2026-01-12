#include <iostream>
#include <string>
#include <sstream>
#include <set> 
using namespace std;

int main() {
  
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;


  set<string> validcommands{"exit"};


  while(true){
    std::cout << "$ ";
    
    string input;

    getline(cin,input);

    stringstream ss(input);

    string command;

    while(ss>>command){
      if(validcommands.find(command)!=validcommands.end()){
        if(command =="exit"){
          return 0;
        }
      }else{
            cout<<input<<": command not found"<<endl;

      }
      
    }


  }

   

}
