#include<iostrem>

using namespace std;

class Formula{
  private :
  float x1,x2,mid;
  int flag,end;
public:
  Formula(float a,float b,int c)
  {
    x1 = a;
    x2 = b;
    end = c;5
    flag = 1;
  }
  float formula(float x){
    return (x*x*x - x - 1);
  }
  void solve(){
    mid = (x1 + x2)/2;
    cout<<x1 << "\t" << x2 <<"\t"<<mid<<"\t"<<formula(mid)<<endl;
    if(formula(mid)>0){
      x2 = mid;
    }
    else if(formula(mid)<0){
      x1 = mid;
    }
    else{
      return;
    }
    flag++;
    if(flag==end){
      return;
    }
  }

}
int main()
{
  Formula f(1,1.5,5);
  f.solve();
  return 0;
}
