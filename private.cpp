��Ķ�����ֱ�ӷ�����������˽�г�Ա�����������ƻ�����Ϣ���ص�Ŀ�ġ�
��C++�У�Ϊ�˷�ֹĳЩ���ݳ�Ա���Ա�������ⲿ��ֱ�ӷ��ʣ����Խ���������Ϊprivate����������������ֹ�κ������ⲿ����Ԫ��ֱ�ӷ��ʡ�
˽�г�Ա�����ĳ��÷��ʷ������£�

(1)ͨ����������Ϊ˽�г�Ա��ֵ

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

(2)����ָ�����˽�����ݳ�Ա

 

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
        *px=x;    //��ȡx,yֵ  
        *py=y;  
    }  
};  
int main()  
{  
    Test p1;  
    p1.setX(1);  
    p1.setY(9);  
    int a,b;  
    p1.getXY(&a,&b);  //�� a=x, b=y  
    cout<<a<<'\t'<<b<<endl;  
    return 0;  
}  
(3)���ú�������˽�����ݳ�Ա

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
        return x;   //����xֵ  
    }  
    int getY(void)  
    {  
        return y;   //����yֵ  
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
  
(4)�������÷���˽�����ݳ�Ա

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
    void getXY(int &px, int &py) //����  
    {  
        px=x;    //��ȡx,yֵ  
        py=y;  
    }  
};  
int main()  
{  
    Test p1,p2;  
    p1.setX(1);  
    p1.setY(9);  
    int a,b;  
    p1.getXY(a, b); //�� a=x, b=y  
    cout<<a<<'\t'<<b<<endl;  
    return 0;  
}  
