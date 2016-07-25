#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student{
	private:
		int age, standard;
		string first_name, last_name;
	public:
		void set_age(int a){
			age = a;
		}
		void set_first_name(string fn){
			first_name = fn;
		}
		void set_last_name(string ln){
			last_name = ln;
		}
		void set_standard(int s){
			standard = s;
		}
		int get_age(){
			return age;
		}
		string get_first_name(){
			return first_name;
		}
		string get_last_name(){
			return last_name;
		}
		int get_standard(){
			return standard;
		}
		string IntToString ( int number ){
		  std::ostringstream oss;
		  oss<< number;
		  return oss.str();
		}
		string to_string(){
			string ans;
			ans =  IntToString(get_age())  +  "," + get_first_name() +  "," +
					get_last_name() +  "," + IntToString(get_standard());
			return ans;
		}
};

int main(){
	 int age, standard;
	    string first_name, last_name;

	    cin >> age >> first_name >> last_name >> standard;

	    Student st;
	    st.set_age(age);
	    st.set_standard(standard);
	    st.set_first_name(first_name);
	    st.set_last_name(last_name);

	    cout << st.get_age() << "\n";
	    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	    cout << st.get_standard() << "\n";
	    cout << "\n";
	    cout << st.to_string();
	return 0;
}
