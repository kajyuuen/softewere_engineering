#include <iostream>
using namespace std;

class person{
public:
  string address;
  string name;
};

class addressbook{
  person* friends;
  int numberOfFriends;
public:
  addressbook(int friendNum);
  ~addressbook();
  void listFriends();
  void addFriend(string name);
  void addFriend(string name, string address);
};
// constructor
addressbook::addressbook(int friendNum){
  friends = new person[friendNum];
  numberOfFriends = 0;
}
// deconstructor
addressbook::~addressbook(){
  delete[] friends;
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

int main() {
  int friendNum;
  string name, address;
  cout << "何人の友達を登録をしますか >";
  cin >> friendNum;
  cout << "\n";
  addressbook abook(friendNum);
  
  for(int i = 0; i < friendNum; i++){
    cout << "name:address\n";
    cin >> name >> address;
    abook.addFriend(name, address);
  }
  cout << "\n 名前:住所\n";
  abook.listFriends();
  
}
