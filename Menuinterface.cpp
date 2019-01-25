#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    long long m=2;
    long int *input=new long int[m];
    char p,a,d,r,e;
    char c;
    int k=0;
    menu:
    cout<<"(p): Print elements"<<endl;
    cout<<"(a): Add element"<<endl;
    cout<<"(d): Delete element"<<endl;
    cout<<"(r): Return size"<<endl;
    cout<<"(e): Exit"<<endl<<endl;
    cout<<"Enter option:";
    cin >> c;
    int q=0;
    int w=0;
    switch(c)
    {
    case 'p':
            if(k!=0 || *input!=0)
            {
                int i;
                cout<<input[0];
                for(i=1;i<k;i++)
                {
                    cout<<","<<input[i];
                }
                cout<<endl;
            }
            else
            {
             cout<<"No elements"<<endl;
            }
            cout<<endl;
            goto menu;
            break;

    case 'a':
        cout << "Enter element ";
        if(m>k)
        {
        cin >> input[k];
        long int *p=new long int[k];
        *p=input[k];
        }
        while(m<=k)
        {
            m=m*2;
            cin >> input[k];
            long int *p=new long int[k];
            *p=input[k];
            cout<<"Array expanded"<<endl;
            cout<<"Previous array deallocated";
            cout<<endl;
        }
        k++;
        delete[] input;
        cout<<endl;
        goto menu;
        break;

    case 'd':
        int u;
        cout<<"Enter the number to be removed from the array ";
        cin>>u;
        while(q<m && *input!=0)
        {
        if(input[q]==u)
        {
            while(input[q]!=0)
            {
            input[q]=input[q+1];
            q++;
            }
            w=w+1;
            if(q>(m/2))
            {
                long int *p=new long int[q];
                *p=input[q];
            }
            else if(q<=(m/2))
            {
                m=(m/2);
                long int *p=new long int[q];
                *p=input[q];
               // input=input/2;
            }
            delete &input[(q-1)];
            delete[] input;
            cout<<"Previous array is deallocated";
        }
        q++;
        }
        if(w==0)
        {
            cout<<"Not there";
            k=k-1;
        }
        else
        {
            k=k-1;
        }

        cout<<endl;
        cout<<endl;
        goto menu;
        break;

    case 'r':
        if(k<=m/2)
        {
        m=m/2;
        cout<<"S: "<<m<<","<<" "<<"E: "<<k<<endl;
        }
        else
        {
        cout<<"S: "<<m<<","<<" "<<"E: "<<k<<endl;
        }
        cout<<endl;
        goto menu;
        break;
    case 'e':
        break;

    default:
        cout<<"You pressed the wrong choice!!"<<endl<<endl;
        goto menu;
        break;
    }
}
