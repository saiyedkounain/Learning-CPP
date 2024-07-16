     int pidx = partition(arr, low, high);

        quickSort(arr,low, pidx-1);
        quickSort(arr, pidx+1, high);