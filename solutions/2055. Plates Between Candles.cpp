        //         }
        //         res.push_back(ct2);
        //     }
        //     ptr++;
        //     }
        //     return res;
     
        
        //optimised one: using prefix sum ;
        int counter = 0, total = 0, n = s.length();
vector<int> lTor (n), rTol(n);
for(int i = 0 ; i < n; i++){
    if(s[i] == '|')
        counter = total;
    else
        total++;
    rTol[i] = counter;
}
counter = 0, total = 0;
for(int i = n - 1; i >= 0; i--) {
    if(s[i] == '|')
        counter = total;
    else
        total++;
    lTor[i] = counter;
}
vector<int> res;
for(int i = 0; i < v.size(); i++) {
    int left = v[i][0];
    int right = v[i][1];
    counter = lTor[left] + rTol[right] - total;
    if(counter < 0) counter = 0;
    res.push_back(counter);
}
return res;
        
    }
};
