#include "BinTree.hh"
#include "maximumTree.hh"

BinTree<int> maximumTree(BinTree<int> t1, BinTree<int> t2)
{
    if (t1.empty() and t2.empty())
    {
        return BinTree<int>();
    }
    else if (t1.empty() and not t2.empty())
    {
        return t2;
    }
    else if (not t1.empty() and t2.empty())
    {
        return t1;
    }
    else
    {
        int x, y;
        if (t1.empty())
        {
            x = 0;
        }
        else
        {
            x = t1.value();
        }
        if (t2.empty())
        {
            y = 0;
        }
        else
        {
            y = t2.value();
        }
        int z;
        if (x > y)
        {
            z = x;
        }
        else z = y;

        BinTree<int> maxl,maxr;
        BinTree<int> left1=t1.left();
        BinTree<int> left2=t2.left();
        BinTree<int> right1=t1.right();
        BinTree<int> right2=t2.right();

        if(not right1.empty() and not right2.empty()){
            maxr=maximumTree(right1,right2);
        }
        else if(not right1.empty() and right2.empty()){
            maxr=right1;
        }
        else maxr=right2;


        if(not left1.empty() and not left2.empty()){
            maxl=maximumTree(left1,left2);
        }
        else if(not left1.empty() and left2.empty()){
            maxl=left1;
        }
        else maxl=left2;


        BinTree<int> t3(z,maxl,maxr);
        return t3;







    }
}