//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>

using namespace std; 
typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);


   // add 3 elements to the vs vector
    vs.push_back("A");
    vs.push_back("B");
    vs.push_back("C");
   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n";
    for(double vals : vi)
    {
      cout << vals << endl;
    }

   // display the 3 elements in the vs vector
   cout << "\nValues in vs: \n";
   for(string vals : vs)
   {
     cout << vals << endl;
   }

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3
    
    cout << " " << endl;

    /****Section_Name***STL_Iterators*/ 
   vector<int> vint( 10 ); // vector with 3 numbers
   vint[0] = 10;
   vint[1] = 20;
   vint[3] = 30;
   vint[4] = 40;
   vint[5] = 50;
   vint[6] = 60;
   vint[7] = 70;
   vint[8] = 80;
   vint[9] = 90;

   vector<int> :: iterator it;
   for (it = vint.begin(); it != vint.end(); ++it)
   {
     cout << " " << *it;
   } 

    /****Section_Name*** Stack*/
  stack <int> st;

  st.push(100); //pushes the element assigned on the stack from the top of the container
  assert(st.size() == 1); // verifies that one element is on the stack and is valued
  assert(st.top() == 100);// verifies the value of the elemnt 

  st.top() = 456; // assigns a new value to the element 
  assert(st.top() == 456); //verifies the value of the new value assigned

  st.pop(); // removes the element from the Stack
  assert(st.empty() == true); // verifies that the element has been removed from the stack and that it is clear and empty

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
  set <int> iset; //inserts a set of unique numbers to the container

  iset.insert(11); // populate the set with some values 
  iset.insert(-11);
  iset.insert(55);
  iset.insert(22);
  iset.insert(22);
  if (iset.find(55) != iset.end())// checks to see if the value is already stored in the container if not, then the value is populated into the set under the condition that it is not there
  {
    iset.insert(55);
  }
  assert(iset.size() == 4 );
  set<int> :: iterator it;
  for(it = iset.begin(); it != iset.end(); it++)// displays out the set and the values coresponding to it 
  {
    cout << " " << *it;
  }

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure
    
  pair <string, string > strstr;// Pair_Structure is like a container that holds exactly two elements 
  strstr.first = "Hello";
  strstr.second = "World";

  pair<int, string> intstr;// establishes a pair then runs it by it datatypes for the elements in the correspionding order of it
  intstr.first = 1;//integer type value established for first part pair 
  intstr.second = "one";//string type value established for the second part pair 

  pair<string, int > strint( "two", 2);
  assert ( strint.first == "two");
  assert ( strint.second == 2);

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
  MapT amap; 
  pair< MapIterT, bool > result =
      amap.insert(make_pair("Fred", 45));
    assert(result.second == true);
    assert(result.first->second == 45);
    result = amap.insert(make_pair( "Fred", 54));
    assert(result.second == false);
    assert(result.first->second == 45);

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary
  map<string, string> phone_book;
  phone_book["411"] = "Directory";
  phone_book["911"] = "Emergency";
  phone_book["508-678-2811"] = "BCC";
  if (phone_book.find("411") != phone_book.end())
  {
    phone_book.insert(
      make_pair(
        string("411"),
        string( "Directory")
      )
    );
  }
    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }