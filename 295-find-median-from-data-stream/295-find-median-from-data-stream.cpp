class MedianFinder {
public:
    priority_queue<int> maxx ;
    priority_queue<int,vector<int>,greater<int>> minn ;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
    //decided that max heap's size will be bigger always ;
        
        if(maxx.empty())
            maxx.push(num);
        else if(maxx.size()==minn.size())
        {
            if(num<maxx.top())
            {
                maxx.push(num);
            }
            else{
                minn.push(num);
                maxx.push(minn.top());
                minn.pop();
            }
        }
        else if(maxx.size()>minn.size())
        {
            if(num>maxx.top())
            {
                minn.push(num);
            }
            else{
                minn.push(maxx.top());
                maxx.pop();
                maxx.push(num);
            }
        }
        
        
            
    }
    
    double findMedian() {
        if(minn.size()!=maxx.size())
            return maxx.top() ;
        else
        {
            double x = minn.top() ;
            double y = maxx.top() ;
            return (x+y)/2.0 ;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */