#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef USUARIO_H
#define USUARIO_H
class Usuario{
	protected:
		string password;
		string user;
	public:
		Usuario(string,string);
		Usuario();
		string getPassword();
		void setPassword(string);

		string getUser();
		void setUser(string);

		virtual void metodo();


};
#endif
