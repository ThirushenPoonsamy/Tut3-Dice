#include <iostream>

using namespace std;
class Dice
{
private:
	int res;
public:
	int sumres;

	Dice()
	{
	}

	Dice(int newres)
	{
	res = newres;
	sumres = 0;
	}

	int roll()
	{
	res = rand()%6+1;
	sumres = sumres+res;
	return res;
	}
};
	float average(Dice obj,int rolls);
	float average(int arr[],int arraylength);

	int main()
	{
   int temp = 0;
   int rolls = 0;

   char choice = 'a';

   Dice ob;

   while(choice!='z')
   {
   cout<<"Enter any character to roll dice and z to stop rolling dice"<<endl;
   cin>>choice;
   rolls++;
   temp = ob.roll();
   cout<<"Number generated for dice roll "<<rolls<<" "<<temp<<endl;
   cout<<" Sum of all numbers generated on dice roll so far "<<ob.sumres<<endl;
   cout<<"Average of all numbers generated on dice so far "<<average(ob,rolls)<<endl;

   }
   system("pause");
	return 0;
	}
   float average(Dice ob,int rolls)
   {
   float avg = (float)ob.sumres/(float)rolls;
   return avg;
   }

