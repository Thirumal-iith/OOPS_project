#include <bits/stdc++.h>
using namespace std;
#include"doctor.cpp"
#include "patient.cpp"
#include"doctor_directory.cpp"
#include"patient_directory.cpp"

doctor_directory d1;
patient_directory d2;
#include"management.cpp"
int main(){
    //Creating a doctor directory
    appointment_management m;
    d1.new_appointment();
    cout<<endl;
    //d1.new_appointment();
    cout<<endl;
    d1.print_directory1();
    d2.admission();
    cout<<endl;
    m.appoint_doctor("Asif","Swag");
  
    return 0;
}
