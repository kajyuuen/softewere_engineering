/* polymorphism.cpp */
#include <iostream>
using namespace std;

class person{
protected:
  string name;
public:
  person(){};
  void setName(string n){name = n;};
  virtual void requestData(){};
  virtual void showData(){};
  virtual void requestGrade(){};
  virtual void showGrade(){};
};

class par_node{
public:
  person* participant;
  par_node* next;
};

class member : public person{
  int memberid;
public:
  void requestData(){
    cout << "    会員番号を入力してください。\n    ";
    cin >> memberid;
  };
  void showData(){
    cout << "  " << name << "(会員) 会員番号:" << memberid << "\n";
  };
};

class nonmember : public person {
  string email;
  string phone;
public:
  void requestData(){
    cout << "    メールアドレスを入力してください。\n    ";
    cin >> email;
    cout << "    電話番号を入力してください。\n    ";
    cin >> phone;
  };
  void showData(){
    cout << "  " << name << "(非会員) " << email << " / " << phone << "\n";
  };
};

class stmember: public member{
  int grade;
public:
  void requestGrade(){
    cout << "  学年を入力してください。\n  ";
    cin >> grade;
  }
  void showGrade(){
    cout << "　学年:" << grade << "\n";
  }
};

int main()
{
  int i = 0;
  string name, mtype;
  par_node* p = new par_node;
  par_node* q = p;

  while(1){
    cout << "名前を入力してください。（終了する場合はquitと入力してください）\n";
    cin >> name;
    if(name == "quit"){break;}
    cout << "  会員ですか？(y/n) \n  ";
    cin >> mtype;
    if(mtype == "y"){
      cout << "  学生ですか？(y/n) \n  ";
      cin >> mtype;
      if(mtype == "y"){
	q->participant = new stmember;
	q->participant->requestGrade();
      }else{
	q->participant = new member;
      }
    }else{
      q->participant = new nonmember;
    }
    q->participant->setName(name);
    q->participant->requestData();
    q->next = new par_node;
    q = q->next;
    i++;
  }
  
  cout << "\n参加者一覧：\n";
  q = p;
  while(i > 0){
    q->participant->showData();
    q = q->next;
    i--;
  }
  cout << "\n";
}
