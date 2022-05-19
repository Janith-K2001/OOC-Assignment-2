#include <iostream>
#include <cstring>

using namespace std;
class Employee{
    private:
      int EmpID;
      char EmpName[100];
      char Position[30];
      Branch *br;
 
    public:
       Employee();
       Employee(int id,char name[],char post,Branch *pbr){
           EmpID = id;
           strcpy(EmpName,name);
           strcpy(Position,post);
           br=pbr;
       }
       void DisplayEmpData(){
           cout<<"Employee ID: "<<EmpID<<endl;
           cout<<"Employee Name: "<<EmpName<<endl;
           cout<<"Position: "<<Position<<endl;
       }
      

};
class Branch{
    private:
      int BranchID;
      char BranchName[50];
      char Location[50];
      Employee *employee;
    public:
     Branch();
     Branch(int id,char bname[],char loc[]){
         BranchID= id;
         strcpy(BranchName,bname);
         strcpy(Location,loc);
     }
     void DiasplayBranchDetails(){
       cout<<"Branch Id:"<<BranchID<<endl;
       cout<<"Branchname:"<<Branchname<<endl;
       cout<<"Location:"<<Location<<endl;
     }
     
     
};
int main(){
  
}
