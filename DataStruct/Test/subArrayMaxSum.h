int maxSubarray(int a[], int size) { //��ѡ����C
  if (size<=0) return -1;
  int sum = 0;                       //�⼯����S
  // �����int����Сֵ
  int max = - (1 << 31);
  int cur = 0;
  while (cur < size) {              // ���к���
    sum += a[cur++];
    if (sum > max) {                //�������
      max = sum;
    } else if (sum < 0) {
      sum = 0;
    }
  }
  return max;                       // �������
}