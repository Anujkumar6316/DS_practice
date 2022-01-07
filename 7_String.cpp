#include <iostream>
#include <string>
using namespace std;

string lower_string(string str){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    return str;
}

string case_converter(string str){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    return str;
}

int word_count(string str){
    int ans=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ' && str[i-1]!=' '){
            ans++;
        }
    }
    return ans;
}

int valid_str(string str){
    for(int i=0;i<str.size();i++){
        if(!(str[i]>=65&&str[i]<=90) && !(str[i]>=97&&str[i]<=122) && !(str[i]>=48&&str[i]<=57)){
            return -1;
        }
    }
    return 1;
}

string rev_str(string str){
    int i=0,j=str.size()-1;
    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
        i++;
    }
    return str;
}

int compare_str(string str1,string str2){
    if(str1.size()!=str2.size())
        return -1;
    else{
        for(int i=0;i<str1.size();i++){
            if(str1[i]!=str2[i])
                return -1;
        }
    }
    return 1;
}

int str_palindrome(string str){
    string str1=rev_str(str);
    int ans=compare_str(str,str1);
    if(ans==1)
        return 1;
    return -1;
}

int anagram(string str1, string str2){
    int arr[26]={0};
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]>=97 && str1[i]<=90)
            arr[str1[i]-97]=+1;
        else if(str1[i]>=65 && str1[i]<=122)
            arr[str1[i]-65]=+1;
    }

    for(int i=0;str2[i]!='\0';i++){
        if(str1[i]>=97 && str1[i]<=90)
            arr[str1[i]-97]=-1;
        else if(str1[i]>=65 && str1[i]<=122)
            arr[str1[i]-65]=-1;
    }

    
}



int main()
{
    // char c1='a';
    // char c2[6]={'a','b','c','d','e','\0'};
    // char c3[]={"anuj"};
    // // char *char_ptr="ANUJ";
    // cout<<"1.\n ";
    // cout<<c1<<" "<<c2<<" "<<c3<<" "<<endl;

    // int i=0;
    // while(c3[i]!='\0'){
    //     i++;
    // }
    // cout<<"2.\n "<<i<<endl;
    // cout<<"3.\n "<<lower_string("ANUJ")<<endl;
    // cout<<"4.\n "<<case_converter("WeLcOmE bAcK")<<endl;
    // cout<<"5.\n "<<word_count("My name is Anuj    kumar")<<endl;
    // cout<<"6.\n "<<valid_str("anuj12")<<endl;
    // cout<<"7.\n "<<rev_str("anuj")<<endl;
    // cout<<"8.\n "<<compare_str("anuj","abcd")<<endl;
    // cout<<"9.\n "<<str_palindrome("madwm")<<endl;
}