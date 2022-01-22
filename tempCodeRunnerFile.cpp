for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first - v[i].second)
            arr[i] = (v[i].first - v[i].second) * (n - i);
        else
            arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            idx = i;
        }
    }
    if (max == 0)
        cout << "0";
    else
    