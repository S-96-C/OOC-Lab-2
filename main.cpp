#include <iostream>
using namespace std;

int searchKey(int arr[], int size, int key){

for(int i=0; i < size; i++){
  if(arr[i] == key){
        return i;
        break;
    }
  }
  return -1;
}

void findMax(int arr[], int size){
  for(int i=1; i < size; i++){
    if(arr[0]< arr[i]){
      arr[0] = arr[i];
    }
  }
  cout << "Max Value:" << arr[0] << endl;
}

int main()
{
  int const size = 10;
  int numbers[size], num, result;

  //store values inside the array

  for (int j =0; j < size; j++)
  {
    cout << "Value of numbers [" << j << "] :" << endl;
    cin >> numbers[j];

  }

  cout << "Enter the search value:" << endl;
  cin >> num;

  result = searchKey(numbers,size,num);

  if (result == -1){
    cout << "Value not found" << endl;
  }
  else{
    cout << "Search value is matching with index[" << result << "]" << endl;
  }
  findMax(numbers,size);

  return 0;
}