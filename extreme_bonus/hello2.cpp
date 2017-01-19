


#include <iostream> // cout and more
#include <string>   // Strings
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <pwd.h>
using namespace std;


//cin takes input

int main(){

	string Name;
	#ifdef OS_WIN

	#else
		passwd *pwd;
		pwd = getpwuid(getuid());
		Name = pwd->pw_name;
	#endif


	cout << "Hello, " << Name << "!" << endl;
}
