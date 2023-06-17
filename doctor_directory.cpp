bool cmp(Doctor a,Doctor b){
    return b.getname()>a.getname();
}

class doctor_directory{
    public:
    vector<Doctor>d;

    void new_appointment(){
        Doctor doc;
        cout<<"Enter Name:";
        string n;
        cin>>n;
        
        for(auto it:d){
            if(it.getname()==n){
                cout<<"doctor already exists"<<endl;
                return ;
            }
        }
        doc.setname(n);

        cout<<"Enter doctor department :";
        string dep;
        cin>>dep;
        doc.setdepartment(dep);

        cout<<"Enter doctor employment type: ";
        string emp;
        cin>>emp;
        doc.setemployment(emp);

        cout<<"Enter the doctor available day 1-7:" ;
         int x;
         cin>>x;
         doc.settime(x);
    
         
        cout<<"Enter doctor phone_number: ";
        long long int ph;
        cin>>ph;
        doc.setphoneNo(ph);

        cout<<"Enter doctor Email_id: ";
        string em;
        cin>>em;
        doc.setemail(em);
          
          doc.setrating(0);
          doc.setpatientsnumb(0);
        for(int dg=0;dg<7;dg++)
        doc.vis[dg]=0;
          d.push_back(doc);
          sort(d.begin(),d.end(),cmp);

    }
    void print_directory1(){
        if(d.size()==0){
            cout<<"Empty Directory"<<endl;
            return;
        }
        for(auto it:d){
            cout<<"Name - "<<it.getname()<<endl;
            cout<<"Department - "<<it.getdepartment()<<endl;
            cout<<"Employment - "<<it.getemployment()<<endl;
            cout<<"Phone_number - "<<it.getphoneNo()<<endl;
            cout<<"Email_id - "<<it.getemail()<<endl;
            cout<<"Ethics rating - "<<it.getrating()<<endl;
            cout<<"Available day  - "<<it.gettime()<<endl;
        }
    }

    string search(long long int ph){
        for(auto it:d){
            if(it.getphoneNo()==ph)
            return it.getname();
        }
        return "Not found";
    }
      
      string search(string str){
        for(auto it:d){
            if(it.getname()==str||it.getdepartment()==str||it.getemail()==str||it.getemployment()==str)
            return it.getname();
        }
        return "Not found";
      }

      void resigning(string n){
        auto iter=d.end();
        for(auto it=d.begin();it!=d.end();++it){
            if(it->getname()==n)iter=it;
        }
        d.erase(iter);
      }

      void update_phone_number(string nme,long long int phn){
        for(auto it:d){
            if(it.getname()==nme){
                it.setphoneNo(phn);
                return;
            }
        }
        cout<<"doctor not found"<<endl;
      }

      void update_email_id(string nme,string e){
        for(auto it:d){
            if(it.getname()==nme){
                it.setemail(e);
                return;
            }
        }
        cout<<"doctor not found"<<endl;
      }
      
      void update_avaliability(string nme,int i){
        for(auto it:d){
            if(it.getname()==nme){
                it.settime(i);
                return;
            }
        }
        cout<<"doctor not found"<<endl;
      }

      void update_feedback(string nme,int i){
        for(auto it:d){
            if(it.getname()==nme){
                it.setrating(i);
              return;
            }
        }
        cout<<"doctor not found"<<endl;
      }
       


};