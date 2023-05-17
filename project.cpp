#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;

int cheapest=0, expensive=0, amt=10, front =4;
bool new_destination= false;
string store_stack[10]={"Samuel", "Natnael", "Tina", "Bilisuma", "Bitanya"};



struct Node
{
    string name;
    int data;
    Node* left= NULL;
    Node* right= NULL;
};
Node* root;
Node* start= new Node;
Node* last= new Node;

bool empty(Node* n)
{
    if(n==NULL)
    {
        return true;
    }

    return false;
}

void create_destination(Node* n)
{
    if(n==NULL)
    {
        Node* first=new Node;
        cout<<"where does the travel plan you are providing for your customers begin from?"<<endl;
        cin>>first->name;
        first->data= 0;
        first->right= NULL;
        first->left= NULL;
        n=first;
        start->name= first->name;
    }
    else
    {
        Node* S= new Node;
        cout<<"what is the name of the next destination?"<<endl;
        cin>>S->name;
        cout<<"how much do you charge to go here, preferably the cheaper option?to "<<S->name<<" through "<<n->name<<endl;
        cin>>S->data;
        ::cheapest += S->data;
        n->left= S;
        n->name=S->name;

        Node* T= new Node;
        cout<<"how much do you charge, preferably the expensive possible answer?to "<<S->name<<" through "<<n->name<<endl;
        cin>>T->data;
        ::expensive +=T->data;
        n->right=T;
        last->name= S->name;
    }
    string x;
    cout<<"you want to add more destinations?(yes/no)"<<endl;
    cin>>x;
    if(x !="yes" && x!="no")
    {
        do{
            cout<<"please select from the top alternatives!!"<<endl;
            cin>>x;
        }while(x!="yes" && x!="no");
    }
    if(x=="yes")
    {
        create_destination(n);
    }
    else
    {
        n->left=NULL;
        n->right=NULL;
    }

    if(::cheapest > ::expensive)
    {
        int temp;
        temp = ::cheapest;
        ::cheapest=::expensive;
        ::expensive= temp;
    }


    ::new_destination= true;
}

string destination_1()
{
    ::cheapest=0;
    ::expensive=0;
    string first_destination= "This destination is from Ethiopia to USA through Togo";
    Node* first=new Node;
    first->data= 0;
    root= first;

    Node* second= new Node;
    second->data= 1000;
    ::cheapest+= second->data;
    first->left=second;

    Node* third= new Node;
    third->data= 2000;
    ::expensive += third->data;
    first->right= third;

    Node* fourth= new Node;
    fourth->data= 10000;
    ::cheapest+=fourth->data;
    second->left= fourth;

    Node* fifth= new Node;
    fifth->data= 20000;
    ::expensive+=fifth->data;
    second->right=fifth;

    if(::cheapest > ::expensive)
    {
        int temp;
        temp = ::cheapest;
        ::cheapest=::expensive;
        ::expensive= temp;
    }

    return first_destination;

}

string destination_2()
{
    ::cheapest=0;
    ::expensive=0;
    string second_destination= "This destination is from Addis Ababa to Hawassa through Shashemene";
    Node* first=new Node;
    first->data= 0;
    root= first;

    Node* second= new Node;
    second->data= 200;
    ::cheapest+= second->data;
    first->left=second;

    Node* third= new Node;
    third->data= 1000;
    ::expensive += third->data;
    first->right= third;

    Node* fourth= new Node;
    fourth->data= 1000;
    ::cheapest+=fourth->data;
    second->left= fourth;

    Node* fifth= new Node;
    fifth->data= 2000;
    ::expensive+=fifth->data;
    second->right=fifth;

    if(::cheapest > ::expensive)
    {
        int temp;
        temp = ::cheapest;
        ::cheapest=::expensive;
        ::expensive= temp;
    }

    return second_destination;
}

void check_password()
{
    fstream inFile;
    string pass,retrieved, filename;
    cout<<"enter password: ";
    cin>>pass;
    filename="password.txt";
    inFile.open(filename.c_str());
    inFile>>retrieved;
    if (retrieved != pass)
    {
        cout<<"wrong password"<<endl;
        check_password();
    }
}

int check_sign_in()
{
    int x;
    int variable;
    cin>>variable;
    switch(variable)
    {
        case 1:
            {
            check_password();
            cout<<"you have signed in as  adminstrator!!"<<endl;
            x=1;
            return x;
            }
        case 2:
            {
            cout<<"you have signed in as a user!!"<<endl;
            x=2;
            return x;
            }
        default:
            {
            cout<<"please select from the top alternaives"<<endl;
            check_sign_in();
            break;
            }
    }
}

void introduction()
{
    cout<<setw(100)<<setfill('>')<<" Welcome to Tekuami, Your number one travel booking site!!!"<<setw(50)<<setfill('<')<<"."<<endl;
    cout<<"\n \n"<<endl;
    cout<<setw(40)<<setfill(' ')<<"1.log in as administrator"<<endl;
    cout<<setw(50)<<setw(' ')<<"2. log in as user"<<endl;

}

void user_only()
{
    cout<<setw(100)<<setfill('>')<<" Welcome to Tekuami, Your number one travel booking site!!!"<<setw(50)<<setfill('<')<<"."<<endl;
    cout<<"\n \n"<<endl;
    cout<<setw(40)<<setfill(' ')<<"1.log in as user"<<endl;
}

string enter_name()
{
    int x;
    string name;
    cout<<"enter name: "<<endl;
    cin>> name;
    return name;
}

void store(int a, string b)
{
    if(::front >= a)
    {
        cout<<"we are full for the day"<<endl;
    }
    else
    {
        ::front++;
        ::store_stack[::front]=b;
    }

}
void bubble_sort(string a[])
{
    cout<<"This method of sorting uses the bubble sort algortithm "<<endl;
    string temp;
    for(int i=0; i<::amt; i++)
    {
        for(int j=0; j<::amt-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp= a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<::amt; i++)
    {
        cout<<a[i]<<" ";
    }

}

void heapify(string arr[], int n, int i)
{
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void advanced_sort(string arr[], int n)
{
    cout<<"this method of sorting uses the heap sort algorithm"<<endl;
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);

        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}
void sorting(string a[])
{
    cout<<"usorted: "<<endl;

    for(int i=0; i<::amt; i++)
    {
          cout<<a[i]<<" ";
    }

    cout<<endl;
    int x;
    cout<<"which method do you want to use to sort the list"<<endl;
    cout<<"1. method 1 \n2. method 2"<<endl;
    cin>>x;
    switch(x)
    {
        case 1:
        {
            bubble_sort(::store_stack);
            break;
        }
        case 2:
        {
            advanced_sort(::store_stack , ::front+1);
            break;
        }
        default:
        {
            cout<<"please select from the given alternatives!!"<<endl;
            sorting(::store_stack);
        }
    }
}

string search()
{
    string a, result;
    cout<<"whose name do you want to search? "<<endl;
    cin>>a;
    for(int i=0; i<(::amt); i++)
    {
        if (::store_stack[i]==a)
        {
            result = a + " has been found!";
            return result;
        }
    }

    cout<<a<<" This name has not registered. Please enter name again with correct spelling!"<<endl;
    search();
}

int the_cheapest()
{
    return ::cheapest;
}
int most_comfortable()
{
    return ::expensive;
}

void select_price(string x)
{
    int num=0;
    string date;
    int choice;
    cout<<x<<" do you want the cheapest package or the most comfortable package? \n1. cheapest :"<<::cheapest<<"\n2. most comfortable: "<<::expensive<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"the cheapest price for your package is "<<the_cheapest()<<endl;
            num=1;
            cout<<"enter date"<<endl;
            cin>>date;
            break;
        case 2:
            cout<<"the most comfortable price for your package is "<<most_comfortable()<<endl;;
            num=2;
            cout<<"enter date"<<endl;
            cin>>date;
            break;
        default:
            cout<<"select from the given alternatives"<<endl;
            select_price(x);
            break;
    }
    string filename= "file.txt";
    ofstream outfile;
    outfile.open(filename.c_str());
    if (num==1)
    {
        outfile<<"User registered: "<<x<<"\nPackage picked:  Cheapest package -"<<the_cheapest()<<"\nDate: "<<date<<endl;
    }
    else if(num==2)
    {
        outfile<<"User registered: "<<x<<"\nPackage picked:  Most comfortable package -"<<most_comfortable()<<"\nDate: "<<date<<endl;
    }

}

void select_path()
{
    int x;
    cout<<"select your destination:\n 1. From Ethiopia to USA:\n 2. From Addis Ababa to Hawassa"<<endl;
    if (new_destination== true)
    {
        cout<<" 3. new destination, from "<<start->name<<" to "<<last->name<<endl;
    }
    cin>>x;
    switch(x)
    {
        case 1:
        {
            destination_1();
            break;
        }
        case 2:
        {
            destination_2();
            break;
        }
        case 3:
        {
            break;
        }
        default:
        {
            cout<<"please select from the given alternatives!!"<<endl;
            select_path();
            break;
        }
    }
}

void Admin_only()
{
    cout<<setw(100)<<setfill('>')<<" Welcome to Tekuami, Your number one travel booking site!!!"<<setw(50)<<setfill('<')<<"."<<endl;
    cout<<"\n \n"<<endl;
    cout<<setw(40)<<setfill(' ')<<"1.log in as administrator"<<endl;
}


void user_login();

void operation(int hold, bool a)
{
    if(hold==1)
    {
        cout<<"which operation do you want to do?"<<endl;
        if(::new_destination==true)
        {
            cout<<"2.sort \n3.search"<<endl;
        }
        else
        {cout<<"1.create destination \n2.sort \n3.search"<<endl;}

        int options;
        cin>>options;
        switch(options)
        {
            case 1:
            {
                create_destination(root);
                user_only();
                user_login();
                break;
            }
            case 2:
            {
                sorting(::store_stack);
                break;
            }
            case 3:
            {
                cout<<search();
                break;
            }
            default:
            {
                cout<<"please select from the given alternatives!!"<<endl;
                operation(hold,a);
                break;
            }
        }

    }
    else if(hold==2)
    {
        user_login();
    }

}

void user_login()
{
    string name= enter_name();
    store(::amt, name);
    select_path();
    select_price(name);
    Admin_only();
    bool a= empty(root);
    operation(1, a);
}

int main()
{
    introduction();
    int hold =check_sign_in();
    bool isempty= empty(root);
    operation(hold, isempty);

    cout<<"\n\nTHANKS FOR USING OUR WEBSITE!!!";

return 0;

}
