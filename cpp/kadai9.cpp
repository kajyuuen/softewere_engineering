#include <iostream>
using namespace std;

class bookshelf{
public:
  string top, middle, bottom;
  string& getShelf(string destination){
    if( destination == "すぐに読む" ){
      return top;
    }else if( destination == "あとで読む" ){
      return middle;
    }else if( destination == "積読"){
      return bottom;
    }
  };
  void showShelves(){
    cout << "top:" << top << "\nmiddle:" << middle << "\nbottom:" << bottom << "\n";
  };
};

int main(){
  string destination, bookname;
  bookshelf myshelf;
  
  while(1){
    cout << "すぐに読む or あとで読む or 積読 or quit\n";
    cin >> destination;
    if(destination == "quit"){
      break;
    }
    cout << "本の名前>";
    cin >> bookname;
    myshelf.getShelf(destination) = bookname;
    myshelf.showShelves();
  }
}
    
