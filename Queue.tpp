//Queue.cpp
//implementation for Queue class
//Copyright Aaron Klapatch 2018 

template <typename T>
void Queue<T>::push(T t_input){
    m_data.resize(m_data.size() + 1, t_input);
}

template <typename T>
T Queue<T>::pop(){

    if(m_data.size() == 0){
        std::cerr << "Queue empty returning dummy value.\n";
        T tmp;
        return tmp;
    }
    T ret = m_data[m_data.size() - 1];
    m_data.pop_back();
    return ret;
}