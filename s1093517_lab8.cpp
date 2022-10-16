#include <iostream>
#include <string>
	using namespace std ; 
	int main ()
	{
		int x,y,z,h;
		int a,b,c,d;
		
		cin >> a>>b>>c>>d>>x>>y>>z>>h ;
		if ( a> x && b > y && z > c && h > d )
		{
			cout << "yes 4 0" << endl ;
		}
		else if ( a< x && b < y && z < c && h < d )
		{
			cout << "yes 0 4" << endl ;
		}
		else if ( x > a && z > c && y > b && h > d)
		{
			cout << "yes 1 1" << endl ;
		}
		else if ( a!= x && b!=y && x==c && y==d )
		{
			cout << "yes 1 1" << endl ;
		}
		else if ( a < x && b > y && c < z && d > h && c>x &&h>b)
		{
			cout << "yes 1 1" << endl ;
		}
		else if ( c==x &&b==h&&a!= x && b!=y)
		{
			cout << "yes 1 1" << endl ;
		}
		else if ( a < x && b < y && c > z && d < h&& a < z && y > d )
		{
			cout << "yes 1 1" << endl ;
		}
		else if (a == z && d == y &&a!= x && b!=y )
		{
			cout << "yes 1 1" << endl ;
		}
		else if (a>x &&z< c&& b>y&& h>d)
		{
			cout << "yes 1 1" << endl ;
		}
		else if (a == z && h == b &&a!= x && b!=y )
		{
			cout << "yes 1 1" << endl ;
		}
		else if (h > d && z > c &&x == c&& x > a&& y<b && d!=y&&d!=h)
		{
			cout << "yes 2 0" << endl ;
		}
		else if (z>c&& h<d &&x<a&& y<b&& b==h&& a!=x && b!=z )
		{
			cout << "yes 2 0" << endl ;
		}
		else if (x<a&& y<b &&z<c &&h>d&& h==b&&b!=h&&b!=y)
		{
			cout << "yes 2 0" << endl ;
		}
		else if (c<z &&h>d&& x<a&& y>b &&y==d&&c!=x &&c!=z)
		{
			cout << "yes 2 0" << endl ;
		}
		
		else if (h < d && z < c &&x == c&& x < a&& y>b&& d!=y&&d!=h )
		{
			cout << "yes 0 2 " << endl ;
		}
		else if (z<c&& h>d &&x>a&& y>b&& b==h&& a!=x && b!=z)
		{
			cout << "yes 0 2 " << endl ;
		}
		else if (x>a&& y>b &&z>c &&h<d&& h==b&&b!=h&&b!=y)
		{
			cout << "yes 0 2 " << endl ;
		}
		else if (c>z &&h<d&& x>a&& y<b &&y==d&&c!=x &&c!=z)
		{
			cout << "yes 0 2 " << endl ;
		}
		
		else if (h > d && z > c &&x == c&& x > a&& y<b && d==y&&d==h)
		{
			cout << "yes 2 2" << endl ;
		}
		else if (z>c&& h<d &&x<a&& y<b&& b==h&& a==x && b==z )
		{
			cout << "yes 2 2" << endl ;
		}
		else if (x<a&& y<b &&z<c &&h>d&& h==b&&b==h&&b==y)
		{
			cout << "yes 2 2" << endl ;
		}
		else if (c<z &&h>d&& x<a&& y>b &&y==d&&c==x &&c==z)
		{
			cout << "yes 2 2" << endl ;
		} 
		
		else if (h < d && z < c &&x == c&& x < a&& y>b&& d==y&&d==h )
		{
			cout << "yes 2 2 " << endl ;
		}
		else if (z<c&& h>d &&x>a&& y>b&& b==h&& a==x && b==z)
		{
			cout << "yes 2 2 " << endl ;
		}
		else if (x>a&& y>b &&z>c &&h<d&& h==b&&b==h&&b==y)
		{
			cout << "yes 2 2 " << endl ;
		}
		else if (c>z &&h<d&& x>a&& y<b &&y==d&&c==x &&c==z)
		{
			cout << "yes 2 2 " << endl ;
		}
		
		else if (h > d && z > c &&x == c&& x > a&& y<b && d!=y&&d==h)
		{
			cout << "yes 2 1" << endl ;
		}
		else if (h > d && z > c &&x == c&& x > a&& y<b && d==y&&d!=h)
		{
			cout << "yes 2 1" << endl ;
		}
		else if (z>c&& h<d &&x<a&& y<b&& b==h&& a!=x && b==z )
		{
			cout << "yes 2 1" << endl ;
		}
		else if (z>c&& h<d &&x<a&& y<b&& b==h&& a==x && b!=z )
		{
			cout << "yes 2 1" << endl ;
		}
		else if (x<a&& y<b &&z<c &&h>d&& h==b&&b!=h&&b==y)
		{
			cout << "yes 2 1" << endl ;
		}
		else if (x<a&& y<b &&z<c &&h>d&& h==b&&b==h&&b!=y)
		{
			cout << "yes 2 1" << endl ;
		}
		else if (c<z &&h>d&& x<a&& y>b &&y==d&&c!=x &&c==z)
		{
			cout << "yes 2 1" << endl ;
		} 
		else if (c<z &&h>d&& x<a&& y>b &&y==d&&c==x &&c!=z)
		{
			cout << "yes 2 1" << endl ;
		} 
		
		else if (h < d && z < c &&x == c&& x < a&& y>b&& d==y&&d!=h )
		{
			cout << "yes 1 2 " << endl ;
		}
		else if (h < d && z < c &&x == c&& x < a&& y>b&& d!=y&&d==h )
		{
			cout << "yes 1 2 " << endl ;
		}
		else if (z<c&& h>d &&x>a&& y>b&& b==h&& a!=x && b==z)
		{
			cout << "yes 1 2 " << endl ;
		}
		else if (z<c&& h>d &&x>a&& y>b&& b==h&& a==x && b!=z)
		{
			cout << "yes 1 2 " << endl ;
		}
		else if (x>a&& y>b &&z>c &&h<d&& h==b&&b!=h&&b==y)
		{
			cout << "yes 1 2 " << endl ;
		}
		else if (x>a&& y>b &&z>c &&h<d&& h==b&&b==h&&b!=y)
		{
			cout << "yes 1 2 " << endl ;
		}
		else if (c>z &&h<d&& x>a&& y<b &&y==d&&c!=x &&c==z)
		{
			cout << "yes 1 2 " << endl ;
		}
		else if (c>z &&h<d&& x>a&& y<b &&y==d&&c==x &&c!=z)
		{
			cout << "yes 1 2 " << endl ;
		}
		else if (z>c &&d==h&& a==x &&b==y)
		{
			cout << "yes 4 2 " << endl ;
		}
		else if (c==z &&d==h&& y==b &&a>x)
		{
			cout << "yes 4 2 " << endl ;
		}
		else if (a==x&& b>y&& c==z&& d==h) 
		{
			cout << "yes 4 2 " << endl ;
		}
		else if (a==x &&b==y &&z>c&& h>d) 
		{
			cout << "yes 4 2 " << endl ;
		}
		
		else if (z<c &&d==h&& a==x&& b==y)
		{
			cout << "yes 2 4 " << endl ;
		}
		else if (c==z&& d==h&&y==b &&a<x)
		{
			cout << "yes 2 4 " << endl ;
		}
		else if (a==x &&b<y &&c==z&& d==h) 
		{
			cout << "yes 2 4 " << endl ;
		}
		else if (a==x&& b==y &&z<c&& h<d) 
		{
			cout << "yes 2 4 " << endl ;
		}
		else if ( d==h &&z>c &&a==x&& b>y)
		{
			cout << "yes 4 1 " << endl ;
		}
		else if ( c==z&& d==h &&a>x &&b>y)
		{
			cout << "yes 4 1 " << endl ;
		}
		else if ( z>c &&h>d &&x>a &&y==b)
		{
			cout << "yes 4 1 " << endl ;
		}
		else if (z==c&& h>d&&  y==b&& x<a) 
		{
			cout << "yes 4 1 " << endl ;
		}
		else if ( d==h &&z<c&& a==x&& b<y)
		{
			cout << "yes 1 4" << endl ;
		}
		else if ( c==z&& d==h &&a<x &&b<y)
		{
			cout << "yes 1 4" << endl ;
		}
		else if ( z<c &&h<d&& x<a &&y==b)
		{
			cout << "yes 1 4" << endl ;
		}
		else if (z==c &&h<d && y==b &&x>a)
		{
			cout << "yes 1 4" << endl ;
		}
		else {
			cout << "no" <<endl ;
		}
		return 0 ;
	 } 
