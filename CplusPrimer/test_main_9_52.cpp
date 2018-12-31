#include<iostream>
#include<string>
#include<deque>
#include<stack>
#include<stdexcept>

using namespace std;

enum obj_type {LP,RP,ADD,SUB,VAL};
struct obj{
	obj(obj_type type,double val=0)
	{
		t = type,v = val;
	}
	obj_type t;
	double v;
};

inline void skippws(string &exp,size_t &p)
{
	p = exp.find_first_not_of(" ",p);
}

inline void new_val(stack<obj>&so,double v)
{
	if(so.empty()||so.top().t == LP)
	{
		so.push(obj(VAL,v));
		cout<<"push"<<v<<endl;
	}
	else if(so.top().t ==ADD || so.top().t ==SUB){
		obj_type type =so_top().t;
		so.pop();
	}


}
