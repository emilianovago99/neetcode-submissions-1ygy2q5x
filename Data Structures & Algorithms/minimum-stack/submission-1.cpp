struct Nodo {
    int val;
    int min;
    Nodo* siguiente;
};

class MinStack {
   
private:
    Nodo* nodo;

public:
    MinStack() {
    nodo = NULL;
        
    }
    
    void push(int val) {
        Nodo* nodonuevo = new Nodo();
        nodonuevo->val = val;

        if(nodo == NULL)
        {
            nodonuevo->min = val;
        }
        else
        {
            nodonuevo->min = min(val,nodo->min);
        }
        nodonuevo->siguiente = nodo;
        nodo = nodonuevo;
    }
    
    void pop() {
        if(nodo == NULL)
            return;

        Nodo* nodoTemporal = nodo;
        nodo = nodo->siguiente;

        delete nodoTemporal;




    }
    
    int top() {
        if(nodo == NULL)
            return -1;
        
        return nodo->val;
    }
    
    int getMin() {
        if(nodo == NULL)
            return -1;

        return nodo->min;
    }
};
