// Example - Illustrates constructors, destructors, storage duration.
//
//   Storage duration denotes an object's lifetime.
//
//   Threre are 3 storage durations:
//      1. Static storage duration
//           - Entire program duration
//           - Global variables have static storage duration
//      2. Automatic storage duration
//           - Object comes and goes:
//                * Created when its definition is reached in its block
//                * Destroyed when the block is exited
//           - Default for local varables and parameters
//      3. Dynamic storage duration
//           - Lifetime determined by the programmer with new and delete
//
//==============================================================================
#include <iostream>
#include <string>

//==============================================================================
class Obj
{
  public:
      // 1 arg constructor
      Obj(std::string name)
      {
          _name = name;
          std::cout << "C  : " << this << "  " << _name << "\n";
      }

      // Copy constructor
      Obj(const Obj& other)
      {
          _name = other._name + "-copy";
          std::cout << "CC : " << this << "  " << _name 
               << " from address " << &other << "\n";
      }

      // Destructor.
      ~Obj()
      {  std::cout << "D  : " << this << "  " << _name << "\n"; }

  private:
      std::string _name;
};

//==============================================================================
Obj foo(Obj, Obj&);   // free (nonmember) function declaration
Obj aa("global aa");  // global, static Obj object

//==============================================================================
int main()
{
    std::cout << ">>  =====  main starts =====\n";
    Obj aa("main aa");
    Obj bb("main bb");
    {
        std::cout << ">>  ===== inner block starts =====\n";
        Obj aa("inner block aa");
        std::cout << "<<  ===== inner block ends =====\n";
    }
    Obj *ptr = new Obj("dynamic");
    Obj cc = foo(aa, bb);
    delete ptr;
    std::cout << "<<  ===== main ends =====\n";
}

//==============================================================================
// Uses call by value, call by reference.
// Has an automatic local
Obj foo(Obj ee, Obj& ff)
{
    std::cout << ">>  ===== foo called =====\n";
    Obj cc("foo local/automatic cc");
    std::cout << "<<  ===== foo returns =====\n";
    return ee;
}

