//Copied
#include <iostream> 
using namespace std;
const int N=3;
class Group{
    private:
        int num;
        static int blackList[N];
        static int size;
    public:
        Group();
        Group(int num, bool bSign);
        static void addToList(int num);
        static void removeFromList(int num);
        static void displayList();
};

int Group::size=0;
int Group::blackList[N]={0};

void Group::removeFromList(int num){
	int i=0;
	for(;i<N;i++){
		if(num==blackList[i]){
			for(int j=i;j<size-1;j++){
				blackList[j]=blackList[j+1];
			}
			blackList[--size]=0;
			break;
		}
	}
}

Group::Group(){}

Group::Group(int num,bool bSign)
{
	this->num=num;
	if(bSign){
		addToList(num);
	}
}

void Group::addToList(int num)
{
	if(size==N){
		removeFromList(blackList[0]);
	}
	blackList[size++]=num;
}

int main(){
    int i, j, k, num, task, count=0;
    Group g[100];
    cin>>task;
    while(task!=0){
        switch(task){
            case 1: cin>>num>>k; 
                      if(k==999) {
                          g[count++]=Group(num, true);
                          cin>>task;
                      }else{
                             g[count++]=Group(num, false);
                             task = k;
                         }
                    break;
            case 2: cin>>num;
                      Group::addToList(num);
                      Group::displayList();
                      cin>>task;
                      break;
            case 3: cin>>num;
                      Group::removeFromList(num);
                      Group::displayList();
                      cin>>task;
                      break;
        }
    }
    return 0;
}

