#include <iostream>
#include <stdlib.h>
#include<stdio.h>
int main()
{
   using namespace std;
   int a[50],i,size,pos,ele;
   cout<<"enter the size of an array"<<endl;
   cin>>size;
  cout<<"enter the array elements:"<<endl;
  //traversal
  for(i=0;i<size;i++)
  {
      cin>>a[i];
  }
  cout<<"the array are:"<<endl;
    for(i=0;i<size;i++)
  {
      cout<<a[i]<<endl;
  }
  // .........................................................................................................
do
{
    int j;
    cout<<"which operation do you wanna perform"<<endl;
    cout<<"1.insertion"<<endl<<"2.deletion"<<endl<<"3.seaeching"<<endl<<"4.traverse"<<endl;
    cin>>j;
    
    
   // cout<<"1.insertion"<<endl;
    switch(j)
  {
    case 1:
    {
        cout<<"enter the position "<<endl;
  cin>>pos;
  cout<<"enter the new array elements "<<endl;
  cin>>ele;
 
if(pos<=0 || pos>size+1 )//invalid condition
  {
      cout<<"invalid position"<<endl;
  }
  
else if(pos==1) // inserting at start
        {
            for(i=size-1;i>=0;i--)
                {
                    a[i+1]=a[i];
                }
            size++;
            a[0]=ele;
        }
  
else if (pos==size) //insert at end
        {
            a[size]=ele;
            size+=1;
        }
  
  
else  // insrert at given position
    {
        for (i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
    a[pos-1]=ele;
    size+=1;
    }

  cout<<"the new array are:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
        break;
    }
    
    
    case 2:
    {
        cout<<"enter the position of an element which do you want delete "<<endl;
cin>>pos;
int item=a[pos-1];
 //printf("%d",item);
for(i=pos-1;i<size;i++)
{
    a[i]=a[i+1];
}
size--;
printf("deleted element=%d\n",item);
cout<<"the new array are:"<<endl;
     for(i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
        break;
    }
    case 3:
    {
        cout<<"enter the position which do you wanna search\n"<<endl;
cin>>pos;
int d=a[pos-1];
int flag=0;
for(i=0;i<size;i++)
{
    if(a[i]==d)
    {
        flag=1;
        break;
        //cout<<"element found at"<<i<<endl;
    }
}
if(flag==1)
{
    cout<<"element found at" <<" "<<i<<endl; 
}
else
{
   cout<<"element not found at"<<endl; 
}
        break;
    }
case 4:
    cout<<"the array are:"<<endl;
    for(i=0;i<size;i++)
  {
      cout<<a[i]<<endl;
  }
    default:
    cout<<"no such case"<<endl;
    
} 
}while(0);
// switch()
// {
//     case 1:
//     {
            
//         break;
//     }
//     case 2:
//     {
//         break;
//     }
//     case 3:
//     {
//         break;
//     }
//     default:
//     cout<<"no such case"<<endl;
    
// }
  //insertion:::
//   cout<<"enter the position "<<endl;
//   cin>>pos;
//   cout<<"enter the new array elements "<<endl;
//   cin>>ele;
 
// if(pos<=0 || pos>size+1 )//invalid condition
//   {
//       cout<<"invalid position"<<endl;
//   }
  
// else if(pos==1) // inserting at start
//         {
//             for(i=size-1;i>=0;i--)
//                 {
//                     a[i+1]=a[i];
//                 }
//             size++;
//             a[0]=ele;
//         }
  
// else if (pos==size) //insert at end
//         {
//             a[size]=ele;
//             size+=1;
//         }
  
  
// else  // insrert at given position
//     {
//         for (i=size-1;i>=pos-1;i--)
//         {
//             a[i+1]=a[i];
//         }
//     a[pos-1]=ele;
//     size+=1;
//     }

//   cout<<"the new array are:"<<endl;
//     for(i=0;i<size;i++)
//     {
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }
// //..................................................................................................

// //deletion

// cout<<"enter the position of an element which do you want delete "<<endl;
// cin>>pos;
// int item=a[pos-1];
//  //printf("%d",item);
// for(i=pos-1;i<size;i++)
// {
//     a[i]=a[i+1];
// }
// size--;
// printf("deleted element=%d\n",item);
// cout<<"the new array are:"<<endl;
//      for(i=0;i<size;i++)
//     {
//         cout<<a[i]<<endl;
//     }
    
// //...........................................................................................
// //seaeching

// cout<<"enter the position which do you wanna search\n"<<endl;
// cin>>pos;
// int d=a[pos-1];
// int flag=0;
// for(i=0;i<size;i++)
// {
//     if(a[i]==d)
//     {
//         flag=1;
//         break;
//         //cout<<"element found at"<<i<<endl;
//     }
// }
// if(flag==1)
// {
//     cout<<"element found at" <<" "<<i<<endl; 
// }
// else
// {
//   cout<<"element not found at"<<endl; 
// }
    
 return 0;
}






