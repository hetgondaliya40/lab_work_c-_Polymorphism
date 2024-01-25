/*2. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes*/

#include<iostream>
using namespace std;
class cricket 
{
	public : 
			void t20(){
				cout<<"20 OVERS"<<endl;
			}
};
class crickettest : public cricket
{
	public : 
			void test(){
				cout<<"90 OVERS"<<endl;
			}
};

int main(){
	crickettest c1;
			c1.t20();
			c1.test();
}

