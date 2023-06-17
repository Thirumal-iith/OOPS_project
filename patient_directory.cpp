bool land(patient a,patient b){
    return b.getNAME()>a.getNAME();
}
class patient_directory{
    public:
    vector<patient>v;

    void admission(){
        patient pt;
        cout<<"PLEASE ENTER PATIENT NAME: ";
        string n;
        cin>>n;
    
      for(auto it:v){
        if(it.getNAME()==n){
            cout<<"This patient is already exists"<<endl;
            return;
        }
      }
     pt.setNAME(n);
     cout<<"Enter patient department: ";
     string dept;
     cin>>dept;
     pt.setDEPARTMENT(dept);

     cout<<"Enter patient employment type: ";
     string employ;
     cin>>employ;
     pt.setEMPLOYMENT(employ);
    
    cout<<"Enter ->YES  if you are student :";
    string s;
    cin>>s;
    if(s=="YES"){
     cout<<"Enter patient Roll_no: ";
     string rollno;
     cin>>rollno;
     pt.setROLL_NO(rollno);
     }

     cout<<"Enter patient phone number: ";
     long long int ph;
     cin>>ph;
     pt.setPHONE_NO(ph);

     cout<<"Enter patient email_id: ";
     string email;
     cin>>email;
     pt.setEMAIL_ID(email);

     cout<<"Enter patient address: ";
     string a;
     cin>>a;
     pt.setADDRESS(a);
       
    pt.setRATING(0);

    v.push_back(pt);
    sort(v.begin(),v.end(),land);
}

void print_directory(){
    if(v.size()==0){
        cout<<"Directory is Empty"<<endl;
        return;
    }
    for(auto it:v){
        cout<<"Name - "<<it.getNAME()<<endl;
        cout<<"Department - "<<it.getDEPARTMENT()<<endl;
        cout<<"Employment - "<<it.getEMPLOYMENT()<<endl;
        cout<<"Roll_no - "<<it.getROLL_NO()<<endl;
        cout<<"phone_number - "<<it.getPHONE_NO()<<endl;
        cout<<"Email_id - "<<it.getEMAIL_ID()<<endl;
        cout<<"Address - "<<it.getADDRESS()<<endl;
        cout<<"History - "<<it.getHISTORY()<<endl;
        cout<<"Ethics Rating - "<<it.getRATING()<<endl;
    }
}
  string search(long long int ph){
    for(auto it:v){
        if(it.getPHONE_NO()==ph)
        return it.getNAME();
    }
    return "NOT FOUND";
  }
    string search (string str){
        for(auto it:v){
            if(it.getNAME()==str||it.getDEPARTMENT()==str||it.getEMAIL_ID()==str||it.getROLL_NO()==str||it.getADDRESS()==str)
              return it.getNAME();
        }
        return "NOT FOUND";
    }

    void deletion(string n){
        auto iter=v.end();
        for(auto it=v.begin();it!=v.end();++it){
            if(it->getNAME()==n)iter=it;
        }
        v.erase(iter);
    }

    void update_phone_no(string nme,long long int phn){
        for(auto it:v){
            if(it.getNAME()==nme){
                it.setPHONE_NO(phn);
                return;
            }
        }
        cout<<"Patient not found"<<endl;
    }
    void update_email_id(string nme,string em){
        for(auto it:v){
            if(it.getNAME()==nme){
                it.setEMAIL_ID(em);
                return ;
            }
        }
        cout<<"patient not found"<<endl;
    }

    void update_address(string nme,string a){
        for(auto it:v){
            if(it.getNAME()==nme){
                it.setADDRESS(a);
                return;
            }
        }
        cout<<"patient not found"<<endl;
    }
      void update_ethics_rating(string nme,long long int r){
        for(auto it:v){
            if(it.getNAME()==nme){
                it.setRATING(r);
                return;
            }
        }
        cout<<"patient not found"<<endl;
      }

};