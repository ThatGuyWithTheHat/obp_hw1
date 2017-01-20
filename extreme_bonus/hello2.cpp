#include <iostream> // cout and more
#include <string>   // Strings
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <pwd.h>
#include <windows.h>
#include <Lmcons.h>

using namespace std;


//cin takes input

int main(){

	string Name;
	#ifdef OS_WIN
		char username[UNLEN+1];
		DWORD username_len = UNLEN+1;
		GetUserName(username, &username_len);
		Name = username;
	#else
		passwd *pwd;
		pwd = getpwuid(getuid());
		Name = pwd->pw_name;
	#endif


	cout << "Hello, " << Name << "!" << endl;
}
