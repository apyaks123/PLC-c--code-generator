#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
#include <stdlib.h> // *srand rand
#include <sstream>


using namespace std;



// Global variables

vector<string> rhs(20);
double for_stat;
double decide_stat;
double for_if;
double iteratio;
double dc;
double exposition;
double types;
double ops;
double digitDD;
double charDD;
int counts;
string key;
int idgits;
ostringstream  dig;
string digs;
int example;
int for_exp;
int for_assign_stat;
int xxx;



// Function Prototype
void stat_list();
void stat();
void cmpd_stat();
void if_stat();
void iter_stat();
void assgn_stat();
void decl_stat();
void exp();
void type();
void id();
void op();
void constd();
void charDigitSeq();
void digitSeq();
void digits();
void chars();
void print();
void writeTo();
void menu();





int main()
{
    //cout << "Hello world!" << endl;
    //cout << "int main(){ \n" << endl;
    rhs[0] = "int main(){ \n";
    //cout << rhs[0];



    srand (time(NULL));
    //for_stat = ((double) rand() / ((RAND_MAX)) + 0.00);


    //cout << for_if << "used for char and digit";

    stat_list();
    print();
    writeTo();

    return 0;
}
void stat_list(){
    //cout << for_stat << ": for stat" << endl;
    for_stat = ((double) rand() / ((RAND_MAX)) + 0.00);
    if ((for_stat >= 0.1) || (counts > 0))
        {
        ++counts;
        //cout << "goto stat" << endl;

        // go to stat
        stat();


    }

    else if ((for_stat < 0.1) & (counts == 0)){
        counts++;
        //cout <<  "go to statlist" << "then" << endl;
        //cout << "goto stat" << endl;
        stat_list();

    }




}

//
void stat(){
    decide_stat = ((double) rand() / ((RAND_MAX)) + 0.00);
    //cout << "value of:   "<<decide_stat << endl;

    // if st<cmpd_stat> with probability 0.10
    if (decide_stat <= 0.10){


            //cout << "goto cmpd stat" << endl;
            //cout << decide_stat;
            cmpd_stat();





    }


    // if st<cmpd_stat> with probability 0.10



    // <if_stat> with probability 0.10
    else if (decide_stat <= 0.20 & decide_stat > 0.10)
    {

            //cout << "goto if stat" << endl;
            //cout << decide_stat;
           if_stat();



    }




    // <if_stat> with probability 0.10


    // <iter_stat> with probability 0.10
    else if (decide_stat <= 0.30 & decide_stat > 0.20){

        //cout << "goto iter stat" << endl;
        //cout << decide_stat;
        iter_stat();



    }


    // <iter_stat> with probability 0.10


     // <assgn_stat> with probability 0.35

    else if (decide_stat <= 0.65 & decide_stat > 0.30){

        //cout << "goto assign stat" << endl;
        //cout << decide_stat;
        assgn_stat();



    }
    // <assgn_stat> with probability 0.35



    // decl_stat> with probability 0.35
    else if ( decide_stat > 0.65){

        //cout << "goto declare  stat" << endl;
        //cout << decide_stat;
        decl_stat();


    }
    // decl_stat> with probability 0.35


}
// goto stat_list
void cmpd_stat(){


    //cout << "goto stat_list" << endl;
    stat_list();

}

// goto stat_list

//
void if_stat(){
//    int frstelse;
//    int secondelse;
//    int thirdelse;

    for_if = ((double) rand() / ((RAND_MAX)) + 0.00);
    //cout << "\nfor if: " << for_if;
    rhs.push_back("if  (");
    exp();
    rhs.push_back(")\n");
    rhs.push_back("\n");

    if (for_if <= 0.20){
        stat();
    }
    else if (for_if <= 0.35 & for_if > 0.20)
        {
        cmpd_stat();
    }
    else if (for_if <= 0.50 & for_if > 0.35){
        stat();
        rhs.push_back("else \n");
        stat();
    }
     else if (for_if <= 0.65 & for_if > 0.50 ){

        cmpd_stat();

        rhs.push_back("else \n");
        stat();
    }
    else if (for_if <= 0.80 & for_if > 0.65){
        stat();
        rhs.push_back("else \n");
        cmpd_stat();
    }
    else if ( for_if > 0.80){
        cmpd_stat();
        rhs.push_back("else \n");
        cmpd_stat();
    }








}
void iter_stat(){

    iteratio = ((double) rand() / ((RAND_MAX)) + 0.00);
    //cout << "\niterios iter stat: " << iteratio;


    rhs.push_back("while ( ");
    exp();
    rhs.push_back(")\n");
    rhs.push_back("\n");

    if (iteratio <= 0.50){
        stat();
    }
    else if (iteratio > 0.50){
        cmpd_stat();
    }

    //rhs.push_back(")\n");





}
void assgn_stat(){




    id();
    rhs.push_back(" = ");
    exp();
    rhs.push_back("; ");
    rhs.push_back("\n");




}
void decl_stat(){

    dc = ((double) rand() / ((RAND_MAX)) + 0.00);
    //cout << "\ndeclare stat : " << dc << endl;

    if (dc <= 0.50  ){
        type();
        id();
        rhs.push_back("; ");
    }
    else if (dc > 0.50 )
    {
//        for_assign_stat++;
        type();
        assgn_stat();
    }



}









void exp(){

    exposition = ((double) rand() / ((RAND_MAX)) + 0.00);
    //cout << "\nexp Function : " << exposition;


    if (exposition <= 0.33 & example == 0)
{
    example++;
    exp();
//    op();
//    exp();


}
    else if (exposition  <= 0.33 || example == 1){
            example++;
            xxx++;
            op();
            exp();
            //cout << "\nBreakpoint" << endl;
            //xxx = 2;
    }



    else if (exposition  <= 0.66 & exposition > 0.33){
       id();
    }
    else if (exposition > 0.66 ){
        constd();
    }







}
void type(){
    types = ((double) rand() / ((RAND_MAX)) + 0.00);
    //cout << "\type Function : " << types;

    if (types <= 0.50){
        rhs.push_back("int");
        //cout << "int";
    }
    else if (types > 0.50){
        rhs.push_back("double");
         //cout << "double";
    }



}
void id(){
        chars();
        charDigitSeq();

}
void op(){

    ops = ((double) rand() / ((RAND_MAX)) + 0.00);
    //cout << "\nop Function : " << ops;



    if (ops <= 0.25)
        {
        rhs.push_back(" + ");
    }
    else if (ops > 0.25 & ops <= 0.50)
        {
        rhs.push_back(" - ");
    }

    else if (ops > 0.50 & ops <= 0.75)
        {
        rhs.push_back(" * ");
    }

    else if (ops > 0.75)

    {
        rhs.push_back(" / ");
    }
    else if (xxx >= 1){
        exp();
    }





}
void constd(){
    digits();
    digitSeq();
}
void charDigitSeq(){
    charDD = ((double) rand() / ((RAND_MAX)) + 0.00);
    //cout << "\ncharDigitSeq Function : " << charDD;
    int counting;
    if (counting >= 1){
        rhs.push_back(", ");
        }

    if (charDD <= 0.33){
        rhs.push_back(" ");
        counting++;
    }
    else if (charDD > 0.33 & charDD <= 0.66 ){
        counting++;
//        if (counting > 1){
//        rhs.push_back(", ");
//        }
        chars();


        //rhs.push_back(", ");
        charDigitSeq();
        //rhs.push_back(", ");
    }
    else if (charDD > 0.66){
        counting++;
//         if (counting > 1){
//        rhs.push_back(", ");
//        }
        digits();


        //rhs.push_back(", ");
        charDigitSeq();

    }





}
void digitSeq(){
    int digiting;
    if (digiting >= 1){
    rhs.push_back(", ");
    }
    digitDD = ((double) rand() / ((RAND_MAX)) + 0.00);
    //cout << "\nDigitSeq Function : " << digitDD;

    if (digitDD <= 0.50){
        rhs.push_back(" ");
        digiting++;
    }
    else if (digitDD > 0.50 ){
        digiting++;
        digits();
        digitSeq();
    }




}
void digits(){

    idgits = ((int) rand() % 9) + 0;
    dig << idgits;
    digs = dig.str();
    rhs.push_back(digs);






}
void chars(){

    char letter[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_";
    char x = letter[rand() % 100];
    string key(1, x);
    rhs.push_back(key);



}


void print(){


        rhs.push_back("\n\n\nreturn 0;\n");
        rhs.push_back("\n}");

        for (unsigned int i = 0; i < rhs.size(); i++) {


           cout << rhs.at(i) << ' ';


            }


}


void writeTo(){

        ofstream myfile;
        myfile.open("Output.txt",  ios::out );

//        rhs.push_back("\n\n\nreturn 0;\n");
//        rhs.push_back("\n}");

        for (unsigned int i = 0; i < rhs.size(); i++) {


           myfile << rhs.at(i) << ' ';


            }
    myfile.close();

}
