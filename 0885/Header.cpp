#include"Header.h"

const void cstring::display() {
    cout << "The string is " << name << endl;

}

int lencheck(const char* arr) {

    int size = 0;
    while (arr[size]!='\0') {
        size++;
    
    
    }
    return size;
}

cstring::cstring() {
    name = new char[0];
}
cstring::cstring(const char* s) {
    
    int size=lencheck(s);
    name = new char[size + 1];
    for (int i = 0; i <= size; i++) {
        name[i] = s[i];

    }
    

}
cstring::cstring(const cstring& obj) {
    int size= lencheck(obj.name);
    name = new char[size + 1];
    ArrayCopy(size, name, obj.name);

}
cstring::cstring(const cstring& obj, int pos, int stringlength) {
    int size = lencheck(obj.name);

    name = new char[size -pos+2];
    for (int i = 0; i < stringlength;i++) {
        name[i] = obj.name[i+pos];
    
    }
    




}
cstring::cstring(const char* s, int n) {
    name = new char[n+2];
    for (int i = 0; i <n;i++) {
        name[i] = s[i];
    
    }
    name[n] = '\0';

}
cstring::cstring(int n, char h) {
    name = new char[n + 2];
    for (int i = 0; i < n; i++) {
        name[i] = h;

    }
    name[n] = '\0';





}
int cstring::length() {
    int size;
   size= lencheck(name); 
   
   return size;


}
char& cstring:: at(int i) {
   

    return name[i];


}
cstring cstring:: substr(int position, int cstringlength) const {
    cstring a;
    int size = callen(name);
    a.name = new char[position- size+2];
   
   for (int i = 0; i < cstringlength;i++) {
       a.name[i] = name[i + position];
    
    
    }
   return a;



}

void ArrayCopy(int size, char destination[], char source[]) {
    for (int i = 0; i <= size; i++) {
        destination[i] = source[i];

    }

}