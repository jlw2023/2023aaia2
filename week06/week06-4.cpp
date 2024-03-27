int maxFrequencyElements(int* nums, int numsSize) {
    int a[101] ={};//每個陣列格子裡,都會補0 統計數字出現的次數一開始是0
    int best = 0;//出現最多次數的是best次
    for(int i=0; i<numsSize; i++){
        int now = nums[i];//現在要統計的數字是now
        a[now]++;//現在的數字now統計出現的次數 a[now]++;增加1次
        if(a[now]>best) best = a[now];

    }
    int ans = 0;
    for(int i=0; i<=100; i++){
        if(a[i]==best) ans+=a[i];//是最好的答案,那增加次數(剛剛統計幾個, 加幾個)
    }
    return ans;
}
