#include <iostream>
#include <string>
using namespace std;

int main() {
  
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

 
  while(true){
    std::cout << "$ ";
    string s;
    getline(cin,s);

    cout<<s<<": command not found"<<endl;

  }

   

}
