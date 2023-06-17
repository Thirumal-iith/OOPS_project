class feedback_functions{
    public:
     void rate_doctor(Doctor& temp){
        double rt;
        cout<<"How would you rate the doctor out of 10 star";
        cin>>rt;
        cout<<endl;
        if(temp.getrating()==0)
           temp.setrating(rt);
           else{
           double c= (rt+temp.getrating())/2;
           temp.setrating(c);  
           }
           
       }

       void rate_patient(string nme){
        double rt;
        cout<<"How would you rate the patient's behavior out of 10: ";
        cin>>rt;
        cout<<endl;
        for(auto it:d2.v){
            if(it.getNAME()==nme){
                if(it.getRATING()==0)
                it.setRATING(rt);
                else{
               double b=(rt+it.getRATING())/2;
                it.setRATING(b);
                }
            }
        }
       }
};


class appointment_management{
     public:
     vector<pair<string,string> > v;
     feedback_functions feed; 

     void appoint_doctor(string pat,string dt){
         int f=0,ch=0;
         for(auto it:d2.v){
            if(pat==it.getNAME()){
                f=1;
                break;
            }
         }
         if(f==0){
            cout<<"Patient not found in directory"<<endl;
            cout<<"Enter the details of patient in Directory"<<endl;
            d2.admission();
         }
        for(auto it:d1.d){
            if(it.getname()==dt){
                ch=1;
                for(int i=0;i<7;++i){
                    if(it.vis[i]==0){
                        cout<<"Appointment fixed on Day "<<i<<endl;
                        it.vis[i]=1;
                        pair<string,string> p(pat,dt);
                        v.push_back(p);
                        f=1;
                        it.past_patients.push_back(pat);
                        it.setpatientsnumb(1);
                        feed.rate_patient(pat);
                        return;
                    }
                }
                if(f==0)
                cout<<"Doctor is busy for the next week"<<endl;
            }
        }
        if(ch==0)
        cout<<"Doctor with that name does not exist"<<endl;

     }
 
    void print_past_visited(string doc){
        for(auto it:d1.d){
            if(it.getname()==doc){
                for(auto patients:it.past_patients ){
                    cout<<patients<<" ";
                }
                if(it.past_patients.size()==0){
                    cout<<"No past patients"<<endl;
                }else{
                    cout<<endl;
                }
            }
        }
    }
     void print_all_past_appointments(){
        for(auto appointment:v){
            cout<<appointment.first<<"Met the doctor"<<appointment.second<<endl;
        }
        if(v.size()==0)
        cout<<"No past appointments till date";
     }

};
//Swag f g 6 6785 d
//Asif f g j 852 y y
