while (!correctInput){
                cout << "How many you would like to pick up?" << endl;
                cin >> input;

                if (input >= 1 && input <= 4){
                    correctInput = true;
                }
                else{
                    cout << "Please enter any number between 1 and 4 only!!!" << endl;
                }
            }