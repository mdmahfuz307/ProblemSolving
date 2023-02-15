// 131A - cAPS lOCK
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   char nir;
   bool sho = true;
   cin >> s;

   for (int i = 1; i < s.length(); i++)
   {
       if (islower(s[i]))
       {
           sho = false;
       }
   }

   if (sho == true)
   {
       for (int j = 0; j < s.length(); j++)
       {
           if (islower(s[j]))
               nir = toupper(s[j]);
           else
               nir = tolower(s[j]);
           cout << nir;
       }
   }
   else
       cout << s;
   return 0;
}