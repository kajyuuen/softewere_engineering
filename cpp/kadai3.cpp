#include <iostream>
using namespace std;

class person{
public:
  string address;
  string name;
};

class addressbook{
  person friends[100];
  int numberOfFriends;
public:
  addressbook();
  void listFriends();
  void addFriend(string name);
  void addFriend(string name, string address);
  person find(string query);
};
// constructor
addressbook::addressbook(){
numberOfFriends = 0;
}

void addressbook::addFriend(string name){
  friends[numberOfFriends].name = name;
  numberOfFriends++;
}

void addressbook::addFriend(string name, string address){
  friends[numberOfFriends].name = name;
  friends[numberOfFriends].address = address;
  numberOfFriends++;
}

void addressbook::listFriends(){
  for(int i = 0; i < numberOfFriends; i++){
    cout << friends[i].name << "\n";
  }
}

person addressbook::find(string query){
  for(int i = 0; i < numberOfFriends; i++){
    if(query == friends[i].name){
      return friends[i];
    }
  }
  person no_one;
  return no_one;
}

int main() {
  addressbook abook;
  string name, address, query;
  while(1){
    cout << "name:address(終了時にはname=quit)\n";
    cin >> name >> address;
    if(name == "quit"){
      break;
    }
    abook.addFriend(name, address);
  }
  cout << "query>";
  cin >> query;
  person query_person = abook.find(query);
  cout << query_person.name << ":" << query_person.address << "\n";
}
