#include <iostream>
#include "ComplexNumber.h"

//#define ERROR

int main ()
{
  using namespace std;

  const ComplexNumber Z1 (2., 8);
  const ComplexNumber Z2 (1, 16.);

  ComplexNumber Z3 = static_cast<ComplexNumber>(3); //im=0
  #ifdef ERROR
    ComplexNumber Z3_ = 3.; 
  #endif

  cout<<"Z1: "<<Z1<<"\nZ2: "<<Z2<<"\nZ3: "<<static_cast<double>(Z3)<<"\n";

  cout << "\n*** Dodawanie ***\n";
  ComplexNumber S1 = Z1 + Z2,
               S2 = 1+ ComplexNumber(0,2);
  cout<<"S1: "<<S1<<"\nS2: "<<S2<<"\n";

  const ComplexNumber& S2Ref = S2 = S1 = Z1*Z2;
  cout<<"S1: "<<S1<<"\tS2: "<<S2<<"\tS2Ref: "<<S2Ref<<"\n";
  
  cout << "\n*** S2*=3 ***\n";
  S2 *= 3;
  cout<<"S1: "<<S1<<"\tS2: "<<S2<<"\tS2Ref: "<<S2Ref<<"\n";

  ComplexNumber S3 (ComplexNumber(2,-1) + Z1*Z2 - (S2++) + (++S1) );
  cout<<"S1: "<<S1<<"\tS2: "<<S2<<"\tS3: "<<S3<<"\n";

  cout << "\n*** Zmniejszamy IM: S3[IM]-=3 ***\n";
  S3[(Z1 < S3) ? 1 : 0] -= 3; // równoznaczne z S3[1] += 3;
  cout<<"S3: "<<S3<<"\n";

  cout << "*** Zmniejszamy RE: S3[RE]-=5 ***\n";
  S3[(S3 < Z1) ? 1: 0] -= 5; // równoznaczne z S3[0] += 5;
  cout<<"S3: "<<S3<<"\n";

  
  return 0;
}
