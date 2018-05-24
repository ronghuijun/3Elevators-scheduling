#include"elevator.h"
int main(int argc,char* argv[])
{
	freopen(argv[1], "r", stdin);
	int n,i,a,b,c,d,f,t1=0,t2=0,t3=0;
	Elevator e1, e2, e3;//创建3个电梯对象
	cin >> n;
	FILE *f1, *f2, *f3;
	for (i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		f1 = fopen("output1.txt", "w");
		f2 = fopen("output2.txt", "w");
		f3 = fopen("output3.txt", "w");
		if (b % 2 != 0 && c % 2 != 0)
		{
			if (a > t1)
				t1 = a;
			d = e1.getcurrentFloor();
			if (d != b)
			{
				f = time1(d, b, t1);
				cout << f << " " << b << endl;//1
				fprintf(f1, "%d %d\n", f, b);
				t1 = f + 1;
				e1.setcurrentFloor(b);
			}
			e1.setdestination(c);
			f = time2(c, b, t1);
			cout << f << " " << c << endl;//1
			fprintf(f1, "%d %d\n", f, c);
			t1 = f + 1;
			e1.setcurrentFloor(c);
		}
		else if (b ==1 && c % 2 != 0)
		{
			if (a > t1)
				t1 = a;
			d = e1.getcurrentFloor();
			if (d != b)
			{
				f = time1(d, b, t1);
				cout << f << " " << b << endl;//1
				fprintf(f1, "%d %d\n", f, b);
				t1 = f + 1;
				e1.setcurrentFloor(b);
			}
			e1.setdestination(c);
			f = time2(c, b, t1+1);
			cout << f << " " << c << endl;//1
			fprintf(f1, "%d %d\n", f, c);
			t1 = f + 1;
			e1.setcurrentFloor(c);
		}
		else if (b % 2 == 0 && c % 2== 0)
		{
			if (a > t3)
				t3 = a;
			d = e3.getcurrentFloor();
			if (d != b)
			{
				f = time1(d, b, t3);
				cout << f << " " << b << endl;//3
				fprintf(f3, "%d %d\n", f, b);
				t3 = f + 1;
				e3.setcurrentFloor(b);
			}
			e3.setdestination(c);
			f = time2(c, b, t3);
			cout << f << " " << c << endl;//3
			fprintf(f3, "%d %d\n", f, c);
			t3 = f + 1;
			e3.setcurrentFloor(c);
		}
		else if (b ==1 && c % 2 == 0)
		{
			if (a > t3)
				t3 = a;
			d = e3.getcurrentFloor();
			if (d != b)
			{
				f = time1(d, b, t3);
				cout << f << " " << b << endl;//3
				fprintf(f3, "%d %d\n", f, b);
				t3 = f + 1;
				e3.setcurrentFloor(b);
			}
			e3.setdestination(c);
			f = time2(c, b, t3+1);
			cout << f << " " << c << endl;//3
			fprintf(f3, "%d %d\n", f, c);
			t3 = f + 1;
			e3.setcurrentFloor(c);
		}
		else 
		{
			if (a > t2)
				t2 = a;
			d = e2.getcurrentFloor();
			if (d != b)
			{
				f = time1(d, b, t2);
				cout << f << " " << b << endl;//2
				fprintf(f2, "%d %d\n", f, b);
				t2 = f + 1;
				e2.setcurrentFloor(b);
			}
			e2.setdestination(c);
			f = time2(c, b, t2);
			cout << f << " " << c << endl;//2
			fprintf(f2, "%d %d\n", f, c);
			t2 = f + 1;
			e2.setcurrentFloor(c);
		}
	}
}
