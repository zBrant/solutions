int  sum (int count,...) {
    int s = 0;
    
    va_list ptr;
    
    va_start(ptr, count);
    
    for(int i = 0; i<count;++i)
        s += va_arg(ptr, int);
        
    va_end(ptr);
    
    return s;
}

int min(int count,...) {
    int m = MIN_ELEMENT;
    
    va_list ptr;
    
    va_start(ptr, count);
    
    for(int i = 0; i<count;++i){
        if(m > va_arg(ptr, int))
            m = va_arg(ptr, int);
    }
    va_end(ptr);
    
    return m;
}

int max(int count,...) {
     int m = MAX_ELEMENT;
    
    va_list ptr;
    
    va_start(ptr, count);
    
    for(int i = 0; i<count;++i){
        if(m < va_arg(ptr, int))
            m = va_arg(ptr, int);
    }
    va_end(ptr);
    
    return m;
}

