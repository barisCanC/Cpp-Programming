#include <iostream>

using namespace std;

int main()
{
//    const int max_dimension_lenght{10};
//    float cost{2.50};
//    const int tier1_threshold{100};
//    const int tier2_threshold{500};
//    
//    const float tier1_surcharge{0.10}; 
//    const float tier2_surcharge{0.25}; 
//    
//    cout << "Welcome to the shipping cost calculator" <<endl;
//    
//    cout << "All dimensions must be " << max_dimension_lenght << " inches or less or we cannot ship it." <<endl;
//    cout << "Base cost $" << cost <<endl;
//    cout << "If package volume is greater than or equal" << tier1_threshold << " cubic inches there is " << tier1_surcharge << " surcharge" <<endl;
//    cout << "If package volume is greater than or equal" << tier2_threshold << " cubic inches there is " << tier2_surcharge << " surcharge" <<endl;
//    
//    cout << "Please enter package dimensions in inches " << endl;
//    int length{} , width{}, height{};
//    cout << "length : " ;
//    cin >> length  ;
//    cout << "width : " ;
//    cin >> width;
//    cout << "height : " ;
//    cin >> height;
//    
//    //if(length > max_dimension_lenght || width >max_dimension_lenght || height > max_dimension_lenght)
//    if( !(length <= max_dimension_lenght && width <= max_dimension_lenght && height <= max_dimension_lenght) )  
//        cout << "Sorry, dimensions must be " << max_dimension_lenght << " inches or less! We cant ship it. " << endl;
//     else{
//         int volume{length * width * height};
//         if ((volume >= tier1_threshold) && (volume < tier2_threshold)){
//             cout << "There is " << tier1_surcharge << " surcharge" << endl;
//             cout << "Cost is now : $" << cost + (cost * tier1_surcharge) << " per package." <<endl;
//         }
//         else if (volume >= tier2_threshold){
//             cout << "There is " << tier2_surcharge << "  surcharge" << endl;
//             cout << "Cost is now : $" << cost + (cost * tier2_surcharge) << " per package." <<endl;
//         }
//         else{
//             cout << "Cost is base cost : $" << cost << " per package." << endl;
//         }
//     }   
    int age{};
    bool has_car{true};
    
    cout << "Enter age: " ;
    cin >> age;
    
    if(age < 16)
        cout << "Sorry, come back in " << 16 - age << " years and be sure you own a car when you come back." <<endl;
    else if (!has_car)
        cout << "Sorry, you need to buy a car before you can drive!" << endl;
    else
        cout << "Yes - you can drive!" <<endl;
    

 
}










