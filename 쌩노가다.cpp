#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char buf[10000];
	cout << "히스토그램을 그립니다. 텍스트의 끝은 ; 이고\n10000개 문자까지 가능합니다. 영문 텍스트를 입력하세요.\n";
	cin.getline(buf, 10000, ';');

	int total = 0;
	int a_count=0;
	int b_count=0;
	int c_count=0;
	int d_count=0;
	int e_count=0;
	int f_count=0;
	int g_count=0;
	int h_count=0;
	int i_count=0;
	int j_count=0;
	int k_count=0;
	int l_count=0;
	int m_count=0;
	int n_count=0;
	int o_count=0;
	int p_count=0;
	int q_count=0;
	int r_count = 0;
	int s_count=0;
	int t_count=0;
	int u_count=0;
	int v_count=0;
	int w_count=0;
	int x_count=0;
	int y_count=0;
	int z_count=0;

	for (int i = 0;i < strlen(buf);i++)
	{
		if (buf[i] == 'a'||buf[i]=='A')
		{
			a_count++;
		}
		else if (buf[i] == 'b' || buf[i] == 'B')
		{
			b_count++;
		}
		else if (buf[i] == 'c' || buf[i] == 'C')
		{
			c_count++;
		}
		else if (buf[i] == 'd' || buf[i] == 'D')
		{
			d_count++;
		}
		else if (buf[i] == 'e' || buf[i] == 'E')
		{
			e_count++;
		}
		else if (buf[i] == 'f' || buf[i] == 'F')
		{
			f_count++;
		}
		else if (buf[i] == 'g' || buf[i] == 'G')
		{
			g_count++;
		}
		else if (buf[i] == 'h' || buf[i] == 'H')
		{
			h_count++;
		}
		else if (buf[i] == 'i' || buf[i] == 'I')
		{
			i_count++;
		}
		else if (buf[i] == 'j' || buf[i] == 'J')
		{
			j_count++;
		}
		else if (buf[i] == 'k' || buf[i] == 'K')
		{
			k_count++;
		}
		else if (buf[i] == 'l' || buf[i] == 'L')
		{
			l_count++;
		}
		else if (buf[i] == 'm' || buf[i] == 'M')
		{
			m_count++;
		}
		else if (buf[i] == 'n' || buf[i] == 'N')
		{
			n_count++;
		}
		else if (buf[i] == 'o' || buf[i] == 'O')
		{
			o_count++;
		}
		else if (buf[i] == 'p' || buf[i] == 'P')
		{
			p_count++;
		}
		else if (buf[i] == 'q' || buf[i] == 'Q')
		{
			q_count++;
		}
		else if (buf[i] == 'r' || buf[i] == 'R')
		{
			r_count++;
		}
		else if (buf[i] == 's' || buf[i] == 'S')
		{
			s_count++;
		}
		else if (buf[i] == 't' || buf[i] == 'T')
		{
			t_count++;
		}
		else if (buf[i] == 'u' || buf[i] == 'U')
		{
			u_count++;
		}
		else if (buf[i] == 'v' || buf[i] == 'V')
		{
			v_count++;
		}
		else if (buf[i] == 'w' || buf[i] == 'W')
		{
			w_count++;
		}
		else if (buf[i] == 'x' || buf[i] == 'X')
		{
			x_count++;
		}
		else if (buf[i] == 'y' || buf[i] == 'Y')
		{
			y_count++;
		}
		else if (buf[i] == 'z' || buf[i] == 'Z')
		{
			z_count++;
		}
		else
			continue;
	}
	total = a_count + b_count + c_count + d_count + e_count + f_count + g_count + h_count + i_count + j_count + k_count + l_count + m_count + n_count + o_count + p_count + q_count + r_count + s_count + t_count + u_count + v_count + w_count + x_count + y_count + z_count;
	cout << "총 알파벳 수" << total;
	cout << '\n';

	cout << "a(" << a_count << ") : ";
	for (int i = 0;i < a_count;i++)
		cout << "*";
	cout << '\n';
	cout << "b(" << b_count << ") : ";
	for (int i = 0;i < b_count;i++)
		cout << "*";
	cout << '\n';
	cout << "c(" << c_count << ") : ";
	for (int i = 0;i < c_count;i++)
		cout << "*";
	cout << '\n';
	cout << "d(" << d_count << ") : ";
	for (int i = 0;i < d_count;i++)
		cout << "*";
	cout << '\n';
	cout << "e(" << e_count << ") : ";
	for (int i = 0;i < e_count;i++)
		cout << "*";
	cout << '\n';
	cout << "f(" << f_count << ") : ";
	for (int i = 0;i < f_count;i++)
		cout << "*";
	cout << '\n';
	cout << "g(" << g_count << ") : ";
	for (int i = 0;i < g_count;i++)
		cout << "*";
	cout << '\n';
	cout << "h(" << h_count << ") : ";
	for (int i = 0;i < h_count;i++)
		cout << "*";
	cout << '\n';
	cout << "i(" << i_count << ") : ";
	for (int i = 0;i < i_count;i++)
		cout << "*";
	cout << '\n';
	cout << "j(" << j_count << ") : ";
	for (int i = 0;i < j_count;i++)
		cout << "*";
	cout << '\n';
	cout << "k(" << k_count << ") : ";
	for (int i = 0;i < k_count;i++)
		cout << "*";
	cout << '\n';
	cout << "l(" << l_count << ") : ";
	for (int i = 0;i < l_count;i++)
		cout << "*";
	cout << '\n';
	cout << "m(" << m_count << ") : ";
	for (int i = 0;i < m_count;i++)
		cout << "*";
	cout << '\n';
	cout << "n(" << n_count << ") : ";
	for (int i = 0;i < n_count;i++)
		cout << "*";
	cout << '\n';
	cout << "o(" << o_count << ") : ";
	for (int i = 0;i < o_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "p(" << p_count << ") : ";
	for (int i = 0;i < p_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "q(" << q_count << ") : ";
	for (int i = 0;i < q_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "r(" << r_count << ") : ";
	for (int i = 0;i < r_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "s(" << s_count << ") : ";
	for (int i = 0;i < s_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "t(" << t_count << ") : ";
	for (int i = 0;i < t_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "u(" << u_count << ") : ";
	for (int i = 0;i < u_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "v(" << v_count << ") : ";
	for (int i = 0;i < v_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "w(" << w_count << ") : ";
	for (int i = 0;i < w_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "x(" << x_count << ") : ";
	for (int i = 0;i < x_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "y(" << y_count << ") : ";
	for (int i = 0;i < y_count;i++)
		cout << "*" ;
	cout << '\n';
	cout << "z(" << z_count << ") : ";
	for (int i = 0;i < z_count;i++)
		cout << "*";
	cout << '\n';

	return 0;
}
