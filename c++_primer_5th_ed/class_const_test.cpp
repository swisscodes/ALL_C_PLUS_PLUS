class A{
  int var = 1;

  public:
  void SetVar(int val) { var = 0; }
  int GetVar() const { return var; }
};

int main(){
  A normalA;
  const A constA;

  normalA.SetVar(12);
  normalA.GetVar();

  //constA.SetVar(12);// we cannot use a constant object on a none const method or member
  constA.GetVar();
}
 
