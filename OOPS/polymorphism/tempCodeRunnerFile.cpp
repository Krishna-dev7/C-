Queue q;
    int ch;
    for(int i=0; i<4; i++){

        cout<< "Choose one operations: " << endl;
        cout<< "1. push" << endl;
        cout<< "2. pop" << endl;
        cout<< "3. display" << endl;
        cout<< "4. exit" << endl;
        cin>> ch;
        switch(ch){
            case 1:
                char str[20];
                cin>> str;
                q.insert(str);
                break;
            case 2:
                cout<< q.del();
                break;
            case 3:
                q.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<< "invalid choices." << endl;
        }
    }