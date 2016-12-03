#include <iostream.h>
typedef struct{
	int *elem;
	int length;
}List;
void sert(List &A,int e){
	for(int i=0;i<A.length;i++){
		if(e<A.elem[i]) break;
	}
	for(int j=A.length-1;j>=i-1;j--){
		A.elem[j+1]=A.elem[j];
	}
	A.elem[i]=e;
	A.length++;
}
void main(){
	List A;
	int a[100],x;
	A.elem=a;
	cout<<"请输入数组的长度"<<endl;
	cin>>A.length;
	cout << "请输入这个数组的数" <<endl;
    for (int i = 0; i <= A.length - 1; i++ )
        cin >>A.elem[i];
	 cout << "请输入x的值"<<endl;
    cin >> x;
	sert(A,x);
	 cout << "排序后 :";
    for(i = 0; i <=A.length-1; i++)
        cout << A.elem[i] <<" ";
    cout << endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream.h>
void sert(int a[],int L,int e){
	for(int i=0;i<e;i++){
		for(int j=L-1;j>=0;j--){
		a[j+1]=a[j];
		}
		a[0]=a[L];
	}
}
void main(){
	int a[100],x,length;
	cout<<"请输入数组的长度"<<endl;
	cin>>length;
	cout << "请依次输入这个数组的数" <<endl;
    for (int i = 0; i <= length - 1; i++ )
        cin >>a[i];
	 cout << "请输入循环的值"<<endl;
    cin >> x;
	sert(a,length,x);
	 cout << "排序后 :";
    for(i = 0; i <length; i++)
        cout << a[i] <<" ";
    cout << endl;
}
///////////////////////////////////////////////////////////////////////
#include <iostream.h>
void sert(int a[],int L){
	for(int i=0;i<L/2;i++){
        int t=a[i];a[i]=a[L-1-i];a[L-1-i]=t;
	}
}
void main(){
	int a[100],length;
	cout<<"请输入数组的长度"<<endl;
	cin>>length;
	cout << "请依次输入这个数组的数" <<endl;
    for (int i = 0; i <= length - 1; i++ )
        cin >>a[i];
	sert(a,length);
	 cout << "逆置后 :";
    for(i = 0; i <length; i++)
        cout << a[i] <<" ";
    cout << endl;
}
