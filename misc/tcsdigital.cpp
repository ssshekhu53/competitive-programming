// Write a program to find smallest integer value y for the given value of x such that if we multiply the digits of y, we should get x. 
// y must contain more than one digit.

#include<bits/stdc++.h>

using namespace std;

class CustomException {
    private:
        string message;
    public:
        CustomException();
        CustomException(string);
        string getMessage();
        void setMessage(string);
};

CustomException::CustomException() {
    this->message="";
}

CustomException::CustomException(string message) {
    this->message=message;
}

void CustomException::setMessage(string message) {
    this->message=message;
}

string CustomException::getMessage() {
    return this->message;
}

unsigned int getResult(unsigned int x);

int main() {
    unsigned int x, y;
    cin>>x;
    try {
        cout<<getResult(x)<<endl;
    }
    catch(CustomException *e) {
        cout<<e->getMessage()<<endl;
    }

    return 0;
}

unsigned int getResult(unsigned int x) {
    unsigned int y, pow;
    bool flag;
    y=0;
    pow=1;

    if(x>=0 && x<=9)
        return x+10;

    while(x>1) {
        flag=true;
        for(int i=9; i>1; i--) {
            if(x%i==0) {
                y=(i*pow)+y;
                pow*=10;
                x/=i;
                flag=false;
            }
        }
        if(flag)
            throw new CustomException("Not Possible");
    }

    return y;
}