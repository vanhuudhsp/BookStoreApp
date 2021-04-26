#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;

struct SinhVien{
    string MaSV, HoTen;
    int DiemCN, DiemCS;
};
void NhapTT(vector<SinhVien> &ds)
{
    int n;
    cin>>n;
    SinhVien t;
    for(int i = 0 ; i < n; i++)
    {
        cin>>t.MaSV;
        cin.ignore();
        getline(cin,t.HoTen);
        cin>>t.DiemCS>>t.DiemCN;
        ds.push_back(t);
    }
}
string KT(string n)
{
    for(int i = 0; i < n.length(); i++)
        toupper(n[i]);
    return n;
}

string to_upper(string str)
{
	string s="";
	for(int i=0; i<str.length(); i++)
		s += toupper(str[i]);
	return s;
}
void XuatTT(vector<SinhVien> ds, string n)
{
    for(unsigned int i = 0; i < ds.size(); i++)
        if(to_upper(n) == to_upper(ds[i].MaSV))
        {
            cout<<ds[i].HoTen<<"\t"<<ds[i].DiemCS<<"\t"<<ds[i].DiemCN<<endl;
        }
}
int main()
{
    vector<SinhVien> ds;
    NhapTT(ds);
    string masv;
    cin>>masv;
    XuatTT(ds,masv);
    return 0;
}
