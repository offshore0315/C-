类的对象不能直接访问类声明的私有成员变量，否则破坏了信息隐藏的目的。
在C++中，为了防止某些数据成员或成员函数从外部被直接访问，可以将它们声明为private，这样编译器会阻止任何来自外部非友元的直接访问。
私有成员变量的常用访问方法如下：

(1)通过公共函数为私有成员赋值

#include <iostream>  
using namespace std;  
 
class Test  
{  
private:  
    int x, y;  
public:  
    void setX(int a)  
    {  
        x=a;  
    }  
    void setY(int b)  
    {  
        y=b;  
    }  
    void print(void)  
    {  
        cout<<"x="<<x<<'\t'<<"y="<<y<<endl;  
    }  
} ; 
 
int main()  
{  
    Test p1;  
    p1.setX(1);  
    p1.setY(9);  
    p1.print( );  
    return 0;  
}  

(2)利用指针访问私有数据成员

 

#include <iostream>  
using namespace std;  
class Test  
{  
private:  
    int x,y;  
public:  
    void setX(int a)  
    {  
        x=a;  
    }  
    void setY(int b)  
    {  
        y=b;  
    }  
    void getXY(int *px, int *py)  
    {  
        *px=x;    //提取x,y值  
        *py=y;  
    }  
};  
int main()  
{  
    Test p1;  
    p1.setX(1);  
    p1.setY(9);  
    int a,b;  
    p1.getXY(&a,&b);  //将 a=x, b=y  
    cout<<a<<'\t'<<b<<endl;  
    return 0;  
}  
(3)利用函数访问私有数据成员

#include <iostream>  
using namespace std;  
class Test  
{  
private:  
    int x,y;  
public:  
    void setX(int a)  
    {  
        x=a;  
    }  
    void setY(int b)  
    {  
        y=b;  
    }  
    int getX(void)  
    {  
        return x;   //返回x值  
    }  
    int getY(void)  
    {  
        return y;   //返回y值  
    }  
};  
int main()  
{  
    Test p1;  
    p1.setX(1);  
    p1.setY(9);  
    int a,b;  
    a=p1.getX( );  
    b=p1.getY();  
    cout<<a<<'\t'<<b<<endl;  
    return 0;  
}   
  
(4)利用引用访问私有数据成员

#include <iostream>  
using namespace std;  
class Test  
{  
private:  
    int x,y;  
public:  
    void setX(int a)  
    {  
        x=a;  
    }  
    void setY(int b)  
    {  
        y=b;  
    }  
    void getXY(int &px, int &py) //引用  
    {  
        px=x;    //提取x,y值  
        py=y;  
    }  
};  
int main()  
{  
    Test p1,p2;  
    p1.setX(1);  
    p1.setY(9);  
    int a,b;  
    p1.getXY(a, b); //将 a=x, b=y  
    cout<<a<<'\t'<<b<<endl;  
    return 0;  
}  
