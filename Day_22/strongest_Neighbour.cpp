void maximumAdjacent(int sizeOfArray, int arr[]) {

     for(int i=0;i < sizeOfArray-1;i++){
         cout<<max(arr[i],arr[i+1])<<" ";
     }
}
// Input:
// n = 6
// arr[] = {1,2,2,3,4,5}
// Output: 2 2 3 4 5
// Explanation: Maximum of arr[0] and arr[1]
// is 2, that of arr[1] and arr[2] is 2, ...
// and so on. For last two elements, maximum 
// is 5.