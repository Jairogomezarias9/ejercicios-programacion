#include <iostream>
#include <list>
using namespace std;
int buscamin( list<int> l){
    
    list<int>:: const_iterator it=l.begin();
    int min=*it;
    ++it;
    
    while(it!=l.end()){
        if(*it<min){
            min=*it;

        }


        ++it;
    }
    return min;


}
int buscamax( list<int> l){
    
    list<int>:: const_iterator it=l.begin();
    int max=*it;
    ++it;
    
    while(it!=l.end()){
        if(*it>max){
            max=*it;

        }


        ++it;
    }
    return max;
    

}

void eliminar(list<int>& l, int n, double &mitjana){
    list<int>:: const_iterator it=l.begin();
    bool trobat=false;
    

    while(it!=l.end() and not trobat){
        if(n==*it){
            trobat=true;
            mitjana-=n;
            it=l.erase(it);
        }
       else ++it;
    }
}



int main()
{
    int n, num;
    list<int> l;
    int min = 0;
    int max = 0;
    double mitjana = 0;

    cin >> n >> num;
    while (n != 0 and num != 0)
    {
        if (n == -1)
        {
            if (l.empty())
            {
                max = min = num;
            }
            else
            {
                if (num > max)
                {
                    max = num;
                }
                else if (num < min)
                {
                    min = num;
                }
            }
            l.push_back(num);
            mitjana+=num;
        }
        

        else if(n==-2){
            if(l.empty()){
                min=max=0;
            }
            else{
                eliminar(l,num,mitjana);
                if(not l.empty()){
                    if(num>=max){
                        max=buscamax(l);
                    }
                    else if(num<=min){
                        min=buscamin(l);
                    }

                }

            }

        }
        

        if(l.empty()){
            cout<<"0"<<endl;
            mitjana=0;
        }
        else {
            cout<<min<<" "<<max<<" "<<mitjana/l.size()<<endl;
        }






        cin >> n >> num;
    }
}