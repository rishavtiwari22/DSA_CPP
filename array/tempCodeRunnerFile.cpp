int idx = -1;
    for (int i = 0; i < n-1; i++){
        if (arr[i] < arr[i+1]){
            idx = i;
            break;
        }
    }

    if (idx == -1){
        reverse(arr.begin(), arr.end());
        
    }else{
        for (int i = n - 1; i > 0; i++){
            if (arr[i] > arr[idx]){
                swap(arr[i], arr[idx]);
                break;
            }
        }
        reverse(arr.begin() + idx + 1, arr.end());
    }