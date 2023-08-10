int  sum (int count,...) {
    int som = 0;
    
    va_list ptr;
    
    va_start(ptr, count);
    
    for(int i = 0; i<count;++i)
        som += va_arg(ptr, int);
        
    va_end(ptr);
    
    return som;
}

int min(int count,...) {
    int som = MIN_ELEMENT;
    
    va_list ptr;
    
    va_start(ptr, count);
    
    for(int i = 0; i<count;++i){
        if(som > va_arg(ptr, int))
            som = va_arg(ptr, int);
    }
    va_end(ptr);
    
    return som;
}

int max(int count,...) {
     int som = MAX_ELEMENT;
    
    va_list ptr;
    
    va_start(ptr, count);
    
    for(int i = 0; i<count;++i){
        if(som < va_arg(ptr, int))
            som = va_arg(ptr, int);
    }
    va_end(ptr);
    
    return som;
}

