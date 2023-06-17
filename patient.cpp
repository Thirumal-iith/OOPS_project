class patient{
      private:
     string NAME;
     string DEPARTMENT;
     string EMPLOYMENT;
     string ROLL_NO;
     long long int PHONE_NO=0;
     string EMAIL_ID;
     string ADDRESS;
     string HISTORY;
     int RATING=0;

     public:
     string getNAME(){
        return NAME;
     }
     string getDEPARTMENT(){
        return DEPARTMENT;
     }
     string getEMPLOYMENT(){
        return EMPLOYMENT;
     }
     string getROLL_NO(){
        return ROLL_NO;
     }
     long long int getPHONE_NO(){
        return PHONE_NO;
     }
     string getEMAIL_ID(){
        return EMAIL_ID;
     }
     string getADDRESS(){
        return ADDRESS;
     }
     string getHISTORY(){
        return HISTORY;
     }
     int getRATING(){
        return RATING;
     }

     public:
      
      void setNAME(string NAM){
        NAME=NAM;
      }
      void setDEPARTMENT(string dept){
          DEPARTMENT=dept;
      }
      void setEMPLOYMENT(string employ){
        EMPLOYMENT=employ;
      }
      void setROLL_NO(string roll_no){
        ROLL_NO=roll_no;
      }
      void setPHONE_NO(long long int phone){
        PHONE_NO=phone;
      }
      void setEMAIL_ID(string email_id){
        EMAIL_ID=email_id;
      }
      void setADDRESS(string address){
        ADDRESS=address;
      }
      void setHISTORY(string history){
        HISTORY=history;
      }
      void setRATING(int rating){
        RATING=rating;
      }

};
