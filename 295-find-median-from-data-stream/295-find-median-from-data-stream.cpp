class MedianFinder {
public:
    priority_queue<int> maxx ;
    priority_queue<int,vector<int>,greater<int>> minn ;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxx.empty())
           { maxx.push(num) ;
           return;
           }
        if(maxx.size()>minn.size()){
            
            if(num>maxx.top())
                minn.push(num) ;
            else
            {
                minn.push(maxx.top()) ;
                maxx.pop();
                maxx.push(num) ;
            }
        }
        else {
            if(num>maxx.top())
            {
                minn.push(num) ;
                maxx.push(minn.top()) ;
                minn.pop() ;
            }
            else
                maxx.push(num);
        }
        
    }
    
    double findMedian() {
        if(maxx.size()!=minn.size())
            return maxx.top() ;
        else
        {
            double x = maxx.top() ;
            double y = minn.top(); 
            
            return( x+y)/2 ;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */