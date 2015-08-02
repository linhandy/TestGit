int maxSubarray(int a[], int size) { //候选集合C
  if (size<=0) return -1;
  int sum = 0;                       //解集集合S
  // 这个是int的最小值
  int max = - (1 << 31);
  int cur = 0;
  while (cur < size) {              // 可行函数
    sum += a[cur++];
    if (sum > max) {                //解决函数
      max = sum;
    } else if (sum < 0) {
      sum = 0;
    }
  }
  return max;                       // 解决函数
}