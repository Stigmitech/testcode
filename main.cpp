#include <iostream>
using namespace std;
class A
{
private:int a;
public:void funA()
{cout<<"a";}
};
class B: virtual public A
{
private:int b;
public:void funB()
{cout<<"b";}
};
class C:virtual public A
{
private:int c;
public:void funC()
{cout<<"c";}
};
class D:public B, public C
{
private:int d;
public:void funD()
{cout<<"d";}
};
int main()
{
D obj;
obj.funC();
obj.funB();
obj.funA();
  return 0;
}