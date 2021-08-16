class Student {
  // private section
  private:
    int studentId; 
    char name[20];  //    name <- 20 charcters
  
  // public section
  public:
    void assignDetails(int StuId , const char stName[]); //assignDetails() method declaration
    void display();  //display() method declaration

};
