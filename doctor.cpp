class Doctor{
    private:
     string Name;
     string Department;
     string Employment;
     int Time=0; 
     int Rating=0;
     long long int phone_Number=0;
     string Email;
     int patientsnumb=0;
     public:
     int vis[7];
     vector<string>past_patients;
     
     public:
      string getname(){
        return Name;
        }
         string getdepartment(){
        return Department;
        }
         string getemployment(){
            return Employment;
        }
         int gettime(){
            return Time;
        }
         int getrating(){
            return Rating;
        }
         long long int getphoneNo(){
            return phone_Number;
        }
         string getemail(){
            return Email;
        }
         int getpatientsnumb(){
            return patientsnumb;
        }

        public:
      
        void setname(string N){
               Name=N;
        }
         void setdepartment(string depart){
             Department=depart;
        }
         void setemployment(string emp){
              Employment=emp;
        }
         void settime(int T){
               Time=T;
        }
        void setrating(int feedback){
            Rating=feedback;
        }
        void setphoneNo(long long int numb){
            phone_Number=numb;
        }
        void setemail(string mail){
            Email=mail;
        }
        void setpatientsnumb(int num){
            patientsnumb=num;
        }

};
