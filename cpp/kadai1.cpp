# include<iostream>
using namespace std;

class person{
public:
  string name;
  string email;
};

int main(){
  person friends[3];

  for(int i = 0; i < 3; i++){
    cout << i + 1 << "番目の名前は?";
    cin >> friends[i].name;
    cout << i + 1 << "番目のメールアドレスは?";
    cin >> friends[i].email;
  }

  cout << "\n名前:メールアドレス\n";
  for( int i = 0; i < 3; i++){
    cout << friends[i].name << ":" << friends[i].email << "\n";
  }
}
