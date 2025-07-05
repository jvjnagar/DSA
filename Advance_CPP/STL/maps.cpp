#include <map> //The map include file is used for both map and multimap
#include <string>
#include <iostream>
using namespace std;
int main() {
    // Creates an empty map
    map<string,string> addressbook;
    // Maps and multimaps deal with pairs    
	pair<string,string> p1("aaaa","123 Seseme St.");    
	// Insert values into the phonebook  
	addressbook.insert(p1);
    // define a useful type
    typedef pair<string,string> entry;   
	entry p2("bbbb","125 Seseme St."); 
	//pair<string,string> p2("bbbb","125 Seseme St.");   
	addressbook.insert(p2);
    addressbook.insert(entry("cccc","199 Seseme St."));
    addressbook.insert(entry("dddd","99 Seseme St."));
    // The iterator points to a pair, rather than a single value   
	map<string,string>::iterator iter;  
	// Look up my address 
		// Note that a direct query of a map causes insertion of a 
		// record if the key does not already exist.    
		cout << "Finding aaaa address" << endl;    
	cout << "aaaa lives at " << addressbook["aaaa"] << endl; 
	cout << endl; 
	char name[10]="dddd222";
    iter = addressbook.find(name);
    if (iter != addressbook.end()) 
	{
cout << iter->first << " lives at " << iter->second << endl;
	}
    else {        cout <<name<<"  not found" << endl;}
	return 0;
}




